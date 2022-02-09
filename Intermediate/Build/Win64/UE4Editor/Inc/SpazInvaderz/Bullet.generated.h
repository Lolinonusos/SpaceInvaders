// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef SPAZINVADERZ_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define SPAZINVADERZ_Bullet_generated_h

#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_SPARSE_DATA
#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpazInvaderz"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpazInvaderz"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(ABullet, Speed); } \
	FORCEINLINE static uint32 __PPO__TimeToDespawn() { return STRUCT_OFFSET(ABullet, TimeToDespawn); } \
	FORCEINLINE static uint32 __PPO__TimeLived() { return STRUCT_OFFSET(ABullet, TimeLived); } \
	FORCEINLINE static uint32 __PPO__BulletFire() { return STRUCT_OFFSET(ABullet, BulletFire); } \
	FORCEINLINE static uint32 __PPO__BulletSound() { return STRUCT_OFFSET(ABullet, BulletSound); } \
	FORCEINLINE static uint32 __PPO__BulletMesh() { return STRUCT_OFFSET(ABullet, BulletMesh); }


#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_9_PROLOG
#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_SPARSE_DATA \
	SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_RPC_WRAPPERS \
	SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_INCLASS \
	SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_SPARSE_DATA \
	SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_INCLASS_NO_PURE_DECLS \
	SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPAZINVADERZ_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvaders_Source_SpazInvaderz_Public_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
