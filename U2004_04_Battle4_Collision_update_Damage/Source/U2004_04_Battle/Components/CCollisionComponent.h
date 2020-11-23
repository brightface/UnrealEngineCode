#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CCollisionComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCollisionActivated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCollisionDeactivated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCollisionApplyActorDamage, FHitResult, InHitResult);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCCollisionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Collision")
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;

	UPROPERTY(EditAnywhere, Category = "Collision")
		TArray<FName> IgnoreProfileName;

public:	
	UCCollisionComponent();

public:
	void Activation();
	void Deactivation();


public:
	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FCollisionActivated OnCollisionActivated;

	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FCollisionDeactivated OnCollisionDeactivated;

	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FCollisionApplyActorDamage OnCollisionApplyActorDamage;


private:
	bool bActivate;
	TArray<AActor *> HittedActors;

	
};
