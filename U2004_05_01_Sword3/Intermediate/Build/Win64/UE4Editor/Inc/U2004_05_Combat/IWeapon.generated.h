// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U2004_05_COMBAT_IWeapon_generated_h
#error "IWeapon.generated.h already included, missing '#pragma once' in IWeapon.h"
#endif
#define U2004_05_COMBAT_IWeapon_generated_h

#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_RPC_WRAPPERS
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	U2004_05_COMBAT_API UIWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(U2004_05_COMBAT_API, UIWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	U2004_05_COMBAT_API UIWeapon(UIWeapon&&); \
	U2004_05_COMBAT_API UIWeapon(const UIWeapon&); \
public:


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	U2004_05_COMBAT_API UIWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	U2004_05_COMBAT_API UIWeapon(UIWeapon&&); \
	U2004_05_COMBAT_API UIWeapon(const UIWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(U2004_05_COMBAT_API, UIWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIWeapon)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIWeapon(); \
	friend struct Z_Construct_UClass_UIWeapon_Statics; \
public: \
	DECLARE_CLASS(UIWeapon, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/U2004_05_Combat"), U2004_05_COMBAT_API) \
	DECLARE_SERIALIZER(UIWeapon)


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_GENERATED_UINTERFACE_BODY() \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_GENERATED_UINTERFACE_BODY() \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIWeapon() {} \
public: \
	typedef UIWeapon UClassType; \
	typedef IIWeapon ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IIWeapon() {} \
public: \
	typedef UIWeapon UClassType; \
	typedef IIWeapon ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_7_PROLOG
#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_RPC_WRAPPERS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U2004_05_COMBAT_API UClass* StaticClass<class UIWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U2004_05_01_Sword3_Source_U2004_05_Combat_Interfaces_IWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
