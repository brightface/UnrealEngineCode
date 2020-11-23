// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/UserInterfaces/CUserWidget_HealthBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget_HealthBar() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCUserWidget_HealthBar_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCUserWidget_HealthBar();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage();
// End Cross Module References
	static FName NAME_UCUserWidget_HealthBar_UpdatePercentage = FName(TEXT("UpdatePercentage"));
	void UCUserWidget_HealthBar::UpdatePercentage(float InHealth, float InMaxHealth)
	{
		CUserWidget_HealthBar_eventUpdatePercentage_Parms Parms;
		Parms.InHealth=InHealth;
		Parms.InMaxHealth=InMaxHealth;
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_HealthBar_UpdatePercentage),&Parms);
	}
	void UCUserWidget_HealthBar::StaticRegisterNativesUCUserWidget_HealthBar()
	{
	}
	struct Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxHealth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::NewProp_InMaxHealth = { "InMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CUserWidget_HealthBar_eventUpdatePercentage_Parms, InMaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::NewProp_InHealth = { "InHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CUserWidget_HealthBar_eventUpdatePercentage_Parms, InHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::NewProp_InMaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::NewProp_InHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserInterfaces/CUserWidget_HealthBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_HealthBar, nullptr, "UpdatePercentage", sizeof(CUserWidget_HealthBar_eventUpdatePercentage_Parms), Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCUserWidget_HealthBar_NoRegister()
	{
		return UCUserWidget_HealthBar::StaticClass();
	}
	struct Z_Construct_UClass_UCUserWidget_HealthBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUserWidget_HealthBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCUserWidget_HealthBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUserWidget_HealthBar_UpdatePercentage, "UpdatePercentage" }, // 2127390235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUserWidget_HealthBar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterfaces/CUserWidget_HealthBar.h" },
		{ "ModuleRelativePath", "UserInterfaces/CUserWidget_HealthBar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUserWidget_HealthBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget_HealthBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_HealthBar_Statics::ClassParams = {
		&UCUserWidget_HealthBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCUserWidget_HealthBar_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_HealthBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUserWidget_HealthBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUserWidget_HealthBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUserWidget_HealthBar, 497926513);
	template<> U2004_05_COMBAT_API UClass* StaticClass<UCUserWidget_HealthBar>()
	{
		return UCUserWidget_HealthBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUserWidget_HealthBar(Z_Construct_UClass_UCUserWidget_HealthBar, &UCUserWidget_HealthBar::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("UCUserWidget_HealthBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget_HealthBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
