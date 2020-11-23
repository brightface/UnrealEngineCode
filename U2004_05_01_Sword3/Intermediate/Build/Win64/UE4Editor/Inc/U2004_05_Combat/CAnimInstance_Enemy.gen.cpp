// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Enemies/CAnimInstance_Enemy.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimInstance_Enemy() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCAnimInstance_Enemy_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCAnimInstance_Enemy();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
// End Cross Module References
	void UCAnimInstance_Enemy::StaticRegisterNativesUCAnimInstance_Enemy()
	{
	}
	UClass* Z_Construct_UClass_UCAnimInstance_Enemy_NoRegister()
	{
		return UCAnimInstance_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimInstance_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimInstance_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Enemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemies/CAnimInstance_Enemy.h" },
		{ "ModuleRelativePath", "Enemies/CAnimInstance_Enemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimInstance_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimInstance_Enemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimInstance_Enemy_Statics::ClassParams = {
		&UCAnimInstance_Enemy::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Enemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Enemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimInstance_Enemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimInstance_Enemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimInstance_Enemy, 348136272);
	template<> U2004_05_COMBAT_API UClass* StaticClass<UCAnimInstance_Enemy>()
	{
		return UCAnimInstance_Enemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimInstance_Enemy(Z_Construct_UClass_UCAnimInstance_Enemy, &UCAnimInstance_Enemy::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("UCAnimInstance_Enemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimInstance_Enemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
