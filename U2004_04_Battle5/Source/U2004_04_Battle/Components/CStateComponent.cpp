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
	EState prev = CurrentState;//현재상태 저장
	CurrentState = NewState; //새로운 상태 저장


	if (prev != CurrentState)//이전 상태가 현재상태 랑 같지않았다면
		OnStateChanged.Broadcast(prev, NewState);//이전 상태하고 새로운 상태 를 넣어서 콜 해준다
}

void UCStateComponent::ResetState(float InDelay)
{
	CheckTrue(CurrentState == EState::Dead);

	if (InDelay <= 0.0f)
	{
		SetState(EState::Idle);//0보다 작으면 Idle로 돌아와서 다음동작으로 들어갈수있다는 얘기다 
		//close 가 콜이안되면 이 함수가 콜이 안됐을거다 그러니깐 다음동작으로 못넘어오니깐 그 동작에서 끝내버린거다
		
		return;
	}
	// 0보다 클경우
	UKismetSystemLibrary::K2_SetTimer(this, "SetIdleTimer", InDelay, false);//InDelay뒤에 SetIdleTimer호춣해서 Idle로 돌리거다
}

void UCStateComponent::SetIdleTimer()
{
	SetState(EState::Idle);
}
