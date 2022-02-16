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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPAZINVADERZ_API UClass* Z_Construct_UClass_AAlien_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpazInvaderzGameModeBase::execReturnDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReturnDead();
		P_NATIVE_END;
	}
	void ASpazInvaderzGameModeBase::StaticRegisterNativesASpazInvaderzGameModeBase()
	{
		UClass* Class = ASpazInvaderzGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReturnDead", &ASpazInvaderzGameModeBase::execReturnDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics
	{
		struct SpazInvaderzGameModeBase_eventReturnDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpazInvaderzGameModeBase_eventReturnDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpazInvaderzGameModeBase_eventReturnDead_Parms), &Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpazInvaderzGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpazInvaderzGameModeBase, nullptr, "ReturnDead", nullptr, nullptr, sizeof(SpazInvaderzGameModeBase_eventReturnDead_Parms), Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpazInvaderzGameModeBase_NoRegister()
	{
		return ASpazInvaderzGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArraySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ArraySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllDead_MetaData[];
#endif
		static void NewProp_bAllDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WaveNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlienBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AlienBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpazInvaderz,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpazInvaderzGameModeBase_ReturnDead, "ReturnDead" }, // 70537669
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_ArraySize_MetaData[] = {
		{ "Category", "HUD Variables" },
		{ "ModuleRelativePath", "SpazInvaderzGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_ArraySize = { "ArraySize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpazInvaderzGameModeBase, ArraySize), METADATA_PARAMS(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_ArraySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_ArraySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_bAllDead_MetaData[] = {
		{ "Category", "HUD Variables" },
		{ "ModuleRelativePath", "SpazInvaderzGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_bAllDead_SetBit(void* Obj)
	{
		((ASpazInvaderzGameModeBase*)Obj)->bAllDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_bAllDead = { "bAllDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpazInvaderzGameModeBase), &Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_bAllDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_bAllDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_bAllDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_WaveNumber_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpazInvaderzGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_WaveNumber = { "WaveNumber", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpazInvaderzGameModeBase, WaveNumber), METADATA_PARAMS(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_WaveNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_WaveNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_AlienBP_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpazInvaderzGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_AlienBP = { "AlienBP", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpazInvaderzGameModeBase, AlienBP), Z_Construct_UClass_AAlien_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_AlienBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_AlienBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_SpawnDelay_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpazInvaderzGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_SpawnDelay = { "SpawnDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpazInvaderzGameModeBase, SpawnDelay), METADATA_PARAMS(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_SpawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_SpawnDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_ArraySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_bAllDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_WaveNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_AlienBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::NewProp_SpawnDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpazInvaderzGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::ClassParams = {
		&ASpazInvaderzGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpazInvaderzGameModeBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ASpazInvaderzGameModeBase, 3910141014);
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
