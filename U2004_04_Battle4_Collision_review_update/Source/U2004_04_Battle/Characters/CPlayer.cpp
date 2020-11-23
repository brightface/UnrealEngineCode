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

	//enum���·� �����÷� �ϴ°ž�.
	//�ڷ��� ���·� ã�ƿ÷��� �ϴ°ž�. ���� �����س��� �̳��ϰ� ����. �װ� ���� ���� �ϴ°ž�.
	UEnum* socketNames = FindObject<UEnum>(ANY_PACKAGE, L"EBodyColliderPart", true);
	//�ڷ��� ��ü�� ã�ƿ÷���, ���÷��Ǳ��, ���� �����س��� �̸��ϰ� ���ݾ�. �װ� ���� �����ϴ°ž�.
	for (int i = 0; i < (int)EBodyColliderPart::Max; i++) 
	{
		FString str = "BodyCollider" + FString::FromInt(i + 1);
		BodyColliders[i] = CreateDefaultSubobject<USphereComponent>(FName(*str));
		//Fstring�� Fname����

		BodyColliders[i]->InitSphereRadius(5); 
		//�⺻������ �� ����
		//�̰� �� �������� �����ž�. ���ϸ� ���� �߳�. 01 ¥ ����
		FString socketName = socketNames->GetNameStringByIndex(i);
		//���Ͽ��� ���������Űŵ� - ������ �Ҥ����̸��̵�
		BodyColliders[i]->SetupAttachment(GetMesh(), FName(*socketName));
		//���⼭ ������. ó������ �ٽ� �Ѵ�.
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
	
	////���ϴ��� �� ����? C�� ���� ������ �ƴϾ�.
	//for (TPair<USphereComponent *, TArray<AActor *>>& data : HittedMap)
	//	data.Value.Empty();
	//�̰� �迭���� ���� �����Ѵ�. ���۷����� �Ѵ�.
	//�浹�Ǿ����� �������� �ڱ⿡�� ���ִ��� �����ִ���.
	
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
	//��Ƽ�� �ʿ��� ���⼭ ã�ƾ���
	//CheckTrue(OtherActor == this);
	//CheckTrue(OverlappedComponent->GetCollisionProfileName() != "Pawn");

	USphereComponent* hitter = Cast<USphereComponent>(OverlappedComponent);
	TArray<AActor *>* actors = HittedMap.Find(hitter);

	CheckTrue(actors->Find(OtherActor) < -1);
	
	//�浹�ȳ� �α׸� �ѹ��������
	CLog::Log(OtherActor);
	//���� �ִ� ��Ƽ���� ���� ���ٰ� �������
	//�ٵ� ���� üũ�� 
	actors->Add(OtherActor);

}
