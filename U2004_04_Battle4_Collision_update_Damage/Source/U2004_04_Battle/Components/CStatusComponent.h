#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "CStatusComponent.generated.h"

UENUM(BlueprintType)
enum class EStatusType : uint8
{
	None, Health, Power, MagicPower,
	CriticalChance, CriticalPower,
	Block,

};

USTRUCT(BlueprintType)
struct FStatusData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		EStatusType Type;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Value;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Modifiers;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCStatusComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCStatusComponent();
private:
	UPROPERTY(EditDefaultsOnly)
		FString TableName;

protected:
	virtual void BeginPlay() override;
private:
	float ApplyModifierValue(EStatusType InType,float Value, float Modifiers);
public:	
	int GetValue(EStatusType InType);
	float GetValue(EStatusType InType, bool ApplyModifiers);
	
private:
	UDataTable* DataTable;
	TArray<FStatusData *> Datas;

	//기본적으로 가지고 있어야하는것들
	float InitialHealth;
	float Health;
};
