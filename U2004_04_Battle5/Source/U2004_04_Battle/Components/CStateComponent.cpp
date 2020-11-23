#include "CStateComponent.h"
#include "Global.h"

UCStateComponent::UCStateComponent()
{

}


bool UCStateComponent::IsStateEqual(EState InState)
{
	return CurrentState == InState;
}

bool UCStateComponent::IsAlive()
{
	return IsStateEqual(EState::Dead) == false;
}

void UCStateComponent::SetState(EState NewState)
{
	EState prev = CurrentState;//������� ����
	CurrentState = NewState; //���ο� ���� ����


	if (prev != CurrentState)//���� ���°� ������� �� �����ʾҴٸ�
		OnStateChanged.Broadcast(prev, NewState);//���� �����ϰ� ���ο� ���� �� �־ �� ���ش�
}

void UCStateComponent::ResetState(float InDelay)
{
	CheckTrue(CurrentState == EState::Dead);

	if (InDelay <= 0.0f)
	{
		SetState(EState::Idle);//0���� ������ Idle�� ���ƿͼ� ������������ �����ִٴ� ���� 
		//close �� ���̾ȵǸ� �� �Լ��� ���� �ȵ����Ŵ� �׷��ϱ� ������������ ���Ѿ���ϱ� �� ���ۿ��� ���������Ŵ�
		
		return;
	}
	// 0���� Ŭ���
	UKismetSystemLibrary::K2_SetTimer(this, "SetIdleTimer", InDelay, false);//InDelay�ڿ� SetIdleTimerȣ���ؼ� Idle�� �����Ŵ�
}

void UCStateComponent::SetIdleTimer()
{
	SetState(EState::Idle);
}
