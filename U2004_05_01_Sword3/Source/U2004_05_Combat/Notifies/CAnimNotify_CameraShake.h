#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "CAnimNotify_CameraShake.generated.h"

UCLASS()
class U2004_05_COMBAT_API UCAnimNotify_CameraShake : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	UCAnimNotify_CameraShake();
	FString GetNotifyName_Implementation() const;

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

private:
	TSubclassOf<class UCameraShake> CameraShakeClass;
};
