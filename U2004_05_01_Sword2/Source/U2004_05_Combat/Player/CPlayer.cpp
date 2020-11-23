#include "CPlayer.h"
#include "Global.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/COptionComponent.h"
#include "Weapons/CWeapon.h"
#include "Weapons/CCombo_Sword.h"

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


	CContentFinder::GetClass<ACCombo_Sword>(&SwordClass, "Blueprint'/Game/Weapons/BP_CCombo_Sword.BP_CCombo_Sword_C'");
}

void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
	FActorSpawnParameters params;
	params.Owner = this;
	FTransform transform;
	Sword = Cast<ACCombo_Sword>(GetWorld()->SpawnActor(SwordClass, &transform, params));
	Sword->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), HolsterSwordSocket);
}

void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UCStateComponent* ACPlayer::GetWeapon_StateComponent() const
{
	return StateComponent;
}

ACWeapon * ACPlayer::GetWeapon_Current() const
{
	return CurrWeapon;
}

void ACPlayer::Sword_Attach()
{
	Sword->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), SwordSocket);
}

void ACPlayer::Sword_Detach()
{
	Sword->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), HolsterSwordSocket);
}

void ACPlayer::Sword_Equip()
{
	StateComponent->ChangeStateType(EStateType::Drawing);
	StateComponent->SetCanMove(false);

	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
}

void ACPlayer::Sword_Equipped()
{
	StateComponent->ChangeStateType(EStateType::Idle);
	StateComponent->SetCanMove(true);

	StateComponent->ChangeCombatType(ECombatType::Sword);

	CurrWeapon = Sword;
	//TODO: 무기교체 델리게이션 콜
}

void ACPlayer::Sword_Sheath()
{
	StateComponent->ChangeStateType(EStateType::Sheathing);
	StateComponent->SetCanMove(false);

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void ACPlayer::Sword_Sheathed()
{
	StateComponent->ChangeStateType(EStateType::Idle);
	StateComponent->SetCanMove(true);

	StateComponent->ChangeCombatType(ECombatType::Unarmed);

	CurrWeapon = NULL;
	//TODO: 무기교체 델리게이션 콜
}

void ACPlayer::Attack()
{
	if (CurrWeapon != NULL)
		CurrWeapon->Attack();
}
//마지막 콤보였다면 
void ACPlayer::LastAttackEffect()
{
	//마지막공격일때 콜하도록 할거야.
	CLog::Print("Last Attack");
}
