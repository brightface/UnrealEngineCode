// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateType : uint8;
enum class ECombatType : uint8;
#ifdef U2004_05_COMBAT_CAnimInstance_Player_generated_h
#error "CAnimInstance_Player.generated.h already included, missing '#pragma once' in CAnimInstance_Player.h"
#endif
#define U2004_05_COMBAT_CAnimInstance_Player_generated_h

#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStateTypeChanged) \
	{ \
		P_GET_ENUM(EStateType,Z_Param_InPrevType); \
		P_GET_ENUM(EStateType,Z_Param_InNewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStateTypeChanged(EStateType(Z_Param_InPrevType),EStateType(Z_Param_InNewType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCombatTypeChanged) \
	{ \
		P_GET_ENUM(ECombatType,Z_Param_InPrevType); \
		P_GET_ENUM(ECombatType,Z_Param_InNewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCombatTypeChanged(ECombatType(Z_Param_InPrevType),ECombatType(Z_Param_InNewType)); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStateTypeChanged) \
	{ \
		P_GET_ENUM(EStateType,Z_Param_InPrevType); \
		P_GET_ENUM(EStateType,Z_Param_InNewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStateTypeChanged(EStateType(Z_Param_InPrevType),EStateType(Z_Param_InNewType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCombatTypeChanged) \
	{ \
		P_GET_ENUM(ECombatType,Z_Param_InPrevType); \
		P_GET_ENUM(ECombatType,Z_Param_InNewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCombatTypeChanged(ECombatType(Z_Param_InPrevType),ECombatType(Z_Param_InNewType)); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCAnimInstance_Player(); \
	friend struct Z_Construct_UClass_UCAnimInstance_Player_Statics; \
public: \
	DECLARE_CLASS(UCAnimInstance_Player, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(UCAnimInstance_Player)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCAnimInstance_Player(); \
	friend struct Z_Construct_UClass_UCAnimInstance_Player_Statics; \
public: \
	DECLARE_CLASS(UCAnimInstance_Player, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(UCAnimInstance_Player)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimInstance_Player(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimInstance_Player) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimInstance_Player); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimInstance_Player); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimInstance_Player(UCAnimInstance_Player&&); \
	NO_API UCAnimInstance_Player(const UCAnimInstance_Player&); \
public:


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimInstance_Player(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimInstance_Player(UCAnimInstance_Player&&); \
	NO_API UCAnimInstance_Player(const UCAnimInstance_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimInstance_Player); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimInstance_Player); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimInstance_Player)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CombatType() { return STRUCT_OFFSET(UCAnimInstance_Player, CombatType); } \
	FORCEINLINE static uint32 __PPO__StateType() { return STRUCT_OFFSET(UCAnimInstance_Player, StateType); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCAnimInstance_Player, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UCAnimInstance_Player, Direction); } \
	FORCEINLINE static uint32 __PPO__bInAir() { return STRUCT_OFFSET(UCAnimInstance_Player, bInAir); }


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_8_PROLOG
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_RPC_WRAPPERS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_INCLASS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_INCLASS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U2004_05_COMBAT_API UClass* StaticClass<class UCAnimInstance_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CAnimInstance_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
