// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPAZINVADERZ_Alien_generated_h
#error "Alien.generated.h already included, missing '#pragma once' in Alien.h"
#endif
#define SPAZINVADERZ_Alien_generated_h

#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_SPARSE_DATA
#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_RPC_WRAPPERS
#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAlien(); \
	friend struct Z_Construct_UClass_AAlien_Statics; \
public: \
	DECLARE_CLASS(AAlien, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpazInvaderz"), NO_API) \
	DECLARE_SERIALIZER(AAlien)


#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAlien(); \
	friend struct Z_Construct_UClass_AAlien_Statics; \
public: \
	DECLARE_CLASS(AAlien, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpazInvaderz"), NO_API) \
	DECLARE_SERIALIZER(AAlien)


#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAlien(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAlien) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlien); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlien); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlien(AAlien&&); \
	NO_API AAlien(const AAlien&); \
public:


#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlien(AAlien&&); \
	NO_API AAlien(const AAlien&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlien); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlien); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAlien)


#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(AAlien, Speed); } \
	FORCEINLINE static uint32 __PPO__DestroyPlacement() { return STRUCT_OFFSET(AAlien, DestroyPlacement); }


#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_9_PROLOG
#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_SPARSE_DATA \
	SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_RPC_WRAPPERS \
	SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_INCLASS \
	SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_SPARSE_DATA \
	SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_INCLASS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpazInvaderz_Public_Alien_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPAZINVADERZ_API UClass* StaticClass<class AAlien>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvaders_Source_SpazInvaderz_Public_Alien_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
