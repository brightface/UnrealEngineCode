// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Notifies/CAnimNotifyState_Sheath_Sword.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotifyState_Sheath_Sword() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
// End Cross Module References
	void UCAnimNotifyState_Sheath_Sword::StaticRegisterNativesUCAnimNotifyState_Sheath_Sword()
	{
	}
	UClass* Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword_NoRegister()
	{
		return UCAnimNotifyState_Sheath_Sword::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotifyState_Sheath_Sword.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotifyState_Sheath_Sword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotifyState_Sheath_Sword>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword_Statics::ClassParams = {
		&UCAnimNotifyState_Sheath_Sword::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimNotifyState_Sheath_Sword, 2371703169);
	template<> U2004_05_COMBAT_API UClass* StaticClass<UCAnimNotifyState_Sheath_Sword>()
	{
		return UCAnimNotifyState_Sheath_Sword::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimNotifyState_Sheath_Sword(Z_Construct_UClass_UCAnimNotifyState_Sheath_Sword, &UCAnimNotifyState_Sheath_Sword::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("UCAnimNotifyState_Sheath_Sword"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotifyState_Sheath_Sword);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
