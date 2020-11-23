// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Player/CAnimInstance_Player.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimInstance_Player() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCAnimInstance_Player_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCAnimInstance_Player();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged();
	U2004_05_COMBAT_API UEnum* Z_Construct_UEnum_U2004_05_Combat_ECombatType();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged();
	U2004_05_COMBAT_API UEnum* Z_Construct_UEnum_U2004_05_Combat_EStateType();
// End Cross Module References
	void UCAnimInstance_Player::StaticRegisterNativesUCAnimInstance_Player()
	{
		UClass* Class = UCAnimInstance_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCombatTypeChanged", &UCAnimInstance_Player::execOnCombatTypeChanged },
			{ "OnStateTypeChanged", &UCAnimInstance_Player::execOnStateTypeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics
	{
		struct CAnimInstance_Player_eventOnCombatTypeChanged_Parms
		{
			ECombatType InPrevType;
			ECombatType InNewType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPrevType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPrevType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAnimInstance_Player_eventOnCombatTypeChanged_Parms, InNewType), Z_Construct_UEnum_U2004_05_Combat_ECombatType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAnimInstance_Player_eventOnCombatTypeChanged_Parms, InPrevType), Z_Construct_UEnum_U2004_05_Combat_ECombatType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::NewProp_InNewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::NewProp_InPrevType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::NewProp_InPrevType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CAnimInstance_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCAnimInstance_Player, nullptr, "OnCombatTypeChanged", sizeof(CAnimInstance_Player_eventOnCombatTypeChanged_Parms), Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics
	{
		struct CAnimInstance_Player_eventOnStateTypeChanged_Parms
		{
			EStateType InPrevType;
			EStateType InNewType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPrevType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPrevType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAnimInstance_Player_eventOnStateTypeChanged_Parms, InNewType), Z_Construct_UEnum_U2004_05_Combat_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAnimInstance_Player_eventOnStateTypeChanged_Parms, InPrevType), Z_Construct_UEnum_U2004_05_Combat_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::NewProp_InNewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::NewProp_InPrevType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::NewProp_InPrevType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CAnimInstance_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCAnimInstance_Player, nullptr, "OnStateTypeChanged", sizeof(CAnimInstance_Player_eventOnStateTypeChanged_Parms), Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCAnimInstance_Player_NoRegister()
	{
		return UCAnimInstance_Player::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimInstance_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInAir_MetaData[];
#endif
		static void NewProp_bInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CombatType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CombatType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimInstance_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCAnimInstance_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCAnimInstance_Player_OnCombatTypeChanged, "OnCombatTypeChanged" }, // 1824774699
		{ &Z_Construct_UFunction_UCAnimInstance_Player_OnStateTypeChanged, "OnStateTypeChanged" }, // 2218232231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/CAnimInstance_Player.h" },
		{ "ModuleRelativePath", "Player/CAnimInstance_Player.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_bInAir_MetaData[] = {
		{ "Category", "CAnimInstance_Player" },
		{ "ModuleRelativePath", "Player/CAnimInstance_Player.h" },
	};
#endif
	void Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_bInAir_SetBit(void* Obj)
	{
		((UCAnimInstance_Player*)Obj)->bInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_bInAir = { "bInAir", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCAnimInstance_Player), &Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_bInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_bInAir_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_bInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "CAnimInstance_Player" },
		{ "ModuleRelativePath", "Player/CAnimInstance_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance_Player, Direction), METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "CAnimInstance_Player" },
		{ "ModuleRelativePath", "Player/CAnimInstance_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance_Player, Speed), METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_StateType_MetaData[] = {
		{ "Category", "CAnimInstance_Player" },
		{ "ModuleRelativePath", "Player/CAnimInstance_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_StateType = { "StateType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance_Player, StateType), Z_Construct_UEnum_U2004_05_Combat_EStateType, METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_StateType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_StateType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_StateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_CombatType_MetaData[] = {
		{ "Category", "CAnimInstance_Player" },
		{ "ModuleRelativePath", "Player/CAnimInstance_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_CombatType = { "CombatType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance_Player, CombatType), Z_Construct_UEnum_U2004_05_Combat_ECombatType, METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_CombatType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_CombatType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_CombatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAnimInstance_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_bInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_StateType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_StateType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_CombatType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Player_Statics::NewProp_CombatType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimInstance_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimInstance_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimInstance_Player_Statics::ClassParams = {
		&UCAnimInstance_Player::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCAnimInstance_Player_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Player_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Player_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimInstance_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimInstance_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimInstance_Player, 3647224141);
	template<> U2004_05_COMBAT_API UClass* StaticClass<UCAnimInstance_Player>()
	{
		return UCAnimInstance_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimInstance_Player(Z_Construct_UClass_UCAnimInstance_Player, &UCAnimInstance_Player::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("UCAnimInstance_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimInstance_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
