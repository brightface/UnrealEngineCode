#include "CStateComponent.h"
#include "Global.h"

UCStateComponent::UCStateComponent()
{

}

void UCStateComponent::ChangeCombatType(ECombatType InNewType)
{
	ECombatType prevType = CombatType;
	CombatType = InNewType;

	if (OnCombatTypeChanged.IsBound())
		OnCombatTypeChanged.Broadcast(prevType, CombatType);
}

void UCStateComponent::ChangeStateType(EStateType InNewType)
{
	EStateType prevType = StateType;
	StateType = InNewType;

	if (OnStateTypeChanged.IsBound())
		OnStateTypeChanged.Broadcast(prevType, StateType);
}

void UCStateComponent::BeginPlay()
{
	Super::BeginPlay();
	
}