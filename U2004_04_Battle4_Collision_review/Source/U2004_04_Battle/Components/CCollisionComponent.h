#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CCollisionComponent.generated.h"

UENUM(BlueprintType)
enum class ECollisionPart : uint8
{
	None, MainHandItem, RightHand, LeftHand, RightFoot, LeftFoot,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCollisionActivated, ECollisionPart, InPart);
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
		float TraceRadius = 0.1f;

	UPROPERTY(EditAnywhere, Category = "Collision")
		TEnumAsByte<EDrawDebugTrace::Type> TraceDebugType;

	UPROPERTY(EditAnywhere, Category = "Collision")
		TArray<FName> IgnoreProfileName;

public:	
	UCCollisionComponent();

public:
	void Activation(ECollisionPart InPart);
	void Deactivation();

	void SetCollisionMesh(class UPrimitiveComponent* InMesh, const TArray<FName>& InSocketNames);

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;	

public:
	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FCollisionActivated OnCollisionActivated;

	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FCollisionDeactivated OnCollisionDeactivated;

	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FCollisionApplyActorDamage OnCollisionApplyActorDamage;

private:
	void UpdateLastSocketPositions();
	void ExecuteTrace();

private:
	bool bActivate;
	TArray<AActor *> HittedActors;

	bool bCanPerfomeTrace;

	
	class UPrimitiveComponent* Mesh;
	TArray<FName> Sockets;

	TMap<FName, FVector> LastSocketPositions;
};
