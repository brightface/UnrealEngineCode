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
	
	InputComponent = Input;//Ű �Է��� �־��ش� �׷��� Ű �Էµ��� �۵��ȴ�

	
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
	CheckFalse(Player->GetState()->IsAlive());//����϶� ī�޶�� �����ϼ� �ִ� �ٵ� ������ �ƴϸ� �����̸� �ȵȴ�

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

void ACPlayerController::OnToggleCombat()//���⼭���Ͱ� �Է��� ó���ϴ� �帧�̴�
{
	InputBuffer->UpdateKey(EInputBufferKey::ToggleCombat);//���ݸ��
}

void ACPlayerController::OnAttack()
{
	if (Player->GetEquipment()->InCombat() == false)//�ѹ��������� ToggleCombat���� ���� �ٷ� �����ϴ°Ծƴ϶� ���ݸ�忡�� �����ؾߵǼ� �׷���
	{
		InputBuffer->UpdateKey(EInputBufferKey::ToggleCombat);

		return;
	}

	CheckFalse(Player->GetEquipment()->IsCombatType(ECombatType::Unarmed));//Unarmed�� �ƴ϶�� �ָ԰����� �ϸ�ȵȴ� Unarmed�� �ָ԰����̴�

	InputBuffer->UpdateKey(EInputBufferKey::LightAttack);//InputBuffer�� ����� �����ش� LigjttAttack������ �����ش�
}

void ACPlayerController::OnInputBufferConsumed(EInputBufferKey InKey)//��Ȳ�� ���� �й����ش�
{
	switch (InKey)
	{
	   case EInputBufferKey::ToggleCombat: Player->ToggleCombat();  break; 
	   case EInputBufferKey::LightAttack: Player->MeleeAttack(EMeleeAttackType::Light); break;

	}
}

void ACPlayerController::OnInputBufferClose()
{
	CheckTrue(Player->GetState()->IsStateEqual(EState::Disable));//Disable�� �ƹ��͵� �Է��Ҽ����»��� �ƹ��͵����ٸ� ���� ó�����ʿ䰡�����ϱ� �����Ѵ�

	Player->GetState()->ResetState(0.0f);//NotifyEnd()���� Close ȣ��ɶ� �ٷ� ������Ʈ�� �ٷ� �ʱ�ȭ �ҰŴ�
	//ResetState�� ���ð��̴� �󸶵ڿ� �ʱ�ȭ �Ұų� 0.0f�� �ٷ� ��������Ű�ڴٴ� ����
}
