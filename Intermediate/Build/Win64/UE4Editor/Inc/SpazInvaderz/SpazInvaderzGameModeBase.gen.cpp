// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpazInvaderz/SpazInvaderzGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpazInvaderzGameModeBase() {}
// Cross Module References
	SPAZINVADERZ_API UClass* Z_Construct_UClass_ASpazInvaderzGameModeBase_NoRegister();
	SPAZINVADERZ_API UClass* Z_Construct_UClass_ASpazInvaderzGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpazInvaderz();
// End Cross Module References
	void ASpazInvaderzGameModeBase::StaticRegisterNativesASpazInvaderzGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASpazInvaderzGameModeBase_NoRegister()
	{
		return ASpazInvaderzGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpazInvaderz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpazInvaderzGameModeBase.h" },
		{ "ModuleRelativePath", "SpazInvaderzGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpazInvaderzGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::ClassParams = {
		&ASpazInvaderzGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpazInvaderzGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpazInvaderzGameModeBase, 1348295913);
	template<> SPAZINVADERZ_API UClass* StaticClass<ASpazInvaderzGameModeBase>()
	{
		return ASpazInvaderzGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpazInvaderzGameModeBase(Z_Construct_UClass_ASpazInvaderzGameModeBase, &ASpazInvaderzGameModeBase::StaticClass, TEXT("/Script/SpazInvaderz"), TEXT("ASpazInvaderzGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpazInvaderzGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
