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


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCMontagesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCMontagesComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
