#include "CPlayerController.h"
#include "Global.h"
#include "Characters/CPlayer.h"

ACPlayerController::ACPlayerController()
{
	Input = CreateDefaultSubobject<UInputComponent>("Input");
}

void ACPlayerController::BeginPlay()
{
	Super::BeginPlay();

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

	Input->BindAction("InCombat", EInputEvent::IE_Pressed, this, &ACPlayerController::OnInCombat);
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
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetForwardVector();

	Player->AddMovementInput(direction, Axis);
}

void ACPlayerController::OnMoveRight(float Axis)
{
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetRightVector();

	Player->AddMovementInput(direction, Axis);
}

void ACPlayerController::OnInCombat()
{

}

void ACPlayerController::OnAttack()
{
	
}