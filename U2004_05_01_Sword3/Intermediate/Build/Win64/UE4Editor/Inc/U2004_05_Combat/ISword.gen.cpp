// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Interfaces/ISword.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISword() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UISword_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UISword();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
// End Cross Module References
	void UISword::StaticRegisterNativesUISword()
	{
	}
	UClass* Z_Construct_UClass_UISword_NoRegister()
	{
		return UISword::StaticClass();
	}
	struct Z_Construct_UClass_UISword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISword_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interfaces/ISword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISword>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UISword_Statics::ClassParams = {
		&UISword::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISword_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UISword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISword()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UISword_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UISword, 1204039181);
	template<> U2004_05_COMBAT_API UClass* StaticClass<UISword>()
	{
		return UISword::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UISword(Z_Construct_UClass_UISword, &UISword::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("UISword"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISword);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
