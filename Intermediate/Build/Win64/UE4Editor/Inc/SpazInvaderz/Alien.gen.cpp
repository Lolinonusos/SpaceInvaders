// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpazInvaderz/Public/Alien.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlien() {}
// Cross Module References
	SPAZINVADERZ_API UClass* Z_Construct_UClass_AAlien_NoRegister();
	SPAZINVADERZ_API UClass* Z_Construct_UClass_AAlien();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpazInvaderz();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AAlien::StaticRegisterNativesAAlien()
	{
	}
	UClass* Z_Construct_UClass_AAlien_NoRegister()
	{
		return AAlien::StaticClass();
	}
	struct Z_Construct_UClass_AAlien_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAlien_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpazInvaderz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlien_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Alien.h" },
		{ "ModuleRelativePath", "Public/Alien.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlien_Statics::NewProp_EnemyMesh_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Alien.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAlien_Statics::NewProp_EnemyMesh = { "EnemyMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAlien, EnemyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAlien_Statics::NewProp_EnemyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAlien_Statics::NewProp_EnemyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlien_Statics::NewProp_EnemyMove_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/Alien.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAlien_Statics::NewProp_EnemyMove = { "EnemyMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAlien, EnemyMove), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAlien_Statics::NewProp_EnemyMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAlien_Statics::NewProp_EnemyMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlien_Statics::NewProp_EnemyHit_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/Alien.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAlien_Statics::NewProp_EnemyHit = { "EnemyHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAlien, EnemyHit), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAlien_Statics::NewProp_EnemyHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAlien_Statics::NewProp_EnemyHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAlien_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlien_Statics::NewProp_EnemyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlien_Statics::NewProp_EnemyMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlien_Statics::NewProp_EnemyHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAlien_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlien>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAlien_Statics::ClassParams = {
		&AAlien::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAlien_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAlien_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAlien_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAlien_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAlien()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAlien_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAlien, 4216750472);
	template<> SPAZINVADERZ_API UClass* StaticClass<AAlien>()
	{
		return AAlien::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAlien(Z_Construct_UClass_AAlien, &AAlien::StaticClass, TEXT("/Script/SpazInvaderz"), TEXT("AAlien"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlien);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
