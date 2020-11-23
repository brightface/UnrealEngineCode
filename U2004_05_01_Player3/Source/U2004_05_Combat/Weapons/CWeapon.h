#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CStateComponent.h"
#include "CWeapon.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	ACWeapon();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	UCStateComponent* GetStateComponent();

	ECombatType GetCombat();

	EStateType GetState();
	void SetState(EStateType InType);

protected:
	virtual void Attack(){}
	virtual void EndAttack(){}

protected:
	bool CanAttack();
	void SendDamage(AActor* OtherActor);

protected:
	ECombatType CombatType;
	float Power = 1.0f;
};
