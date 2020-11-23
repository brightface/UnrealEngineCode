#include "CPlayerController.h"
#include "Global.h"
#include"Characters/CPlayer.h"
#include "Components/CEquipmentComponent.h"
#include"Components/CStateComponent.h"

ACPlayerController::ACPlayerController()
{
	Input = CreateDefaultSubobject<UInputComponent>("Input");
	InputBuffer = CreateDefaultSubobject<UCInputBufferComponent>("InputBuffer");
}

void ACPlayerController::BeginPlay()
{
	Super::BeginPlay();

	InputBuffer->OnInputBufferConsumed.AddDynamic(this, &ACPlayerController::OnInputBufferConsumed);
	InputBuffer->OnInputBufferClose.AddDynamic(this, &ACPlayerController::OnInputBufferClose);
}

void ACPlayerController::OnPossess(APawn * aPawn)
{
	Super::OnPossess(aPawn);

	//CLog::Log(aPawn);
	//CLog::Log(aPawn->GetName());

	Player = Cast<ACPlayer>(aPawn);
	
	InputComponent = Input;//키 입력을 넣어준다 그래야 키 입력들이 작동된다

	
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
	CheckFalse(Player->GetState()->IsAlive());//사망일때 카메라는 움직일수 있다 근데 생존이 아니면 움직이면 안된다

	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetForwardVector();

	Player->AddMovementInput(direction, Axis);
}

void ACPlayerController::OnMoveRight(float Axis)
{
	CheckFalse(Player->GetState()->IsAlive());

	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetRightVector();

	Player->AddMovementInput(direction, Axis);
}

void ACPlayerController::OnToggleCombat()//여기서부터가 입력을 처리하는 흐름이다
{
	InputBuffer->UpdateKey(EInputBufferKey::ToggleCombat);//공격모드
}

void ACPlayerController::OnAttack()
{
	if (Player->GetEquipment()->InCombat() == false)//한번눌렸을때 ToggleCombat모드로 들어간다 바로 공격하는게아니라 공격모드에서 공격해야되서 그렇다
	{
		InputBuffer->UpdateKey(EInputBufferKey::ToggleCombat);

		return;
	}

	CheckFalse(Player->GetEquipment()->IsCombatType(ECombatType::Unarmed));//Unarmed가 아니라면 주먹공격을 하면안된다 Unarmed가 주먹공격이다

	InputBuffer->UpdateKey(EInputBufferKey::LightAttack);//InputBuffer에 명령을 내려준다 LigjttAttack공격을 내려준다
}

void ACPlayerController::OnInputBufferConsumed(EInputBufferKey InKey)//상황에 따라 분배해준다
{
	switch (InKey)
	{
	   case EInputBufferKey::ToggleCombat: Player->ToggleCombat();  break; 
	   case EInputBufferKey::LightAttack: Player->MeleeAttack(EMeleeAttackType::Light); break;

	}
}

void ACPlayerController::OnInputBufferClose()
{
	CheckTrue(Player->GetState()->IsStateEqual(EState::Disable));//Disable은 아무것도 입력할수없는상태 아무것도없다면 굳이 처리할필요가없으니깐 리턴한다

	Player->GetState()->ResetState(0.0f);//NotifyEnd()에서 Close 호출될때 바로 스테이트를 바로 초기화 할거다
	//ResetState가 대기시간이다 얼마뒤에 초기화 할거냐 0.0f는 바로 리셋을시키겠다는 얘기다
}
