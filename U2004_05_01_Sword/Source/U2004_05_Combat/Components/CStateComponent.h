#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStateComponent.generated.h"

UENUM(BlueprintType)
enum class ECombatType : uint8
{
	Unarmed, Sword, Wizard,
};

UENUM(BlueprintType)
enum class EStateType : uint8
{
	Idle, 
	Drawing, Sheathing, Attacking,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCombatTypeChanged, ECombatType, InPrevType, ECombatType, InNewType);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateTypeChanged, EStateType, InPrevType, EStateType, InNewType);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_05_COMBAT_API UCStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, BlueprintCallable)
		FORCEINLINE ECombatType GetCombatType() { return CombatType; }

	UFUNCTION(BlueprintPure, BlueprintCallable)
		FORCEINLINE EStateType GetStateType() { return StateType; }

	UFUNCTION(BlueprintPure, BlueprintCallable)
		FORCEINLINE bool CanMove() { return bCanMove; }

	UFUNCTION(BlueprintPure, BlueprintCallable)
		FORCEINLINE bool IsDead() { return bDead; }

	UFUNCTION(BlueprintPure, BlueprintCallable)
		FORCEINLINE bool IsAlive() { return bDead == false; }


	UFUNCTION(BlueprintCallable)
		void SetCanMove(bool Value) { bCanMove = Value; }

public:
	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FCombatTypeChanged OnCombatTypeChanged;

	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FStateTypeChanged OnStateTypeChanged;

public:	
	UCStateComponent();

	void ChangeCombatType(ECombatType InNewType);
	void ChangeStateType(EStateType InNewType);

protected:
	virtual void BeginPlay() override;

private:
	bool bCanMove = true;
	bool bDead;

	ECombatType CombatType;
	EStateType StateType;
};
