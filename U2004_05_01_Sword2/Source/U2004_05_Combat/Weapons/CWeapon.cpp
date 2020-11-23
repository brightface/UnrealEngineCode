#include "CWeapon.h"
#include "Global.h"
#include "Interfaces/IWeapon.h"
#include "Components/CapsuleComponent.h"

ACWeapon::ACWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	
}

void ACWeapon::BeginPlay()
{
	Super::BeginPlay();

	OnWeaponChange.AddDynamic(this, &ACWeapon::ChangeWeapon);
}

void ACWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UCStateComponent * ACWeapon::GetStateComponent()
{
	CheckFalseResult(GetOwner()->GetClass()->ImplementsInterface(UIWeapon::StaticClass()), NULL);

	IIWeapon* weapon = Cast<IIWeapon>(GetOwner());
	return weapon->GetWeapon_StateComponent();
}

ECombatType ACWeapon::GetCombat()
{
	UCStateComponent* state = GetStateComponent();
	CheckNullResult(state, ECombatType::Unarmed);

	return state->GetCombatType();
}

EStateType ACWeapon::GetState()
{
	UCStateComponent* state = GetStateComponent();
	CheckNullResult(state, EStateType::Idle);

	return state->GetStateType();
}

void ACWeapon::SetState(EStateType InType)
{
	UCStateComponent* state = GetStateComponent();
	CheckNull(state);

	state->ChangeStateType(InType);
}

bool ACWeapon::CanAttack()
{
	bool b = true;
	b &= CombatType == GetCombat();
	b &= GetState() == EStateType::Idle;

	return b;
}

void ACWeapon::SendDamage(AActor* OtherActor)
{
	CheckTrue(GetOwner() == OtherActor);

	ACharacter* character = Cast<ACharacter>(OtherActor);
	CheckNull(character);

	FDamageEvent e;
	character->TakeDamage(Power, e, character->GetInstigatorController(), this);
}

void ACWeapon::ChangeWeapon(ACWeapon * InNew, ACWeapon * InPrev)
{
	if (InPrev != NULL)
		InPrev->OffSelected();

	if (InNew != NULL)
		InNew->OnSelected();
}
