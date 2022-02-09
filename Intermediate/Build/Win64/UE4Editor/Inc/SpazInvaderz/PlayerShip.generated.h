// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPAZINVADERZ_PlayerShip_generated_h
#error "PlayerShip.generated.h already included, missing '#pragma once' in PlayerShip.h"
#endif
#define SPAZINVADERZ_PlayerShip_generated_h

#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_SPARSE_DATA
#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetLocation);


#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetLocation);


#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerShip(); \
	friend struct Z_Construct_UClass_APlayerShip_Statics; \
public: \
	DECLARE_CLASS(APlayerShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpazInvaderz"), NO_API) \
	DECLARE_SERIALIZER(APlayerShip)


#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerShip(); \
	friend struct Z_Construct_UClass_APlayerShip_Statics; \
public: \
	DECLARE_CLASS(APlayerShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpazInvaderz"), NO_API) \
	DECLARE_SERIALIZER(APlayerShip)


#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShip(APlayerShip&&); \
	NO_API APlayerShip(const APlayerShip&); \
public:


#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShip(APlayerShip&&); \
	NO_API APlayerShip(const APlayerShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerShip)


#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_PRIVATE_PROPERTY_OFFSET
#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_14_PROLOG
#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_SPARSE_DATA \
	SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_RPC_WRAPPERS \
	SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_INCLASS \
	SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_SPARSE_DATA \
	SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_INCLASS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPAZINVADERZ_API UClass* StaticClass<class APlayerShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvaders_Source_SpazInvaderz_Public_PlayerShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
