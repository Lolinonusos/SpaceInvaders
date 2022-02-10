// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpazInvaderz/Public/Brick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrick() {}
// Cross Module References
	SPAZINVADERZ_API UClass* Z_Construct_UClass_ABrick_NoRegister();
	SPAZINVADERZ_API UClass* Z_Construct_UClass_ABrick();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpazInvaderz();
// End Cross Module References
	void ABrick::StaticRegisterNativesABrick()
	{
	}
	UClass* Z_Construct_UClass_ABrick_NoRegister()
	{
		return ABrick::StaticClass();
	}
	struct Z_Construct_UClass_ABrick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpazInvaderz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Brick.h" },
		{ "ModuleRelativePath", "Public/Brick.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrick_Statics::ClassParams = {
		&ABrick::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABrick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrick, 2380901396);
	template<> SPAZINVADERZ_API UClass* StaticClass<ABrick>()
	{
		return ABrick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrick(Z_Construct_UClass_ABrick, &ABrick::StaticClass, TEXT("/Script/SpazInvaderz"), TEXT("ABrick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
