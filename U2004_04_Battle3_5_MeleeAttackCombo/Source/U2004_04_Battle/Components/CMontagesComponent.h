#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "CMontagesComponent.generated.h"

UENUM(BlueprintType)
enum class EMontageType : uint8
{
	None,
	LightAttack, HeavyAttack,
};

USTRUCT(BlueprintType)
struct FMontageAction_Asset : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int Action;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Montage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float PlayRatio;
};

//실제는 얘가들어갈거야. 우리가 쓸거니까.  UProperty필요없지. 다 지운다. 블프에다 열어줄거면 연다.
USTRUCT(BlueprintType)
struct FMontageAction
{
	GENERATED_USTRUCT_BODY()

public:
	EMontageType Action;
	class UAnimMontage* Montage;
	float PlayRatio;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCMontagesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCMontagesComponent();

public:
	TArray<FMontageAction> GetMontagesForType(EMontageType InType);

protected:
	virtual void BeginPlay() override;

private:
	void AddDataTable(FString Name, FString Path);
	void PrintDataTable();	

private:
	TMap<FString, TArray<FMontageAction>> MontageActionMap;
};
