// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Player/CPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlayer() {}
// Cross Module References
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_ACPlayer_GetOptionComponent();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCOptionComponent_NoRegister();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_ACPlayer_GetStateComponent();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UIWeapon_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_UISword_NoRegister();
// End Cross Module References
	void ACPlayer::StaticRegisterNativesACPlayer()
	{
		UClass* Class = ACPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOptionComponent", &ACPlayer::execGetOptionComponent },
			{ "GetStateComponent", &ACPlayer::execGetStateComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics
	{
		struct CPlayer_eventGetOptionComponent_Parms
		{
			UCOptionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayer_eventGetOptionComponent_Parms, ReturnValue), Z_Construct_UClass_UCOptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayer, nullptr, "GetOptionComponent", sizeof(CPlayer_eventGetOptionComponent_Parms), Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPlayer_GetOptionComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPlayer_GetOptionComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics
	{
		struct CPlayer_eventGetStateComponent_Parms
		{
			UCStateComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayer_eventGetStateComponent_Parms, ReturnValue), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayer, nullptr, "GetStateComponent", sizeof(CPlayer_eventGetStateComponent_Parms), Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPlayer_GetStateComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPlayer_GetStateComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACPlayer_NoRegister()
	{
		return ACPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ACPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwordSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SwordSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HolsterSwordSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HolsterSwordSocket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPlayer_GetOptionComponent, "GetOptionComponent" }, // 3492562269
		{ &Z_Construct_UFunction_ACPlayer_GetStateComponent, "GetStateComponent" }, // 2727342119
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/CPlayer.h" },
		{ "ModuleRelativePath", "Player/CPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_StateComponent_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_StateComponent = { "StateComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, StateComponent), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_StateComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_StateComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_OptionComponent_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_OptionComponent = { "OptionComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, OptionComponent), Z_Construct_UClass_UCOptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_OptionComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_OptionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_SwordSocket_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Player/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_SwordSocket = { "SwordSocket", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, SwordSocket), METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_SwordSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_SwordSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_HolsterSwordSocket_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Player/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_HolsterSwordSocket = { "HolsterSwordSocket", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, HolsterSwordSocket), METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_HolsterSwordSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_HolsterSwordSocket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_StateComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_OptionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_SwordSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_HolsterSwordSocket,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIWeapon_NoRegister, (int32)VTABLE_OFFSET(ACPlayer, IIWeapon), false },
			{ Z_Construct_UClass_UISword_NoRegister, (int32)VTABLE_OFFSET(ACPlayer, IISword), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPlayer_Statics::ClassParams = {
		&ACPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPlayer_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPlayer, 3246374835);
	template<> U2004_05_COMBAT_API UClass* StaticClass<ACPlayer>()
	{
		return ACPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPlayer(Z_Construct_UClass_ACPlayer, &ACPlayer::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("ACPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
