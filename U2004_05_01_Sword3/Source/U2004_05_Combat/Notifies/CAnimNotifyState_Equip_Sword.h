#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "CAnimNotifyState_Equip_Sword.generated.h"

UCLASS()
class U2004_05_COMBAT_API UCAnimNotifyState_Equip_Sword : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	FString GetNotifyName_Implementation() const;

	virtual void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) override;
};
