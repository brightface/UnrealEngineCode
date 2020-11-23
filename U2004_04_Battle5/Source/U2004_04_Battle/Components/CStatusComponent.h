#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "CStatusComponent.generated.h"

UENUM(BlueprintType)
enum class EStatusType :uint8
{
	None,Health,Power,MagicPower,
	Critical,CriticalPower,
	Block,
	
};

USTRUCT(BlueprintType)
struct FStatusData :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		EStatusType Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Value;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Modifiers; //������  Health�� 100�ְ� Modifiers�� 0.1 ���ָ� 10��ŭ  +�ǰų� ������
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCStatusComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
		FString TableName;

public:	
	UCStatusComponent();

public:
	FORCEINLINE float GetMaxHealth() { return MaxHealth; }
	FORCEINLINE float GetHealth() { return Health; }

public: 
	float GetValue(EStatusType InType);
	void ApplyDamage(float InDamage);
	void UpdateHealthBar();

protected:
	virtual void BeginPlay() override;

		
private:
	UDataTable* DataTable;
	TArray<FStatusData*> Datas;

	float MaxHealth;
	float Health;
};
