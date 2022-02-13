// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpazInvaderz/Public/DisplayStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayStats() {}
// Cross Module References
	SPAZINVADERZ_API UClass* Z_Construct_UClass_ADisplayStats_NoRegister();
	SPAZINVADERZ_API UClass* Z_Construct_UClass_ADisplayStats();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_SpazInvaderz();
// End Cross Module References
	void ADisplayStats::StaticRegisterNativesADisplayStats()
	{
	}
	UClass* Z_Construct_UClass_ADisplayStats_NoRegister()
	{
		return ADisplayStats::StaticClass();
	}
	struct Z_Construct_UClass_ADisplayStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisplayStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SpazInvaderz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "DisplayStats.h" },
		{ "ModuleRelativePath", "Public/DisplayStats.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisplayStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisplayStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADisplayStats_Statics::ClassParams = {
		&ADisplayStats::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADisplayStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisplayStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADisplayStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADisplayStats, 1760695244);
	template<> SPAZINVADERZ_API UClass* StaticClass<ADisplayStats>()
	{
		return ADisplayStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADisplayStats(Z_Construct_UClass_ADisplayStats, &ADisplayStats::StaticClass, TEXT("/Script/SpazInvaderz"), TEXT("ADisplayStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisplayStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
