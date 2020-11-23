#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ISword.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class UISword : public UInterface
{
	GENERATED_BODY()
};

class U2004_05_COMBAT_API IISword
{
	GENERATED_BODY()

protected:
	virtual void Sword_Equip();
	virtual void Sword_Sheath();

public:
	virtual void Sword_Attach();
	virtual void Sword_Detach();
	virtual void Sword_Equipped();
	virtual void Sword_Sheathed();
};
