// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/CGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGameMode() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACGameMode_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
// End Cross Module References
	void ACGameMode::StaticRegisterNativesACGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACGameMode_NoRegister()
	{
		return ACGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CGameMode.h" },
		{ "ModuleRelativePath", "CGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGameMode_Statics::ClassParams = {
		&ACGameMode::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGameMode, 2939596968);
	template<> U2004_05_COMBAT_API UClass* StaticClass<ACGameMode>()
	{
		return ACGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGameMode(Z_Construct_UClass_ACGameMode, &ACGameMode::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("ACGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
