#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStateManagerComponent.generated.h"

UENUM(BlueprintType)
enum class EState : uint8
{
	Idle, Attacking, Dead, Disable,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChanged, EState, InPrevState, EState, InNewState);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCStateManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCStateManagerComponent();

public:
	FORCEINLINE EState GetState() { return CurrentState; }

public:
	bool IsStateEqual(EState InState);
	bool IsAlive();

	void SetState(EState NewState);
	void ResetState(float InDelay);

public:
	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FStateChanged OnStateChanged;

private:
	UFUNCTION()
		void SetIdleTimer();

private:
	EState CurrentState;
};
