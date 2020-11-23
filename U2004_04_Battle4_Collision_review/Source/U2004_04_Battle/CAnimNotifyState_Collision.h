#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Components/CCollisionComponent.h"
#include "CAnimNotifyState_Collision.generated.h"

UCLASS()
class U2004_04_BATTLE_API UCAnimNotifyState_Collision : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		ECollisionPart CollisionPart;

public:
	FString GetNotifyName_Implementation() const override;

private:
	virtual void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) override;
};
