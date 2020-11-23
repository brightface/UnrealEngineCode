
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Characters/CEnemy.h"
#include "CAnimInstance_Enemy.generated.h"


UCLASS()
class U2004_04_BATTLE_API UCAnimInstance_Enemy : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Direction;

public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	 ACEnemy* Enemy;

};
