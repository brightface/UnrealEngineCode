#include "CEquipmentComponent.h"
#include "Global.h"
#include "Components/CStateManagerComponent.h"

UCEquipmentComponent::UCEquipmentComponent()
{

}

void UCEquipmentComponent::BeginPlay()
{
	Super::BeginPlay();

	
}

void UCEquipmentComponent::ToggleComat()
{
	SetCombat(!InCombatMode);
}

void UCEquipmentComponent::SetCombat(bool Value)
{
	CheckTrue(InCombatMode == Value);

	InCombatMode = Value;
	if (OnInCombatModeChanged.IsBound())
		OnInCombatModeChanged.Broadcast(InCombatMode);
}

bool UCEquipmentComponent::CanMeleeAttack(UCStateManagerComponent * StateManager)
{
	bool combatType = false;
	combatType |= (CombatType == ECombatType::Unarmed);
	combatType |= (CombatType == ECombatType::Melee);

	bool b = true;
	b &= combatType;
	b &= StateManager->IsStateEqual(EState::Idle);
	b &= InCombat();

	return b;
}