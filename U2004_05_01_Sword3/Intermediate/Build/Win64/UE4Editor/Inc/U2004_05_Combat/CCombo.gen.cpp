// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Weapons/CCombo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCombo() {}
// Cross Module References
	U2004_05_COMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FComboMontage();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
	U2004_05_COMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FComboMontage_Asset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACCombo_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACCombo();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACWeapon();
// End Cross Module References
class UScriptStruct* FComboMontage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern U2004_05_COMBAT_API uint32 Get_Z_Construct_UScriptStruct_FComboMontage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboMontage, Z_Construct_UPackage__Script_U2004_05_Combat(), TEXT("ComboMontage"), sizeof(FComboMontage), Get_Z_Construct_UScriptStruct_FComboMontage_Hash());
	}
	return Singleton;
}
template<> U2004_05_COMBAT_API UScriptStruct* StaticStruct<FComboMontage>()
{
	return FComboMontage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComboMontage(FComboMontage::StaticStruct, TEXT("/Script/U2004_05_Combat"), TEXT("ComboMontage"), false, nullptr, nullptr);
static struct FScriptStruct_U2004_05_Combat_StaticRegisterNativesFComboMontage
{
	FScriptStruct_U2004_05_Combat_StaticRegisterNativesFComboMontage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComboMontage")),new UScriptStruct::TCppStructOps<FComboMontage>);
	}
} ScriptStruct_U2004_05_Combat_StaticRegisterNativesFComboMontage;
	struct Z_Construct_UScriptStruct_FComboMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMontage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weapons/CCombo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboMontage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboMontage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboMontage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
		nullptr,
		&NewStructOps,
		"ComboMontage",
		sizeof(FComboMontage),
		alignof(FComboMontage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMontage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMontage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboMontage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComboMontage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_U2004_05_Combat();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComboMontage"), sizeof(FComboMontage), Get_Z_Construct_UScriptStruct_FComboMontage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComboMontage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComboMontage_Hash() { return 1293619522U; }
class UScriptStruct* FComboMontage_Asset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern U2004_05_COMBAT_API uint32 Get_Z_Construct_UScriptStruct_FComboMontage_Asset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboMontage_Asset, Z_Construct_UPackage__Script_U2004_05_Combat(), TEXT("ComboMontage_Asset"), sizeof(FComboMontage_Asset), Get_Z_Construct_UScriptStruct_FComboMontage_Asset_Hash());
	}
	return Singleton;
}
template<> U2004_05_COMBAT_API UScriptStruct* StaticStruct<FComboMontage_Asset>()
{
	return FComboMontage_Asset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComboMontage_Asset(FComboMontage_Asset::StaticStruct, TEXT("/Script/U2004_05_Combat"), TEXT("ComboMontage_Asset"), false, nullptr, nullptr);
static struct FScriptStruct_U2004_05_Combat_StaticRegisterNativesFComboMontage_Asset
{
	FScriptStruct_U2004_05_Combat_StaticRegisterNativesFComboMontage_Asset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComboMontage_Asset")),new UScriptStruct::TCppStructOps<FComboMontage_Asset>);
	}
} ScriptStruct_U2004_05_Combat_StaticRegisterNativesFComboMontage_Asset;
	struct Z_Construct_UScriptStruct_FComboMontage_Asset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Power;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MontagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weapons/CCombo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboMontage_Asset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_Power_MetaData[] = {
		{ "Category", "ComboMontage_Asset" },
		{ "ModuleRelativePath", "Weapons/CCombo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboMontage_Asset, Power), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_Power_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_Power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "ComboMontage_Asset" },
		{ "ModuleRelativePath", "Weapons/CCombo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((FComboMontage_Asset*)Obj)->bCanMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FComboMontage_Asset), &Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_bCanMove_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_bCanMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_StartSection_MetaData[] = {
		{ "Category", "ComboMontage_Asset" },
		{ "ModuleRelativePath", "Weapons/CCombo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboMontage_Asset, StartSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_StartSection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_StartSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_PlayRatio_MetaData[] = {
		{ "Category", "ComboMontage_Asset" },
		{ "ModuleRelativePath", "Weapons/CCombo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_PlayRatio = { "PlayRatio", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboMontage_Asset, PlayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_PlayRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_PlayRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_MontagePath_MetaData[] = {
		{ "Category", "ComboMontage_Asset" },
		{ "ModuleRelativePath", "Weapons/CCombo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_MontagePath = { "MontagePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboMontage_Asset, MontagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_MontagePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_MontagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_bCanMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_StartSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_PlayRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::NewProp_MontagePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ComboMontage_Asset",
		sizeof(FComboMontage_Asset),
		alignof(FComboMontage_Asset),
		Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboMontage_Asset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComboMontage_Asset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_U2004_05_Combat();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComboMontage_Asset"), sizeof(FComboMontage_Asset), Get_Z_Construct_UScriptStruct_FComboMontage_Asset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComboMontage_Asset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComboMontage_Asset_Hash() { return 242784867U; }
	void ACCombo::StaticRegisterNativesACCombo()
	{
	}
	UClass* Z_Construct_UClass_ACCombo_NoRegister()
	{
		return ACCombo::StaticClass();
	}
	struct Z_Construct_UClass_ACCombo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACCombo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCombo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CCombo.h" },
		{ "ModuleRelativePath", "Weapons/CCombo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACCombo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACCombo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACCombo_Statics::ClassParams = {
		&ACCombo::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACCombo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACCombo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACCombo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACCombo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACCombo, 2709543212);
	template<> U2004_05_COMBAT_API UClass* StaticClass<ACCombo>()
	{
		return ACCombo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACCombo(Z_Construct_UClass_ACCombo, &ACCombo::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("ACCombo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACCombo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
