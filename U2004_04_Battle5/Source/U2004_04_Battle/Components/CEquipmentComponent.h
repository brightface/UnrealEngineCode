#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CEquipmentComponent.generated.h"

UENUM(BlueprintType)
enum class ECombatType :uint8
{
	Unarmed,Melee,Range,Magic,
};

UENUM(BlueprintType)
enum class EMeleeAttackType : uint8//공격 종류
{
	None,Light,Heavy,
};

USTRUCT(BlueprintType)
struct FMeleeDamageEvent:public FDamageEvent
{
	GENERATED_USTRUCT_BODY()

public:
	FVector HittedDirection;//공격받은 방향

	bool bCanBeParried;//반격될수있냐
	bool bCanBeBlocked;//블록될수있냐
	bool bCanRecieveImpact;//임팩트를 가질공격 이냐
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInCombatModeChanged, bool, InCombatMode);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCEquipmentComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCEquipmentComponent();

public:
	FORCEINLINE bool InCombat() { return InCombatMode; }
	FORCEINLINE bool IsCombatType(ECombatType Value) {	return CombatType == Value;}
	FORCEINLINE ECombatType GetCombatType() { return CombatType; }

public:
	void ToggleCombat();

	bool CanMeleeAttack(class UCStateComponent* State);//근접 공격이 가능한지

private:
	void SetCombat(bool Value);

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FInCombatModeChanged OnInCombatModeChanged;

private:
	bool InCombatMode;
	ECombatType CombatType;
		
};
