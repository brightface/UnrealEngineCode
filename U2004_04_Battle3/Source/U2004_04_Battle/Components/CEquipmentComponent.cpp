#include "CEquipmentComponent.h"
#include "Global.h"

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

