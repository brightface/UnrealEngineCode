#pragma once

#include "CoreMinimal.h"
#include "Components/CEquipmentComponent.h"
#include "Components/CMontagesComponent.h"

class U2004_04_BATTLE_API CStaticFunctions
{
public:
	static EMontageType ConvertMeleeAttackToMontageType(EMeleeAttackType InType);
};
