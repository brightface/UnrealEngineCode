#include "CStaticFunctions.h"
#include "Global.h"

EMontageType CStaticFunctions::ConvertMeleeAttackToMontageType(EMeleeAttackType InType)
{
	switch (InType)
	{
		case EMeleeAttackType::None: return EMontageType::None;
		case EMeleeAttackType::Light: return EMontageType::LightAttack;
		case EMeleeAttackType::Heavy: return EMontageType::HeavyAttack;
	}

	return EMontageType::None;
}
