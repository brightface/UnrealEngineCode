#include "CStateManagerComponent.h"
#include "Global.h"

UCStateManagerComponent::UCStateManagerComponent()
{

}

bool UCStateManagerComponent::IsStateEqual(EState InState)
{
	return CurrentState == InState;
}

bool UCStateManagerComponent::IsAlive()
{
	return IsStateEqual(EState::Dead) == false;
}

void UCStateManagerComponent::SetState(EState NewState)
{
	EState prev = CurrentState;
	CurrentState = NewState;

	if (prev != CurrentState)
		OnStateChanged.Broadcast(prev, NewState);
}

void UCStateManagerComponent::ResetState(float InDelay)
{
	CheckTrue(CurrentState == EState::Dead);

	if (InDelay <= 0.0f)
	{
		SetState(EState::Idle);
		
		return;
	}

	UKismetSystemLibrary::K2_SetTimer(this, "SetIdleTimer", InDelay, false);
}

void UCStateManagerComponent::SetIdleTimer()
{
	SetState(EState::Idle);
}
