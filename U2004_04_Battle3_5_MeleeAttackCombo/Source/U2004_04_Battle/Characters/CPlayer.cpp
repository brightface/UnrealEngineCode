#include "CPlayer.h"
#include "Global.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Animation/AnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CMontagesComponent.h"

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


	UEnum* socketNames = FindObject<UEnum>(ANY_PACKAGE, L"EBodyColliderPart", true);
	for (int i = 0; i < (int)EBodyColliderPart::Max; i++)
	{
		FString str = "BodyCollider" + FString::FromInt(i + 1);
		BodyColliders[i] = CreateDefaultSubobject<USphereComponent>(FName(*str));
		BodyColliders[i]->InitSphereRadius(5);

		FString socketName = socketNames->GetNameStringByIndex(i);
		BodyColliders[i]->SetupAttachment(GetMesh(), FName(*socketName));
	}


	Equipment = CreateDefaultSubobject<UCEquipmentComponent>("Equipment");
	Montages = CreateDefaultSubobject<UCMontagesComponent>("Montages");
	StateManager = CreateDefaultSubobject<UCStateManagerComponent>("StateManager");


	CameraBoom->TargetArmLength = 450;
	CameraBoom->SocketOffset = FVector(0, 0, 180);
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->bEnableCameraLag = true;
	CameraBoom->bEnableCameraRotationLag = true;
	CameraBoom->bDoCollisionTest = false;

	FollowCamera->RelativeRotation = FRotator(-15, 0, 0);
}

void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	StateManager->OnStateChanged.AddDynamic(this, &ACPlayer::OnStateChanged);

	for (int i = 0; i < (int)EBodyColliderPart::Max; i++)
	{
		BodyColliders[i]->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		BodyColliders[i]->OnComponentBeginOverlap.AddDynamic(this, &ACPlayer::OnBodyColliderBeginOverlap);

		HittedMap.Add(BodyColliders[i], TArray<AActor *>());
	}	
}

void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
						
}

void ACPlayer::OnStateChanged(EState InPrevState, EState InNewState)
{

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
	//몽타주 하나밖에 없다는 소리야 그러면 하나더 만들어줘야겠지

	//카운트 
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
		
		//이게 다음동작으로 가게 한다. 클로즈로 버퍼보내준다음에
		UKismetSystemLibrary::K2_SetTimer(this, "ResetMeleeAttackCounter", duration * 0.8f, false);
		
		return;
	}
}

void ACPlayer::OnBodyCollider(EBodyColliderPart InPart)
{
	BodyColliders[(int)InPart]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void ACPlayer::OffBodyCollider(EBodyColliderPart InPart)
{
	BodyColliders[(int)InPart]->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	TArray<AActor *>* actors = HittedMap.Find(BodyColliders[(int)InPart]);
	actors->Empty();
}

void ACPlayer::ResetMeleeAttackCounter()
{
	MeleeAttackCounter = 0;
}

void ACPlayer::OnBodyColliderBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	CheckTrue(OtherActor == this);

	USphereComponent* hitter = Cast<USphereComponent>(OverlappedComponent);
	TArray<AActor *>* actors = HittedMap.Find(hitter);
	
	CheckTrue(actors->Find(OtherActor) > -1);

	//TODO : Send Damage
	CLog::Log(OtherActor);

	actors->Add(OtherActor);
}
