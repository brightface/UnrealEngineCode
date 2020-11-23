#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "COptionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_05_COMBAT_API UCOptionComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
		float HorizontalLookRate = 45;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
		float VerticalLookRate = 45;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
		float PlayerRunSpeed = 600;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
		float PlayerWalkSpeed = 400;

public:
	FORCEINLINE float GetHorizontalLookRate() { return HorizontalLookRate; }
	FORCEINLINE float GetVerticalLookRate() { return VerticalLookRate; }
	FORCEINLINE float GetPlayerRunSpeed() { return PlayerRunSpeed; }
	FORCEINLINE float GetPlayerWalkSpeed() { return PlayerWalkSpeed; }

public:	
	UCOptionComponent();
};
