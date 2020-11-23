#pragma once

#include "CoreMinimal.h"
#include "Weapons/CWeapon.h"
#include "CWeapon_Sword.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACWeapon_Sword : public ACWeapon
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USkeletalMeshComponent* Sword;

public:
	ACWeapon_Sword();

};
