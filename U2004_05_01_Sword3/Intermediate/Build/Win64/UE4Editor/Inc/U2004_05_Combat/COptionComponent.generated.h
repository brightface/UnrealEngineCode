// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U2004_05_COMBAT_COptionComponent_generated_h
#error "COptionComponent.generated.h already included, missing '#pragma once' in COptionComponent.h"
#endif
#define U2004_05_COMBAT_COptionComponent_generated_h

#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_RPC_WRAPPERS
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCOptionComponent(); \
	friend struct Z_Construct_UClass_UCOptionComponent_Statics; \
public: \
	DECLARE_CLASS(UCOptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(UCOptionComponent)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCOptionComponent(); \
	friend struct Z_Construct_UClass_UCOptionComponent_Statics; \
public: \
	DECLARE_CLASS(UCOptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), NO_API) \
	DECLARE_SERIALIZER(UCOptionComponent)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCOptionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCOptionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCOptionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCOptionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCOptionComponent(UCOptionComponent&&); \
	NO_API UCOptionComponent(const UCOptionComponent&); \
public:


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCOptionComponent(UCOptionComponent&&); \
	NO_API UCOptionComponent(const UCOptionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCOptionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCOptionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCOptionComponent)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HorizontalLookRate() { return STRUCT_OFFSET(UCOptionComponent, HorizontalLookRate); } \
	FORCEINLINE static uint32 __PPO__VerticalLookRate() { return STRUCT_OFFSET(UCOptionComponent, VerticalLookRate); } \
	FORCEINLINE static uint32 __PPO__PlayerRunSpeed() { return STRUCT_OFFSET(UCOptionComponent, PlayerRunSpeed); } \
	FORCEINLINE static uint32 __PPO__PlayerWalkSpeed() { return STRUCT_OFFSET(UCOptionComponent, PlayerWalkSpeed); }


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_8_PROLOG
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_RPC_WRAPPERS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_INCLASS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_INCLASS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U2004_05_COMBAT_API UClass* StaticClass<class UCOptionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U2004_05_01_Sword3_Source_U2004_05_Combat_Components_COptionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
