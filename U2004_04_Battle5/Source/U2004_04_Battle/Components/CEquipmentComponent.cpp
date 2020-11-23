#include "CEquipmentComponent.h"
#include "Global.h"
#include "Components/CStateComponent.h"

UCEquipmentComponent::UCEquipmentComponent()
{
	
}


void UCEquipmentComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UCEquipmentComponent::ToggleCombat()
{
	SetCombat(!InCombatMode);//�ڱ� �������ִ� InCombatMode�� �������ִ°Ŵ� Ʈ�簡 �Ǹ鼭 ���ݸ�尡 �ȴ�
}

bool UCEquipmentComponent::CanMeleeAttack(UCStateComponent * State)
{  //���������� ������ �����ΰ� �� ���Ǹ� üũ�ҰŴ�
	bool combatType = false;
	combatType |= (CombatType == ECombatType::Unarmed);//Unarmed�ų� 
	combatType |= (CombatType == ECombatType::Melee);  //Melee�̸� ������ ���Ŵ�

	bool b = true;
	b &= combatType;//Unarmed, Melee �� ���߿� �ϳ��� �����̵���
	b &= State->IsStateEqual(EState::Idle);//Idle�϶��� ������ �����ִ�
	b &= InCombat();//InCombat()�Լ��� Ʈ�翩�� �Ѵ� ������Ȳ�� ���� ���������� �Ҽ��ִ�

	return b;

}

void UCEquipmentComponent::SetCombat(bool Value)
{
	CheckTrue(InCombatMode == Value);

	InCombatMode = Value;//InCombatMode�� �ٲ�� ������ �޸����� �ֵ��� �����ٷ��� �������̼��� ������ذŴ�
	if (OnInCombatModeChanged.IsBound())
		OnInCombatModeChanged.Broadcast(InCombatMode);//������ InCombatMode�� �����Ѵ� //CAnimInstance_Player �� �ִ�
}