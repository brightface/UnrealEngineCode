// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Notifies/CAnimNotify_EndAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotify_EndAttack() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCAnimNotify_EndAttack_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCAnimNotify_EndAttack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
// End Cross Module References
	void UCAnimNotify_EndAttack::StaticRegisterNativesUCAnimNotify_EndAttack()
	{
	}
	UClass* Z_Construct_UClass_UCAnimNotify_EndAttack_NoRegister()
	{
		return UCAnimNotify_EndAttack::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotify_EndAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotify_EndAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_EndAttack_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotify_EndAttack.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_EndAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotify_EndAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotify_EndAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotify_EndAttack_Statics::ClassParams = {
		&UCAnimNotify_EndAttack::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimNotify_EndAttack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_EndAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimNotify_EndAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimNotify_EndAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimNotify_EndAttack, 838739991);
	template<> U2004_05_COMBAT_API UClass* StaticClass<UCAnimNotify_EndAttack>()
	{
		return UCAnimNotify_EndAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimNotify_EndAttack(Z_Construct_UClass_UCAnimNotify_EndAttack, &UCAnimNotify_EndAttack::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("UCAnimNotify_EndAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotify_EndAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
