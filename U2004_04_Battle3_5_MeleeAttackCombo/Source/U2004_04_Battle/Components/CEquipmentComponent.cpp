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
	if (OnInCombatModeChanged.IsBound()) //변경할 컴뱃모드를 전환할거야. 모드가 바뀔때마다 콜이된다.
		OnInCombatModeChanged.Broadcast(InCombatMode);
}
//현재 근접공격이 가능한가 체크
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