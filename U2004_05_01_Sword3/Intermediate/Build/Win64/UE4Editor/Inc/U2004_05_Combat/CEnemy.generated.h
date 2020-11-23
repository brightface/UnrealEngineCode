// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U2004_05_COMBAT_CEnemy_generated_h
#error "CEnemy.generated.h already included, missing '#pragma once' in CEnemy.h"
#endif
#define U2004_05_COMBAT_CEnemy_generated_h

#define U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetColor(); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetColor(); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEnemy(); \
	friend struct Z_Construct_UClass_ACEnemy_Statics; \
public: \
	DECLARE_CLASS(ACEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(ACEnemy)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACEnemy(); \
	friend struct Z_Construct_UClass_ACEnemy_Statics; \
public: \
	DECLARE_CLASS(ACEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(ACEnemy)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEnemy(ACEnemy&&); \
	NO_API ACEnemy(const ACEnemy&); \
public:


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEnemy(ACEnemy&&); \
	NO_API ACEnemy(const ACEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACEnemy)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthBar() { return STRUCT_OFFSET(ACEnemy, HealthBar); }


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_7_PROLOG
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_RPC_WRAPPERS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_INCLASS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_INCLASS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U2004_05_COMBAT_API UClass* StaticClass<class ACEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U2004_05_01_Sword3_Source_U2004_05_Combat_Enemies_CEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
