#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CWeapon.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACWeapon : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene;

	UPROPERTY(VisibleDefaultsOnly)
		class UCapsuleComponent* Capsule;

private:
	UFUNCTION()
		void OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
		void OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	ACWeapon();

protected:
	virtual void BeginPlay() override;

	virtual void CapsuleBeginOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp) {}
	virtual void CapsuleEndOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp) {}
	//충돌된 액터하고 otherActor는 virtual로 자식에서 재정의해라.
public:	
	virtual void Tick(float DeltaTime) override;

};
