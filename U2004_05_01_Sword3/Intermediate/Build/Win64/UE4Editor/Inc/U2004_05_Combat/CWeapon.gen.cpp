// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U2004_05_Combat/Weapons/CWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeapon() {}
// Cross Module References
	U2004_05_COMBAT_API UFunction* Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_U2004_05_Combat();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACWeapon_NoRegister();
	U2004_05_COMBAT_API UClass* Z_Construct_UClass_ACWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	U2004_05_COMBAT_API UFunction* Z_Construct_UFunction_ACWeapon_ChangeWeapon();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics
	{
		struct _Script_U2004_05_Combat_eventWeaponChange_Parms
		{
			ACWeapon* InNew;
			ACWeapon* InPrev;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPrev;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InNew;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::NewProp_InPrev = { "InPrev", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U2004_05_Combat_eventWeaponChange_Parms, InPrev), Z_Construct_UClass_ACWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::NewProp_InNew = { "InNew", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_U2004_05_Combat_eventWeaponChange_Parms, InNew), Z_Construct_UClass_ACWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::NewProp_InPrev,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::NewProp_InNew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_U2004_05_Combat, nullptr, "WeaponChange__DelegateSignature", sizeof(_Script_U2004_05_Combat_eventWeaponChange_Parms), Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ACWeapon::StaticRegisterNativesACWeapon()
	{
		UClass* Class = ACWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeWeapon", &ACWeapon::execChangeWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics
	{
		struct CWeapon_eventChangeWeapon_Parms
		{
			ACWeapon* InNew;
			ACWeapon* InPrev;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPrev;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InNew;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::NewProp_InPrev = { "InPrev", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CWeapon_eventChangeWeapon_Parms, InPrev), Z_Construct_UClass_ACWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::NewProp_InNew = { "InNew", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CWeapon_eventChangeWeapon_Parms, InNew), Z_Construct_UClass_ACWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::NewProp_InPrev,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::NewProp_InNew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACWeapon, nullptr, "ChangeWeapon", sizeof(CWeapon_eventChangeWeapon_Parms), Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACWeapon_ChangeWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACWeapon_ChangeWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACWeapon_NoRegister()
	{
		return ACWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ACWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWeaponChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_U2004_05_Combat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACWeapon_ChangeWeapon, "ChangeWeapon" }, // 3871571672
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CWeapon.h" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_OnWeaponChange_MetaData[] = {
		{ "Category", "CWeapon" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_OnWeaponChange = { "OnWeaponChange", nullptr, (EPropertyFlags)0x0010100010080014, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, OnWeaponChange), Z_Construct_UDelegateFunction_U2004_05_Combat_WeaponChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_OnWeaponChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_OnWeaponChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_OnWeaponChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACWeapon_Statics::ClassParams = {
		&ACWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACWeapon, 716145514);
	template<> U2004_05_COMBAT_API UClass* StaticClass<ACWeapon>()
	{
		return ACWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACWeapon(Z_Construct_UClass_ACWeapon, &ACWeapon::StaticClass, TEXT("/Script/U2004_05_Combat"), TEXT("ACWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
