#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "CAnimNotify_EndAttack.generated.h"

UCLASS()
class U2004_05_COMBAT_API UCAnimNotify_EndAttack : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	FString GetNotifyName_Implementation() const;

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
