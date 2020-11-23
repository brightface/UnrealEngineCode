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
	bool IsStateEqual(EState InState);//�ش� ������Ʈ�� �´���
	bool IsAlive();//���� ���³�

	void SetState(EState NewState);//���ݻ��µ��ٰ� �˷��ְ� ���ο���·� �ٲ��ٰŴ�
	void ResetState(float InDelay);



public:
	UPROPERTY(BlueprintAssignable, BlueprintReadOnly, BlueprintCallable)
		FStateChanged OnStateChanged;

private:
	UFUNCTION()
		void SetIdleTimer();
 
private:
	EState CurrentState;//���� ����

		
};
