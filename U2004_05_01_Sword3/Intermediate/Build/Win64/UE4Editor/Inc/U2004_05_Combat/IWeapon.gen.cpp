// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Interfaces/IWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWeapon() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UIWeapon_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UIWeapon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
// End Cross Module References
	void UIWeapon::StaticRegisterNativesUIWeapon()
	{
	}
	UClass* Z_Construct_UClass_UIWeapon_NoRegister()
	{
		return UIWeapon::StaticClass();
	}
	struct Z_Construct_UClass_UIWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interfaces/IWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIWeapon_Statics::ClassParams = {
		&UIWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIWeapon, 1632838430);
	template<> U2004_05_COMBAT_API UClass* StaticClass<UIWeapon>()
	{
		return UIWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIWeapon(Z_Construct_UClass_UIWeapon, &UIWeapon::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("UIWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
