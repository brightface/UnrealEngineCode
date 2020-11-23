// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeU2004_05_Combat_init() {}
	U2004_05_COMBAT_API UFunction* Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature();
	U2004_05_COMBAT_API UFunction* Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature();
	U2004_05_COMBAT_API UFunction* Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/U2004_05_Combat",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF57EA241,
				0xE36E6D92,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
