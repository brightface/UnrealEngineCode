#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CAnimInstance_Player.generated.h"

UCLASS()
class U2004_04_BATTLE_API UCAnimInstance_Player : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool bInCombat;//전투 모드에 들어갔는지

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Direction;

public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UFUNCTION()
		void OnInCombatModeChanged(bool InCombatMode);

private:
	class ACPlayer* Player;
};
