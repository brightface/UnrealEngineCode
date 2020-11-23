#include "CPlayerController.h"
#include "Global.h"
#include "Characters/CPlayer.h"
#include "Components/CEquipmentComponent.h"
#include "Components/CStateManagerComponent.h"

ACPlayerController::ACPlayerController()
{
	Input = CreateDefaultSubobject<UInputComponent>("Input");
	InputBuffer = CreateDefaultSubobject<UCInputBufferComponent>("InputBuffer");
}

void ACPlayerController::BeginPlay()
{
	Super::BeginPlay();

	InputBuffer->OnInputBufferConsumed.AddDynamic(this, &ACPlayerController::OnInputBufferConsumed);
	InputBuffer->OnInputBufferClose.AddDynamic(this, &ACPlayerController::OnInputBuferClose);
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
	
	Input->BindAction("ToggleCombat", EInputEvent::IE_Pressed, this, &ACPlayerController::OnToggleCombat);
	Input->BindAction("Attack", EInputEvent::IE_Pressed, this, &ACPlayerController::OnAttack);
}

void ACPlayerController::OnHorizontalLook(float Axis)
{
	Player->AddControllerYawInput(Axis * HorizontalLookRate * GetWorld()->GetDeltaSeconds());
}

void ACPlayerController::OnVerticalLook(float Axis)
{
	Player->AddControllerPitchInput(Axis * VerticalLookRate * GetWorld()->GetDeltaSeconds());
}

void ACPlayerController::OnMoveForward(float Axis)
{
	CheckFalse(Player->GetStateManager()->IsAlive());

	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetForwardVector();

	Player->AddMovementInput(direction, Axis);
}

void ACPlayerController::OnMoveRight(float Axis)
{
	CheckFalse(Player->GetStateManager()->IsAlive());

	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetRightVector();

	Player->AddMovementInput(direction, Axis);
}

void ACPlayerController::OnToggleCombat()
{
	InputBuffer->UpdateKey(EInputBufferKey::ToggleCombat);
}

void ACPlayerController::OnAttack()
{
	if (Player->GetEquipment()->InCombat() == false)
	{
		InputBuffer->UpdateKey(EInputBufferKey::ToggleCombat);

		return;
	}

	CheckFalse(Player->GetEquipment()->IsCombatType(ECombatType::Unarmed));

	InputBuffer->UpdateKey(EInputBufferKey::LightAttack);
}

void ACPlayerController::OnInputBufferConsumed(EInputBufferKey InKey)
{
	switch (InKey)
	{
		case EInputBufferKey::ToggleCombat: Player->ToggleCombat();  break;
		case EInputBufferKey::LightAttack: Player->MeleeAttack(EMeleeAttackType::Light); break;
	}
}

void ACPlayerController::OnInputBuferClose()
{
	CheckTrue(Player->GetStateManager()->IsStateEqual(EState::Disable));

	Player->GetStateManager()->ResetState(0.0f);
}
