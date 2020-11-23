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
#ifdef U2004_05_COMBAT_CStateComponent_generated_h
#error "CStateComponent.generated.h already included, missing '#pragma once' in CStateComponent.h"
#endif
#define U2004_05_COMBAT_CStateComponent_generated_h

#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_21_DELEGATE \
struct _Script_U2004_05_Combat_eventStateTypeChanged_Parms \
{ \
	EStateType InPrevType; \
	EStateType InNewType; \
}; \
static inline void FStateTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& StateTypeChanged, EStateType InPrevType, EStateType InNewType) \
{ \
	_Script_U2004_05_Combat_eventStateTypeChanged_Parms Parms; \
	Parms.InPrevType=InPrevType; \
	Parms.InNewType=InNewType; \
	StateTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_20_DELEGATE \
struct _Script_U2004_05_Combat_eventCombatTypeChanged_Parms \
{ \
	ECombatType InPrevType; \
	ECombatType InNewType; \
}; \
static inline void FCombatTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& CombatTypeChanged, ECombatType InPrevType, ECombatType InNewType) \
{ \
	_Script_U2004_05_Combat_eventCombatTypeChanged_Parms Parms; \
	Parms.InPrevType=InPrevType; \
	Parms.InNewType=InNewType; \
	CombatTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCanMove) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCanMove(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStateType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EStateType*)Z_Param__Result=P_THIS->GetStateType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCombatType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECombatType*)Z_Param__Result=P_THIS->GetCombatType(); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCanMove) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCanMove(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStateType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EStateType*)Z_Param__Result=P_THIS->GetStateType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCombatType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECombatType*)Z_Param__Result=P_THIS->GetCombatType(); \
		P_NATIVE_END; \
	}


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCStateComponent(); \
	friend struct Z_Construct_UClass_UCStateComponent_Statics; \
public: \
	DECLARE_CLASS(UCStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(UCStateComponent)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCStateComponent(); \
	friend struct Z_Construct_UClass_UCStateComponent_Statics; \
public: \
	DECLARE_CLASS(UCStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(UCStateComponent)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStateComponent(UCStateComponent&&); \
	NO_API UCStateComponent(const UCStateComponent&); \
public:


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStateComponent(UCStateComponent&&); \
	NO_API UCStateComponent(const UCStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCStateComponent)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_PRIVATE_PROPERTY_OFFSET
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_24_PROLOG
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_RPC_WRAPPERS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_INCLASS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_INCLASS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U2004_05_COMBAT_API UClass* StaticClass<class UCStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U2004_05_01_Sword3_Source_U2004_05_Combat_Components_CStateComponent_h


#define FOREACH_ENUM_ESTATETYPE(op) \
	op(EStateType::Idle) \
	op(EStateType::Drawing) \
	op(EStateType::Sheathing) \
	op(EStateType::Attacking) 

enum class EStateType : uint8;
template<> U2004_05_COMBAT_API UEnum* StaticEnum<EStateType>();

#define FOREACH_ENUM_ECOMBATTYPE(op) \
	op(ECombatType::Unarmed) \
	op(ECombatType::Sword) \
	op(ECombatType::Wizard) 

enum class ECombatType : uint8;
template<> U2004_05_COMBAT_API UEnum* StaticEnum<ECombatType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
