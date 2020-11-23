// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Enemies/CEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnemy() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACEnemy_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_ACEnemy_ResetColor();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	void ACEnemy::StaticRegisterNativesACEnemy()
	{
		UClass* Class = ACEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetColor", &ACEnemy::execResetColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACEnemy_ResetColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACEnemy_ResetColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACEnemy_ResetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACEnemy, nullptr, "ResetColor", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACEnemy_ResetColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACEnemy_ResetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACEnemy_ResetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACEnemy_ResetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACEnemy_NoRegister()
	{
		return ACEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ACEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACEnemy_ResetColor, "ResetColor" }, // 186325773
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/CEnemy.h" },
		{ "ModuleRelativePath", "Enemies/CEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthBar_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, HealthBar), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACEnemy_Statics::ClassParams = {
		&ACEnemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACEnemy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACEnemy, 2637290099);
	template<> U2004_05_COMBAT_API UClass* StaticClass<ACEnemy>()
	{
		return ACEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACEnemy(Z_Construct_UClass_ACEnemy, &ACEnemy::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("ACEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
