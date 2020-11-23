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
enum class EMeleeAttackType : uint8//���� ����
{
	None,Light,Heavy,
};

USTRUCT(BlueprintType)
struct FMeleeDamageEvent:public FDamageEvent
{
	GENERATED_USTRUCT_BODY()

public:
	FVector HittedDirection;//���ݹ��� ����

	bool bCanBeParried;//�ݰݵɼ��ֳ�
	bool bCanBeBlocked;//��ϵɼ��ֳ�
	bool bCanRecieveImpact;//����Ʈ�� �������� �̳�
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

	bool CanMeleeAttack(class UCStateComponent* State);//���� ������ ��������

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
