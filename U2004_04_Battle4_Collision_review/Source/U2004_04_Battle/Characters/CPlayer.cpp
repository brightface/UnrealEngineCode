#include "CPlayer.h"
#include "Global.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Animation/AnimInstance.h"
#include "Components/CapsuleComponent.h"
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

void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	StateManager->OnStateChanged.AddDynamic(this, &ACPlayer::OnStateChanged);

	Collision->OnCollisionActivated.AddDynamic(this, &ACPlayer::OnCollisionActivated);
	Collision->OnCollisionDeactivated.AddDynamic(this, &ACPlayer::OnCollisionDeactivated);
	Collision->OnCollisionApplyActorDamage.AddDynamic(this, &ACPlayer::OnCollisionApplyActorDamage);
}

void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPlayer::OnStateChanged(EState InPrevState, EState InNewState)
{
}

void ACPlayer::OnCollisionActivated(ECollisionPart InPart)
{
	switch (InPart)
	{
		case ECollisionPart::LeftHand: Collision->SetCollisionMesh(GetMesh(), LeftHandCollisionSocket); break;
		case ECollisionPart::RightHand: Collision->SetCollisionMesh(GetMesh(), RightHandCollisionSocket); break;
		case ECollisionPart::LeftFoot: Collision->SetCollisionMesh(GetMesh(), LeftFootCollisionSocket); break;
		case ECollisionPart::RightFoot: Collision->SetCollisionMesh(GetMesh(), RightFootCollisionSocket); break;
	}
}

void ACPlayer::OnCollisionDeactivated()
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