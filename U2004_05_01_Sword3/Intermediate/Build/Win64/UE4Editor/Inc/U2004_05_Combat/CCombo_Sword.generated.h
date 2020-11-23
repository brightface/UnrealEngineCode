// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef U2004_05_COMBAT_CCombo_Sword_generated_h
#error "CCombo_Sword.generated.h already included, missing '#pragma once' in CCombo_Sword.h"
#endif
#define U2004_05_COMBAT_CCombo_Sword_generated_h

#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACCombo_Sword(); \
	friend struct Z_Construct_UClass_ACCombo_Sword_Statics; \
public: \
	DECLARE_CLASS(ACCombo_Sword, ACCombo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(ACCombo_Sword)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACCombo_Sword(); \
	friend struct Z_Construct_UClass_ACCombo_Sword_Statics; \
public: \
	DECLARE_CLASS(ACCombo_Sword, ACCombo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(ACCombo_Sword)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACCombo_Sword(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACCombo_Sword) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACCombo_Sword); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACCombo_Sword); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACCombo_Sword(ACCombo_Sword&&); \
	NO_API ACCombo_Sword(const ACCombo_Sword&); \
public:


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACCombo_Sword(ACCombo_Sword&&); \
	NO_API ACCombo_Sword(const ACCombo_Sword&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACCombo_Sword); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACCombo_Sword); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACCombo_Sword)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACCombo_Sword, Mesh); } \
	FORCEINLINE static uint32 __PPO__Capsule() { return STRUCT_OFFSET(ACCombo_Sword, Capsule); }


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_7_PROLOG
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_RPC_WRAPPERS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_INCLASS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_INCLASS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U2004_05_COMBAT_API UClass* StaticClass<class ACCombo_Sword>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U2004_05_01_Sword3_Source_U2004_05_Combat_Weapons_CCombo_Sword_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
