#pragma once

#include "CoreMinimal.h"
#include "Weapons/CWeapon.h"
#include "Engine/DataTable.h"
#include "CCombo.generated.h"

USTRUCT(BlueprintType)
struct FComboMontage_Asset : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString MontagePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float PlayRatio;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FName StartSection;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool bCanMove;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Power;
};

USTRUCT(BlueprintType)
struct FComboMontage
{
	GENERATED_USTRUCT_BODY()

public:
	class UAnimMontage* MontagePath;

	float PlayRatio;
	FName StartSection;
	bool bCanMove;
	float Power;
};

UCLASS()
class U2004_05_COMBAT_API ACCombo : public ACWeapon
{
	GENERATED_BODY()
	
public:
	ACCombo();

protected:
	virtual void BeginPlay() override;

public:
	void Attack() override;
	void PlayNextCombo();
	void EndAttack() override;

private:
	UDataTable* DataTable;
	TArray<FComboMontage *> Montages;

	uint32 Count;
	bool bEnable;
	bool bExist;
	bool bLast;
};
