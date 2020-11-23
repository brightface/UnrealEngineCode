#include "CPlayer.h"
#include "Global.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Animation/AnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "Components/CMontagesComponent.h"
#include "Components/SphereComponent.h"

ACPlayer::ACPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0, 540, 0);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetCapsuleComponent());

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("FollowCamera");
	FollowCamera->SetupAttachment(CameraBoom);

	//enum형태로 가져올려 하는거야.
	//자료형 형태로 찾아올려고 하는거야. 소켓 정의해놓은 이놈하고 같다. 그걸 갖다 쓸려 하는거야.
	UEnum* socketNames = FindObject<UEnum>(ANY_PACKAGE, L"EBodyColliderPart", true);
	//자료형 객체로 찾아올려고, 리플렉션기능, 소켓 정의해놓은 이름하고 같잖아. 그거 갖다 쓸려하는거야.
	for (int i = 0; i < (int)EBodyColliderPart::Max; i++) 
	{
		FString str = "BodyCollider" + FString::FromInt(i + 1);
		BodyColliders[i] = CreateDefaultSubobject<USphereComponent>(FName(*str));
		//Fstring을 Fname으로

		BodyColliders[i]->InitSphereRadius(5); 
		//기본값으로 다 돌려
		//이걸 다 소켓으로 보낼거야. 소켓명 뭐라 했나. 01 짜 뺄게
		FString socketName = socketNames->GetNameStringByIndex(i);
		//소켓에다 각각보낼거거든 - 참조할 소ㅔ켓이름이돼
		BodyColliders[i]->SetupAttachment(GetMesh(), FName(*socketName));
		//여기서 조졌다. 처음부터 다시 한다.
	}

	Equipment = CreateDefaultSubobject<UCEquipmentComponent>("Equipment");
	Montages = CreateDefaultSubobject<UCMontagesComponent>("Montages");
	StateManager = CreateDefaultSubobject<UCStateManagerComponent>("StateManager");
	Collision = CreateDefaultSubobject<UCCollisionComponent>("Collision");


	CameraBoom->TargetArmLength = 450;
	CameraBoom->SocketOffset = FVector(0, 0, 180);
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->bEnableCameraLag = true;
	CameraBoom->bEnableCameraRotationLag = true;
	CameraBoom->bDoCollisionTest = false;

	FollowCamera->RelativeRotation = FRotator(-15, 0, 0);
}

void ACPlayer::OnBodyCollider(EBodyColliderPart InPart)
{
	BodyColliders[(int)InPart]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	/*for (int i = 0; i < (int)EBodyColliderPart::Max; i++) {
		BodyColliders[i]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	*/
}

void ACPlayer::OffBodyCollider(EBodyColliderPart InPart)
{
	BodyColliders[(int)InPart]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
/*
	for (int i = 0; i < (int)EBodyColliderPart::Max; i++) {
		BodyColliders[i]->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}*/
	TArray<AActor *>* actors = HittedMap.Find(BodyColliders[(int)InPart]);
	actors->Empty();
	
	////머하는지 다 알지? C떄 많이 했을거 아니야.
	//for (TPair<USphereComponent *, TArray<AActor *>>& data : HittedMap)
	//	data.Value.Empty();
	//이게 배열에서 모든걸 제거한다. 레퍼런스로 한다.
	//충돌되었을때 해줄일이 자기에게 해주느냐 안해주느냐.
	
}

void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	StateManager->OnStateChanged.AddDynamic(this, &ACPlayer::OnStateChanged);

	for (int i = 0; i < (int)EBodyColliderPart::Max; i++)
	{
		BodyColliders[i] -> SetCollisionEnabled(ECollisionEnabled::NoCollision);
		BodyColliders[i]-> OnComponentBeginOverlap.AddDynamic(this, &ACPlayer::OnBodyColliderBeginOverlap);
	
		HittedMap.Add(BodyColliders[i], TArray < AActor *>());
	}
}

void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPlayer::OnStateChanged(EState InPrevState, EState InNewState)
{
}


void ACPlayer::OnCollisionApplyActorDamage(FHitResult InHitResult)
{
	CheckTrue(InHitResult.GetActor() == NULL);

	CLog::Log(InHitResult.GetActor()->GetName());
}

void ACPlayer::ToggleCombat()
{
	Equipment->ToggleComat();
}

void ACPlayer::MeleeAttack(EMeleeAttackType InType)
{
	CheckFalse(Equipment->CanMeleeAttack(StateManager));
	StateManager->SetState(EState::Attacking);

	MeleeAttackType = InType;

	EMontageType type = CStaticFunctions::ConvertMeleeAttackToMontageType(MeleeAttackType);
	TArray<FMontageAction> actions = Montages->GetMontagesForType(type);

	uint32 lastAttackIndex = actions.Num() - 1;
	uint32 montageIndex = MeleeAttackCounter > lastAttackIndex ? lastAttackIndex : MeleeAttackCounter;

	MeleeAttackCounter++;
	if (MeleeAttackCounter > lastAttackIndex)
		ResetMeleeAttackCounter();


	if (actions[montageIndex].Montage != NULL)
	{
		UAnimMontage* montage = actions[montageIndex].Montage;
		float playRatio = actions[montageIndex].PlayRatio;

		UAnimInstance* instance = GetMesh()->GetAnimInstance();
		float duration = instance->Montage_Play(actions[montageIndex].Montage, playRatio, EMontagePlayReturnType::Duration);
		UKismetSystemLibrary::K2_SetTimer(this, "ResetMeleeAttackCounter", duration * 0.8f, false);

		return;
	}
}

void ACPlayer::ResetMeleeAttackCounter()
{
	MeleeAttackCounter = 0;
}

void ACPlayer::OnBodyColliderBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	//히티드 맵에서 여기서 찾아야지
	//CheckTrue(OtherActor == this);
	//CheckTrue(OverlappedComponent->GetCollisionProfileName() != "Pawn");

	USphereComponent* hitter = Cast<USphereComponent>(OverlappedComponent);
	TArray<AActor *>* actors = HittedMap.Find(hitter);

	CheckTrue(actors->Find(OtherActor) < -1);
	
	//충돌된놈 로그를 한번띄워보자
	CLog::Log(OtherActor);
	//이제 애님 노티파이 가서 켜줄거 켜줘야지
	//근데 가서 체크널 
	actors->Add(OtherActor);

}
