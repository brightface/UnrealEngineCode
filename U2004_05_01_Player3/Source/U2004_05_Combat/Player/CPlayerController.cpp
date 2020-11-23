#include "CPlayerController.h"
#include "Global.h"
#include "Player/CPlayer.h"
#include "Components/COptionComponent.h"
#include "Components/CStateComponent.h"

ACPlayerController::ACPlayerController()
{
	Input = CreateDefaultSubobject<UInputComponent>("Input");
}

void ACPlayerController::BeginPlay()
{
	Super::BeginPlay();

	Option = Player->GetOptionComponent();
	State = Player->GetStateComponent();
}

void ACPlayerController::OnPossess(APawn * aPawn)
{
	Super::OnPossess(aPawn);

	Player = Cast<ACPlayer>(aPawn);
	InputComponent = Input;
}

void ACPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	Input->BindAxis("HorizontalLook", this, &ACPlayerController::OnHorizontalLook);
	Input->BindAxis("VerticalLook", this, &ACPlayerController::OnVerticalLook);
	Input->BindAxis("MoveForward", this, &ACPlayerController::OnMoveForward);
	Input->BindAxis("MoveRight", this, &ACPlayerController::OnMoveRight);

	Input->BindAction("Walk", EInputEvent::IE_Pressed, this, &ACPlayerController::OnWalk);
	Input->BindAction("Walk", EInputEvent::IE_Released, this, &ACPlayerController::OffWalk);
	Input->BindAction("Jump/Roll", EInputEvent::IE_Pressed, this, &ACPlayerController::OnJumpAndRoll);
	Input->BindAction("Jump/Roll", EInputEvent::IE_Released, this, &ACPlayerController::OffJumpAndRoll);

	Input->BindAction("LeftHanded", EInputEvent::IE_Pressed, this, &ACPlayerController::OnLeftHanded);
	Input->BindAction("Sword", EInputEvent::IE_Pressed, this, &ACPlayerController::OnSword);
	Input->BindAction("Wizard", EInputEvent::IE_Pressed, this, &ACPlayerController::OnWizard);
	Input->BindAction("Attack", EInputEvent::IE_Pressed, this, &ACPlayerController::OnAttack);
}

void ACPlayerController::OnHorizontalLook(float Axis)
{
	Player->AddControllerYawInput(Axis * Option->GetHorizontalLookRate() * GetWorld()->GetDeltaSeconds());
}

void ACPlayerController::OnVerticalLook(float Axis)
{
	Player->AddControllerPitchInput(Axis * Option->GetVerticalLookRate() * GetWorld()->GetDeltaSeconds());
}

void ACPlayerController::OnMoveForward(float Axis)
{
	CheckFalse(State->IsAlive());
	CheckFalse(State->CanMove());

	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetForwardVector();

	Player->AddMovementInput(direction, Axis);
}

void ACPlayerController::OnMoveRight(float Axis)
{
	CheckFalse(State->IsAlive());
	CheckFalse(State->CanMove());

	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetRightVector();

	Player->AddMovementInput(direction, Axis);
}

void ACPlayerController::OnAttack()
{
	
}

void ACPlayerController::OnWalk()
{
	Player->GetCharacterMovement()->MaxWalkSpeed = Option->GetPlayerWalkSpeed();
}

void ACPlayerController::OffWalk()
{
	Player->GetCharacterMovement()->MaxWalkSpeed = Option->GetPlayerRunSpeed();
}

void ACPlayerController::OnJumpAndRoll()
{
	CheckFalse(State->IsAlive());
	CheckFalse(State->CanMove());

	Player->Jump();
}

void ACPlayerController::OffJumpAndRoll()
{
	Player->StopJumping();
}

void ACPlayerController::OnLeftHanded()
{
}

void ACPlayerController::OnSword()
{
	bool b = true;
	b &= State->GetCombatType() == ECombatType::Unarmed;
	b &= State->GetStateType() == EStateType::Idle;

	if (b == true)
	{
		State->ChangeCombatType(ECombatType::Sword);
		
		return;
	}
		

	b = true;
	b &= State->GetCombatType() == ECombatType::Sword;
	b &= State->GetStateType() == EStateType::Idle;

	if (b == true)
	{	
		State->ChangeCombatType(ECombatType::Unarmed);
	}
		
}

void ACPlayerController::OnWizard()
{

}
