// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCStateComponent;
class UCOptionComponent;
#ifdef U2004_05_COMBAT_CPlayer_generated_h
#error "CPlayer.generated.h already included, missing '#pragma once' in CPlayer.h"
#endif
#define U2004_05_COMBAT_CPlayer_generated_h

#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStateComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCStateComponent**)Z_Param__Result=P_THIS->GetStateComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptionComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCOptionComponent**)Z_Param__Result=P_THIS->GetOptionComponent(); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStateComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCStateComponent**)Z_Param__Result=P_THIS->GetStateComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptionComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCOptionComponent**)Z_Param__Result=P_THIS->GetOptionComponent(); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACPlayer*>(this); }


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACPlayer*>(this); }


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public:


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayer)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HolsterSwordSocket() { return STRUCT_OFFSET(ACPlayer, HolsterSwordSocket); } \
	FORCEINLINE static uint32 __PPO__SwordSocket() { return STRUCT_OFFSET(ACPlayer, SwordSocket); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACPlayer, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACPlayer, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__OptionComponent() { return STRUCT_OFFSET(ACPlayer, OptionComponent); } \
	FORCEINLINE static uint32 __PPO__StateComponent() { return STRUCT_OFFSET(ACPlayer, StateComponent); }


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_10_PROLOG
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_RPC_WRAPPERS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_INCLASS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_INCLASS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U2004_05_COMBAT_API UClass* StaticClass<class ACPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U2004_05_01_Sword3_Source_U2004_05_Combat_Player_CPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
