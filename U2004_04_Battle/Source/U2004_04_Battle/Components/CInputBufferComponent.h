#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CInputBufferComponent.generated.h"

UENUM(BlueprintType)
enum class EInputBufferKey : uint8
{
	None,
	ToggleCombat,
	LightAttack, HeavyAttack,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInputBufferOpen);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInputBufferClose);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputBufferConsumed, EInputBufferKey, InKey);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCInputBufferComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCInputBufferComponent();

public:	
	void Open();
	void Close();
	void UpdateKey(EInputBufferKey InKey);

private:
	void Consumed();

public:
	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FInputBufferOpen OnInputBufferOpen;

	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FInputBufferClose OnInputBufferClose;

	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FInputBufferConsumed OnInputBufferConsumed;

private:
	bool bOpen;
	EInputBufferKey Key;
};
