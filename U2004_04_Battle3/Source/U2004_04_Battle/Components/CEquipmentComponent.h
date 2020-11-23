#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CEquipmentComponent.generated.h"

UENUM(BlueprintType)
enum class ECombatType : uint8
{
	Unarmed, Melee, Range, Magic,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInCombatModeChanged, bool, InCombatMode);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCEquipmentComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCEquipmentComponent();

public:
	void ToggleComat();

private:
	void SetCombat(bool Value);

protected:
	virtual void BeginPlay() override;		

public:
	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FInCombatModeChanged OnInCombatModeChanged;

private:
	bool InCombatMode;
};
