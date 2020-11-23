#include "CPlayer.h"
#include "Global.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/COptionComponent.h"
#include "Weapons/CWeapon_Sword.h"

ACPlayer::ACPlayer()
{
	PrimaryActorTick.bCanEverTick = true;


	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0, 540, 0);


	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetMesh());

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("FollowCamera");
	FollowCamera->SetupAttachment(CameraBoom);


	OptionComponent = CreateDefaultSubobject<UCOptionComponent>("OptionComponent");
	StateComponent = CreateDefaultSubobject<UCStateComponent>("StateComponent");


	USkeletalMesh* characterMesh;
	CContentFinder::GetAsset<USkeletalMesh>(&characterMesh, "SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
	GetMesh()->SetSkeletalMesh(characterMesh);
	GetMesh()->RelativeLocation = FVector(0, 0, -90);
	GetMesh()->RelativeRotation = FRotator(0, -90, 0);

	CameraBoom->TargetArmLength = 280;
	CameraBoom->RelativeLocation = FVector(0, 0, 140);
	CameraBoom->RelativeRotation = FRotator(0, 90, 0);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->bEnableCameraLag = true;

	FollowCamera->RelativeLocation = FVector(-16, 80, 33);
	FollowCamera->RelativeRotation = FRotator(-10, 0, 0);
}

void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
	//트랜스폼 넣을 필요 없다.
	FActorSpawnParameters params;
	params.Owner = this;
	//스판 파라미터 들어가는데
	//칼생성
	Sword = GetWorld()->SpawnActor<ACWeapon_Sword>(params);
	//칼생성 소켓붙이기
	Sword->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), "Holster_Sword");
	
	StateComponent->OnCombatTypeChanged.AddDynamic(this, &ACPlayer::OnCombatTypeChanged);
	StateComponent->OnStateTypeChanged.AddDynamic(this, &ACPlayer::OnStateTypeChanged);
}

void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPlayer::OnCombatTypeChanged(ECombatType InPrevType, ECombatType InNewType)
{
	if (InPrevType == ECombatType::Unarmed)
	{
		switch (InNewType)
		{
			case ECombatType::Sword: 
			{
				StateComponent->ChangeStateType(EStateType::Drawing);
			}
			break;

			case ECombatType::Wizard:
			{

			}
			break;
		}
	}

	switch (InPrevType)
	{
		case ECombatType::Sword:
		{
			StateComponent->ChangeStateType(EStateType::Sheathing);
		}
		break;

		case ECombatType::Wizard:
		{

		}
		break;
	}
}

void ACPlayer::OnStateTypeChanged(EStateType InPrevType, EStateType InNewType)
{
	if (StateComponent->GetCombatType() == ECombatType::Sword)
	{
		if (InPrevType == EStateType::Idle)
			Begin_SwordEvent();
	}//if (StateComponent->GetCombatType())	
}

void ACPlayer::AttachSwordEvent()
{
	if (StateComponent->GetCombatType() == ECombatType::Sword)
	{
		Sword->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), "Sword");

		return;
	}
	//소켓붙이기	
	Sword->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), "Holster_Sword");
}

void ACPlayer::Begin_SwordEvent()
{
	StateComponent->SetCanMove(false);

	if (StateComponent->GetStateType() == EStateType::Drawing)
	{
		bUseControllerRotationYaw = true;
		GetCharacterMovement()->bOrientRotationToMovement = false;

		return;
	}
	
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void ACPlayer::End_SwordEvent()
{
	StateComponent->SetCanMove(true);
	StateComponent->ChangeStateType(EStateType::Idle);
}

void ACPlayer::Attack()
{
}

void ACPlayer::EndAttack()
{
}
