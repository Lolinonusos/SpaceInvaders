// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPAZINVADERZ_SpazInvaderzGameModeBase_generated_h
#error "SpazInvaderzGameModeBase.generated.h already included, missing '#pragma once' in SpazInvaderzGameModeBase.h"
#endif
#define SPAZINVADERZ_SpazInvaderzGameModeBase_generated_h

#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_SPARSE_DATA
#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReturnDead);


#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReturnDead);


#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpazInvaderzGameModeBase(); \
	friend struct Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASpazInvaderzGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpazInvaderz"), NO_API) \
	DECLARE_SERIALIZER(ASpazInvaderzGameModeBase)


#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASpazInvaderzGameModeBase(); \
	friend struct Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASpazInvaderzGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpazInvaderz"), NO_API) \
	DECLARE_SERIALIZER(ASpazInvaderzGameModeBase)


#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpazInvaderzGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpazInvaderzGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpazInvaderzGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpazInvaderzGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpazInvaderzGameModeBase(ASpazInvaderzGameModeBase&&); \
	NO_API ASpazInvaderzGameModeBase(const ASpazInvaderzGameModeBase&); \
public:


#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpazInvaderzGameModeBase(ASpazInvaderzGameModeBase&&); \
	NO_API ASpazInvaderzGameModeBase(const ASpazInvaderzGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpazInvaderzGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpazInvaderzGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpazInvaderzGameModeBase)


#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AlienBP() { return STRUCT_OFFSET(ASpazInvaderzGameModeBase, AlienBP); } \
	FORCEINLINE static uint32 __PPO__SpawnDelay() { return STRUCT_OFFSET(ASpazInvaderzGameModeBase, SpawnDelay); }


#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_16_PROLOG
#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_SPARSE_DATA \
	SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_RPC_WRAPPERS \
	SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_INCLASS \
	SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_SPARSE_DATA \
	SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_INCLASS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPAZINVADERZ_API UClass* StaticClass<class ASpazInvaderzGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvaders_Source_SpazInvaderz_SpazInvaderzGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
