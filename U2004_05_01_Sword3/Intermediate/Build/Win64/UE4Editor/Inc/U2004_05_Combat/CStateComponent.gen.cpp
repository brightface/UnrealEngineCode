// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Components/CStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCStateComponent() {}
// Cross Module References
	U2004_05_COMBAT_API UFunction* Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
	U2004_05_COMBAT_API UEnum* Z_Construct_UEnum_U2004_05_Combat_EStateType();
	U2004_05_COMBAT_API UFunction* Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature();
	U2004_05_COMBAT_API UEnum* Z_Construct_UEnum_U2004_05_Combat_ECombatType();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_UCStateComponent_CanMove();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_UCStateComponent_GetCombatType();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_UCStateComponent_GetStateType();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_UCStateComponent_IsAlive();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_UCStateComponent_IsDead();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_UCStateComponent_SetCanMove();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics
	{
		struct _Script_U2004_05_Combat_eventStateTypeChanged_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U2004_05_Combat_eventStateTypeChanged_Parms, InNewType), Z_Construct_UEnum_U2004_05_Combat_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U2004_05_Combat_eventStateTypeChanged_Parms, InPrevType), Z_Construct_UEnum_U2004_05_Combat_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U2004_05_Combat, nullptr, "StateTypeChanged__DelegateSignature", sizeof(_Script_U2004_05_Combat_eventStateTypeChanged_Parms), Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics
	{
		struct _Script_U2004_05_Combat_eventCombatTypeChanged_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U2004_05_Combat_eventCombatTypeChanged_Parms, InNewType), Z_Construct_UEnum_U2004_05_Combat_ECombatType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U2004_05_Combat_eventCombatTypeChanged_Parms, InPrevType), Z_Construct_UEnum_U2004_05_Combat_ECombatType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::NewProp_InNewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::NewProp_InPrevType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U2004_05_Combat, nullptr, "CombatTypeChanged__DelegateSignature", sizeof(_Script_U2004_05_Combat_eventCombatTypeChanged_Parms), Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_U2004_05_Combat_EStateType, Z_Construct_UPackage__Script_U2004_05_Combat(), TEXT("EStateType"));
		}
		return Singleton;
	}
	template<> U2004_05_COMBAT_API UEnum* StaticEnum<EStateType>()
	{
		return EStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStateType(EStateType_StaticEnum, TEXT("/Script/U2004_05_Combat"), TEXT("EStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_U2004_05_Combat_EStateType_Hash() { return 3494376508U; }
	UEnum* Z_Construct_UEnum_U2004_05_Combat_EStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_U2004_05_Combat();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStateType"), 0, Get_Z_Construct_UEnum_U2004_05_Combat_EStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStateType::Idle", (int64)EStateType::Idle },
				{ "EStateType::Drawing", (int64)EStateType::Drawing },
				{ "EStateType::Sheathing", (int64)EStateType::Sheathing },
				{ "EStateType::Attacking", (int64)EStateType::Attacking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Components/CStateComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_U2004_05_Combat,
				nullptr,
				"EStateType",
				"EStateType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECombatType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_U2004_05_Combat_ECombatType, Z_Construct_UPackage__Script_U2004_05_Combat(), TEXT("ECombatType"));
		}
		return Singleton;
	}
	template<> U2004_05_COMBAT_API UEnum* StaticEnum<ECombatType>()
	{
		return ECombatType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECombatType(ECombatType_StaticEnum, TEXT("/Script/U2004_05_Combat"), TEXT("ECombatType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_U2004_05_Combat_ECombatType_Hash() { return 634731366U; }
	UEnum* Z_Construct_UEnum_U2004_05_Combat_ECombatType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_U2004_05_Combat();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECombatType"), 0, Get_Z_Construct_UEnum_U2004_05_Combat_ECombatType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECombatType::Unarmed", (int64)ECombatType::Unarmed },
				{ "ECombatType::Sword", (int64)ECombatType::Sword },
				{ "ECombatType::Wizard", (int64)ECombatType::Wizard },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Components/CStateComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_U2004_05_Combat,
				nullptr,
				"ECombatType",
				"ECombatType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCStateComponent::StaticRegisterNativesUCStateComponent()
	{
		UClass* Class = UCStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanMove", &UCStateComponent::execCanMove },
			{ "GetCombatType", &UCStateComponent::execGetCombatType },
			{ "GetStateType", &UCStateComponent::execGetStateType },
			{ "IsAlive", &UCStateComponent::execIsAlive },
			{ "IsDead", &UCStateComponent::execIsDead },
			{ "SetCanMove", &UCStateComponent::execSetCanMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCStateComponent_CanMove_Statics
	{
		struct CStateComponent_eventCanMove_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCStateComponent_CanMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CStateComponent_eventCanMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCStateComponent_CanMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CStateComponent_eventCanMove_Parms), &Z_Construct_UFunction_UCStateComponent_CanMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_CanMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_CanMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_CanMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_CanMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "CanMove", sizeof(CStateComponent_eventCanMove_Parms), Z_Construct_UFunction_UCStateComponent_CanMove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_CanMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_CanMove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_CanMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_CanMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_CanMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics
	{
		struct CStateComponent_eventGetCombatType_Parms
		{
			ECombatType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CStateComponent_eventGetCombatType_Parms, ReturnValue), Z_Construct_UEnum_U2004_05_Combat_ECombatType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "GetCombatType", sizeof(CStateComponent_eventGetCombatType_Parms), Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_GetCombatType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_GetCombatType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCStateComponent_GetStateType_Statics
	{
		struct CStateComponent_eventGetStateType_Parms
		{
			EStateType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CStateComponent_eventGetStateType_Parms, ReturnValue), Z_Construct_UEnum_U2004_05_Combat_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "GetStateType", sizeof(CStateComponent_eventGetStateType_Parms), Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_GetStateType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_GetStateType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCStateComponent_IsAlive_Statics
	{
		struct CStateComponent_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CStateComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CStateComponent_eventIsAlive_Parms), &Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "IsAlive", sizeof(CStateComponent_eventIsAlive_Parms), Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCStateComponent_IsDead_Statics
	{
		struct CStateComponent_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCStateComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CStateComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCStateComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CStateComponent_eventIsDead_Parms), &Z_Construct_UFunction_UCStateComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "IsDead", sizeof(CStateComponent_eventIsDead_Parms), Z_Construct_UFunction_UCStateComponent_IsDead_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_IsDead_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics
	{
		struct CStateComponent_eventSetCanMove_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((CStateComponent_eventSetCanMove_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CStateComponent_eventSetCanMove_Parms), &Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "SetCanMove", sizeof(CStateComponent_eventSetCanMove_Parms), Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_SetCanMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_SetCanMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCStateComponent_NoRegister()
	{
		return UCStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateTypeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateTypeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCombatTypeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatTypeChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCStateComponent_CanMove, "CanMove" }, // 2588785221
		{ &Z_Construct_UFunction_UCStateComponent_GetCombatType, "GetCombatType" }, // 2259231018
		{ &Z_Construct_UFunction_UCStateComponent_GetStateType, "GetStateType" }, // 4016624765
		{ &Z_Construct_UFunction_UCStateComponent_IsAlive, "IsAlive" }, // 1164066757
		{ &Z_Construct_UFunction_UCStateComponent_IsDead, "IsDead" }, // 3235104347
		{ &Z_Construct_UFunction_UCStateComponent_SetCanMove, "SetCanMove" }, // 3680825337
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CStateComponent.h" },
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnStateTypeChanged_MetaData[] = {
		{ "Category", "CStateComponent" },
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnStateTypeChanged = { "OnStateTypeChanged", nullptr, (EPropertyFlags)0x00101000100b0001, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCStateComponent, OnStateTypeChanged), Z_Construct_UDelegateFunction_U2004_05_Combat_StateTypeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnStateTypeChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnStateTypeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnCombatTypeChanged_MetaData[] = {
		{ "Category", "CStateComponent" },
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnCombatTypeChanged = { "OnCombatTypeChanged", nullptr, (EPropertyFlags)0x00101000100b0001, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCStateComponent, OnCombatTypeChanged), Z_Construct_UDelegateFunction_U2004_05_Combat_CombatTypeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnCombatTypeChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnCombatTypeChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnStateTypeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnCombatTypeChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCStateComponent_Statics::ClassParams = {
		&UCStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCStateComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCStateComponent, 3634193422);
	template<> U2004_05_COMBAT_API UClass* StaticClass<UCStateComponent>()
	{
		return UCStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCStateComponent(Z_Construct_UClass_UCStateComponent, &UCStateComponent::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("UCStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
