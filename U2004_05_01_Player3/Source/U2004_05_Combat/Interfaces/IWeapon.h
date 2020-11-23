#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IWeapon.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class UIWeapon : public UInterface
{
	GENERATED_BODY()
};

class U2004_05_COMBAT_API IIWeapon
{
	GENERATED_BODY()

public:
	virtual class UCStateComponent* GetWeaponStateComponent() const;
};
