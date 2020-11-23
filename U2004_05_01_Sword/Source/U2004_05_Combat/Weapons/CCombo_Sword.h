#pragma once

#include "CoreMinimal.h"
#include "Weapons/CCombo.h"
#include "CCombo_Sword.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACCombo_Sword : public ACCombo
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleDefaultsOnly)
		class USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleDefaultsOnly)
		class UCapsuleComponent* Capsule;

public:
	ACCombo_Sword();

	void OnCollision();
	void OffCollision();

protected:
	void BeginPlay() override;

private:
	UFUNCTION()
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
};
