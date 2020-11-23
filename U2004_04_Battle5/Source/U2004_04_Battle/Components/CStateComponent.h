// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStateComponent.generated.h"

UENUM(BlueprintType)
enum class EState :uint8
{
	Idle, Attacking, Dead,Disable,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChanged, EState, InPrevState, EState, InNewState);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCStateComponent();

public:
	FORCEINLINE EState GetState() { return CurrentState; }

public:
	bool IsStateEqual(EState InState);//해당 스테이트가 맞느냐
	bool IsAlive();//생존 상태냐

	void SetState(EState NewState);//공격상태들어갔다고 알려주고 새로운상태로 바꿔줄거다
	void ResetState(float InDelay);



public:
	UPROPERTY(BlueprintAssignable, BlueprintReadOnly, BlueprintCallable)
		FStateChanged OnStateChanged;

private:
	UFUNCTION()
		void SetIdleTimer();
 
private:
	EState CurrentState;//현재 상태

		
};
