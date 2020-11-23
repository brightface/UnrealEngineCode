// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACWeapon;
#ifdef U2004_05_COMBAT_CWeapon_generated_h
#error "CWeapon.generated.h already included, missing '#pragma once' in CWeapon.h"
#endif
#define U2004_05_COMBAT_CWeapon_generated_h

#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_8_DELEGATE \
struct _Script_U2004_05_Combat_eventWeaponChange_Parms \
{ \
	ACWeapon* InNew; \
	ACWeapon* InPrev; \
}; \
static inline void FWeaponChange_DelegateWrapper(const FMulticastScriptDelegate& WeaponChange, ACWeapon* InNew, ACWeapon* InPrev) \
{ \
	_Script_U2004_05_Combat_eventWeaponChange_Parms Parms; \
	Parms.InNew=InNew; \
	Parms.InPrev=InPrev; \
	WeaponChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeWeapon) \
	{ \
		P_GET_OBJECT(ACWeapon,Z_Param_InNew); \
		P_GET_OBJECT(ACWeapon,Z_Param_InPrev); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeWeapon(Z_Param_InNew,Z_Param_InPrev); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeWeapon) \
	{ \
		P_GET_OBJECT(ACWeapon,Z_Param_InNew); \
		P_GET_OBJECT(ACWeapon,Z_Param_InPrev); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeWeapon(Z_Param_InNew,Z_Param_InPrev); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACWeapon(); \
	friend struct Z_Construct_UClass_ACWeapon_Statics; \
public: \
	DECLARE_CLASS(ACWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(ACWeapon)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACWeapon(); \
	friend struct Z_Construct_UClass_ACWeapon_Statics; \
public: \
	DECLARE_CLASS(ACWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(ACWeapon)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACWeapon(ACWeapon&&); \
	NO_API ACWeapon(const ACWeapon&); \
public:


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACWeapon(ACWeapon&&); \
	NO_API ACWeapon(const ACWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACWeapon)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_PRIVATE_PROPERTY_OFFSET
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_10_PROLOG
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_RPC_WRAPPERS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_INCLASS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_INCLASS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U2004_05_COMBAT_API UClass* StaticClass<class ACWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
