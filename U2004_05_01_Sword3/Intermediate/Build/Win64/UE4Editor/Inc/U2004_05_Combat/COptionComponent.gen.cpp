// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Components/COptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOptionComponent() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCOptionComponent_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCOptionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
// End Cross Module References
	void UCOptionComponent::StaticRegisterNativesUCOptionComponent()
	{
	}
	UClass* Z_Construct_UClass_UCOptionComponent_NoRegister()
	{
		return UCOptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCOptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerRunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalLookRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalLookRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalLookRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalLookRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCOptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCOptionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/COptionComponent.h" },
		{ "ModuleRelativePath", "Components/COptionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCOptionComponent_Statics::NewProp_PlayerWalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Components/COptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCOptionComponent_Statics::NewProp_PlayerWalkSpeed = { "PlayerWalkSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCOptionComponent, PlayerWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_PlayerWalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_PlayerWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCOptionComponent_Statics::NewProp_PlayerRunSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Components/COptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCOptionComponent_Statics::NewProp_PlayerRunSpeed = { "PlayerRunSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCOptionComponent, PlayerRunSpeed), METADATA_PARAMS(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_PlayerRunSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_PlayerRunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCOptionComponent_Statics::NewProp_VerticalLookRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Components/COptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCOptionComponent_Statics::NewProp_VerticalLookRate = { "VerticalLookRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCOptionComponent, VerticalLookRate), METADATA_PARAMS(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_VerticalLookRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_VerticalLookRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCOptionComponent_Statics::NewProp_HorizontalLookRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Components/COptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCOptionComponent_Statics::NewProp_HorizontalLookRate = { "HorizontalLookRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCOptionComponent, HorizontalLookRate), METADATA_PARAMS(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_HorizontalLookRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_HorizontalLookRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCOptionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCOptionComponent_Statics::NewProp_PlayerWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCOptionComponent_Statics::NewProp_PlayerRunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCOptionComponent_Statics::NewProp_VerticalLookRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCOptionComponent_Statics::NewProp_HorizontalLookRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCOptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCOptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCOptionComponent_Statics::ClassParams = {
		&UCOptionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCOptionComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCOptionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCOptionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCOptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCOptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCOptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCOptionComponent, 1959819453);
	template<> U2004_05_COMBAT_API UClass* StaticClass<UCOptionComponent>()
	{
		return UCOptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCOptionComponent(Z_Construct_UClass_UCOptionComponent, &UCOptionComponent::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("UCOptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCOptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
