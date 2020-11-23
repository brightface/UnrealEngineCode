#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Components/CStateComponent.h"
#include "CAnimInstance_Player.generated.h"

UCLASS()
class U2004_05_COMBAT_API UCAnimInstance_Player : public UAnimInstance
{
	GENERATED_BODY()
	
private:
	UFUNCTION()
		void OnCombatTypeChanged(ECombatType InPrevType, ECombatType InNewType);

	UFUNCTION()
		void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		ECombatType CombatType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		EStateType StateType;
	

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Direction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool bInAir;

public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	class ACPlayer* Player;
};
