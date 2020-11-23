// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "CAnimNotifyState_InputBuffer.generated.h"

/**
 * 
 */
UCLASS()
class U2004_04_BATTLE_API UCAnimNotifyState_InputBuffer : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	FString GetNotifyName_Implementation() const override;//블프에다 써줄려고 Implementation으로 해준다


private:
	virtual void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) override;
	
};
