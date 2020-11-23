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
	SetCombat(!InCombatMode);//자기 가지고있는 InCombatMode를 뒤집어주는거다 트루가 되면서 공격모드가 된다
}

bool UCEquipmentComponent::CanMeleeAttack(UCStateComponent * State)
{  //근접공격이 가능한 상태인가 를 조건만 체크할거다
	bool combatType = false;
	combatType |= (CombatType == ECombatType::Unarmed);//Unarmed거나 
	combatType |= (CombatType == ECombatType::Melee);  //Melee이면 공격이 들어갈거다

	bool b = true;
	b &= combatType;//Unarmed, Melee 이 둘중에 하나면 공격이들어간다
	b &= State->IsStateEqual(EState::Idle);//Idle일때만 공격이 들어갈수있다
	b &= InCombat();//InCombat()함수가 트루여야 한다 전투상황이 들어가야 근접공격을 할수있다

	return b;

}

void UCEquipmentComponent::SetCombat(bool Value)
{
	CheckTrue(InCombatMode == Value);

	InCombatMode = Value;//InCombatMode가 바뀌면 뭔가를 쭈르륵할 애들을 콜해줄려고 델리게이션을 만들어준거다
	if (OnInCombatModeChanged.IsBound())
		OnInCombatModeChanged.Broadcast(InCombatMode);//변경한 InCombatMode를 전파한다 //CAnimInstance_Player 에 있다
}