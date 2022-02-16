// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpazInvaderz/Public/PlayerShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerShip() {}
// Cross Module References
	SPAZINVADERZ_API UClass* Z_Construct_UClass_APlayerShip_NoRegister();
	SPAZINVADERZ_API UClass* Z_Construct_UClass_APlayerShip();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpazInvaderz();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(APlayerShip::execOnOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherbodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherbodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execResetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execGetBulletIntText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetBulletIntText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execUpdateBullet)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BulletChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBullet(Z_Param_BulletChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execGetHealthIntText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execUpdateHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealth(Z_Param_HealthChange);
		P_NATIVE_END;
	}
	void APlayerShip::StaticRegisterNativesAPlayerShip()
	{
		UClass* Class = APlayerShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBulletIntText", &APlayerShip::execGetBulletIntText },
			{ "GetHealthIntText", &APlayerShip::execGetHealthIntText },
			{ "OnOverlap", &APlayerShip::execOnOverlap },
			{ "ResetLocation", &APlayerShip::execResetLocation },
			{ "UpdateBullet", &APlayerShip::execUpdateBullet },
			{ "UpdateHealth", &APlayerShip::execUpdateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics
	{
		struct PlayerShip_eventGetBulletIntText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventGetBulletIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "GetBulletIntText", nullptr, nullptr, sizeof(PlayerShip_eventGetBulletIntText_Parms), Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_GetBulletIntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_GetBulletIntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics
	{
		struct PlayerShip_eventGetHealthIntText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventGetHealthIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "GetHealthIntText", nullptr, nullptr, sizeof(PlayerShip_eventGetHealthIntText_Parms), Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_GetHealthIntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_GetHealthIntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_OnOverlap_Statics
	{
		struct PlayerShip_eventOnOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherbodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherbodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventOnOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OtherbodyIndex = { "OtherbodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventOnOverlap_Parms, OtherbodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PlayerShip_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerShip_eventOnOverlap_Parms), &Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_OtherbodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "OnOverlap", nullptr, nullptr, sizeof(PlayerShip_eventOnOverlap_Parms), Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ResetLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ResetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ResetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ResetLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ResetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ResetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ResetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_ResetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics
	{
		struct PlayerShip_eventUpdateBullet_Parms
		{
			float BulletChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics::NewProp_BulletChange = { "BulletChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventUpdateBullet_Parms, BulletChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics::NewProp_BulletChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "UpdateBullet", nullptr, nullptr, sizeof(PlayerShip_eventUpdateBullet_Parms), Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_UpdateBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_UpdateBullet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics
	{
		struct PlayerShip_eventUpdateHealth_Parms
		{
			float HealthChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics::NewProp_HealthChange = { "HealthChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventUpdateHealth_Parms, HealthChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics::NewProp_HealthChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "UpdateHealth", nullptr, nullptr, sizeof(PlayerShip_eventUpdateHealth_Parms), Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerShip_NoRegister()
	{
		return APlayerShip::StaticClass();
	}
	struct Z_Construct_UClass_APlayerShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HealthTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BulletTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BulletCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootingSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DashSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpazInvaderz,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerShip_GetBulletIntText, "GetBulletIntText" }, // 1620604896
		{ &Z_Construct_UFunction_APlayerShip_GetHealthIntText, "GetHealthIntText" }, // 3018393841
		{ &Z_Construct_UFunction_APlayerShip_OnOverlap, "OnOverlap" }, // 1159055210
		{ &Z_Construct_UFunction_APlayerShip_ResetLocation, "ResetLocation" }, // 2066902162
		{ &Z_Construct_UFunction_APlayerShip_UpdateBullet, "UpdateBullet" }, // 274317044
		{ &Z_Construct_UFunction_APlayerShip_UpdateHealth, "UpdateHealth" }, // 3529966386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerShip.h" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerMesh_MetaData[] = {
		{ "Category", "PlayerMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, PlayerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "// HitBox\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
		{ "ToolTip", "HitBox" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, CollisionBox), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_CollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_CollisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerMesh" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMesh)\n//USpringArmComponent* SpringArm = nullptr;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMesh)\nUSpringArmComponent* SpringArm = nullptr;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerSpeed_MetaData[] = {
		{ "Category", "PlayerMesh" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerSpeed = { "PlayerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, PlayerSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthTotal_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// HUD time?\n// https://unrealcpp.com/health-bar-ui-hud/ looked at this\n" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
		{ "ToolTip", "HUD time?\nhttps:unrealcpp.com/health-bar-ui-hud/ looked at this" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthTotal = { "HealthTotal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, HealthTotal), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, PlayerHealth), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthPercentage_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, HealthPercentage), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PreviousHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, PreviousHealth), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PreviousHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PreviousHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletTotal_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletTotal = { "BulletTotal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, BulletTotal), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletCurrent_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletCurrent = { "BulletCurrent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, BulletCurrent), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletPercent_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletPercent = { "BulletPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, BulletPercent), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PreviousBullet_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PreviousBullet = { "PreviousBullet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, PreviousBullet), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PreviousBullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PreviousBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_ShootingSound_MetaData[] = {
		{ "Category", "PlayerMesh" },
		{ "Comment", "// SFX Mode\n" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
		{ "ToolTip", "SFX Mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_ShootingSound = { "ShootingSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, ShootingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShootingSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShootingSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_ReloadSound_MetaData[] = {
		{ "Category", "PlayerMesh" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_ReloadSound = { "ReloadSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, ReloadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_ReloadSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_ReloadSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_DashSound_MetaData[] = {
		{ "Category", "PlayerMesh" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_DashSound = { "DashSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, DashSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_DashSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_DashSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerShip" },
		{ "Comment", "// This line gives acces to other cpp classes\n" },
		{ "ModuleRelativePath", "Public/PlayerShip.h" },
		{ "ToolTip", "This line gives acces to other cpp classes" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, ActorToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_ActorToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_CollisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PreviousHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_BulletPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PreviousBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_ShootingSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_ReloadSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_DashSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_ActorToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerShip_Statics::ClassParams = {
		&APlayerShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerShip, 2962818338);
	template<> SPAZINVADERZ_API UClass* StaticClass<APlayerShip>()
	{
		return APlayerShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerShip(Z_Construct_UClass_APlayerShip, &APlayerShip::StaticClass, TEXT("/Script/SpazInvaderz"), TEXT("APlayerShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
