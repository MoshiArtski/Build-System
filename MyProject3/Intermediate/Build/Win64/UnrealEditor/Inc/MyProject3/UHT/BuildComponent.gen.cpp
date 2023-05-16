// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject3/BuildComponent.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MYPROJECT3_API UClass* Z_Construct_UClass_UBuildComponent();
	MYPROJECT3_API UClass* Z_Construct_UClass_UBuildComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject3();
// End Cross Module References
	DEFINE_FUNCTION(UBuildComponent::execSpawnBuilding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBuilding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuildComponent::execGetBuildMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBuildMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuildComponent::execSetBuildMode)
	{
		P_GET_UBOOL(Z_Param_bSetBuildMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBuildMode(Z_Param_bSetBuildMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuildComponent::execPerformLineTrace)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LineTraceRange);
		P_GET_UBOOL(Z_Param_bDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->PerformLineTrace(Z_Param_LineTraceRange,Z_Param_bDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuildComponent::execDeleteBuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteBuild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuildComponent::execRotateBuilding)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateBuilding(Z_Param_DeltaRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuildComponent::execChangeMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMesh();
		P_NATIVE_END;
	}
	void UBuildComponent::StaticRegisterNativesUBuildComponent()
	{
		UClass* Class = UBuildComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMesh", &UBuildComponent::execChangeMesh },
			{ "DeleteBuild", &UBuildComponent::execDeleteBuild },
			{ "GetBuildMode", &UBuildComponent::execGetBuildMode },
			{ "PerformLineTrace", &UBuildComponent::execPerformLineTrace },
			{ "RotateBuilding", &UBuildComponent::execRotateBuilding },
			{ "SetBuildMode", &UBuildComponent::execSetBuildMode },
			{ "SpawnBuilding", &UBuildComponent::execSpawnBuilding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBuildComponent_ChangeMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildComponent_ChangeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildComponent_ChangeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuildComponent, nullptr, "ChangeMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuildComponent_ChangeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_ChangeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuildComponent_ChangeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildComponent_ChangeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuildComponent_DeleteBuild_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildComponent_DeleteBuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Mode" },
		{ "Comment", "// Build Functions\n" },
		{ "ModuleRelativePath", "BuildComponent.h" },
		{ "ToolTip", "Build Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildComponent_DeleteBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuildComponent, nullptr, "DeleteBuild", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuildComponent_DeleteBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_DeleteBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuildComponent_DeleteBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildComponent_DeleteBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics
	{
		struct BuildComponent_eventGetBuildMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BuildComponent_eventGetBuildMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BuildComponent_eventGetBuildMode_Parms), &Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Mode" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuildComponent, nullptr, "GetBuildMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::BuildComponent_eventGetBuildMode_Parms), Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuildComponent_GetBuildMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildComponent_GetBuildMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics
	{
		struct BuildComponent_eventPerformLineTrace_Parms
		{
			int32 LineTraceRange;
			bool bDebug;
			FHitResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTraceRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LineTraceRange;
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_LineTraceRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_LineTraceRange = { "LineTraceRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildComponent_eventPerformLineTrace_Parms, LineTraceRange), METADATA_PARAMS(Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_LineTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_LineTraceRange_MetaData)) };
	void Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((BuildComponent_eventPerformLineTrace_Parms*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BuildComponent_eventPerformLineTrace_Parms), &Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildComponent_eventPerformLineTrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_LineTraceRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Mode" },
		{ "CPP_Default_bDebug", "false" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuildComponent, nullptr, "PerformLineTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::BuildComponent_eventPerformLineTrace_Parms), Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuildComponent_PerformLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildComponent_PerformLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics
	{
		struct BuildComponent_eventRotateBuilding_Parms
		{
			float DeltaRotation;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildComponent_eventRotateBuilding_Parms, DeltaRotation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::NewProp_DeltaRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuildComponent, nullptr, "RotateBuilding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::BuildComponent_eventRotateBuilding_Parms), Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuildComponent_RotateBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildComponent_RotateBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics
	{
		struct BuildComponent_eventSetBuildMode_Parms
		{
			bool bSetBuildMode;
		};
		static void NewProp_bSetBuildMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetBuildMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::NewProp_bSetBuildMode_SetBit(void* Obj)
	{
		((BuildComponent_eventSetBuildMode_Parms*)Obj)->bSetBuildMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::NewProp_bSetBuildMode = { "bSetBuildMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BuildComponent_eventSetBuildMode_Parms), &Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::NewProp_bSetBuildMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::NewProp_bSetBuildMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Mode" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuildComponent, nullptr, "SetBuildMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::BuildComponent_eventSetBuildMode_Parms), Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuildComponent_SetBuildMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildComponent_SetBuildMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuildComponent_SpawnBuilding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuildComponent_SpawnBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Mode" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildComponent_SpawnBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuildComponent, nullptr, "SpawnBuilding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuildComponent_SpawnBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildComponent_SpawnBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuildComponent_SpawnBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildComponent_SpawnBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildComponent);
	UClass* Z_Construct_UClass_UBuildComponent_NoRegister()
	{
		return UBuildComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBuildComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBuildModeOn_MetaData[];
#endif
		static void NewProp_bIsBuildModeOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBuildModeOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingTraceRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BuildingTraceRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingMeshDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingMeshDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static void NewProp_Debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapping_MetaData[];
#endif
		static void NewProp_bEnableSnapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnappingSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnappingSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSizeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidBuildMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidBuildMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvalidLocationMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InvalidLocationMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlapRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuildComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBuildComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuildComponent_ChangeMesh, "ChangeMesh" }, // 2154729542
		{ &Z_Construct_UFunction_UBuildComponent_DeleteBuild, "DeleteBuild" }, // 3369132726
		{ &Z_Construct_UFunction_UBuildComponent_GetBuildMode, "GetBuildMode" }, // 2808053901
		{ &Z_Construct_UFunction_UBuildComponent_PerformLineTrace, "PerformLineTrace" }, // 1711098384
		{ &Z_Construct_UFunction_UBuildComponent_RotateBuilding, "RotateBuilding" }, // 2748466213
		{ &Z_Construct_UFunction_UBuildComponent_SetBuildMode, "SetBuildMode" }, // 3657673962
		{ &Z_Construct_UFunction_UBuildComponent_SpawnBuilding, "SpawnBuilding" }, // 2311790369
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BuildComponent.h" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_bIsBuildModeOn_MetaData[] = {
		{ "Category", "Build Mode" },
		{ "Comment", "// Build Variables\n" },
		{ "ModuleRelativePath", "BuildComponent.h" },
		{ "ToolTip", "Build Variables" },
	};
#endif
	void Z_Construct_UClass_UBuildComponent_Statics::NewProp_bIsBuildModeOn_SetBit(void* Obj)
	{
		((UBuildComponent*)Obj)->bIsBuildModeOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_bIsBuildModeOn = { "bIsBuildModeOn", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBuildComponent), &Z_Construct_UClass_UBuildComponent_Statics::NewProp_bIsBuildModeOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_bIsBuildModeOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_bIsBuildModeOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingTraceRange_MetaData[] = {
		{ "Category", "Build Mode" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingTraceRange = { "BuildingTraceRange", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, BuildingTraceRange), METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingTraceRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingMeshDataTable_MetaData[] = {
		{ "Category", "Build Mode" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingMeshDataTable = { "BuildingMeshDataTable", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, BuildingMeshDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingMeshDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingMeshDataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_Debug_MetaData[] = {
		{ "Category", "Build Mode" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBuildComponent_Statics::NewProp_Debug_SetBit(void* Obj)
	{
		((UBuildComponent*)Obj)->Debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBuildComponent), &Z_Construct_UClass_UBuildComponent_Statics::NewProp_Debug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_Debug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_bEnableSnapping_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBuildComponent_Statics::NewProp_bEnableSnapping_SetBit(void* Obj)
	{
		((UBuildComponent*)Obj)->bEnableSnapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_bEnableSnapping = { "bEnableSnapping", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBuildComponent), &Z_Construct_UClass_UBuildComponent_Statics::NewProp_bEnableSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_bEnableSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_bEnableSnapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_SnappingSensitivity_MetaData[] = {
		{ "Category", "Build Mode" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_SnappingSensitivity = { "SnappingSensitivity", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, SnappingSensitivity), METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_SnappingSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_SnappingSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_GridSizeInput_MetaData[] = {
		{ "Category", "Build Mode" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_GridSizeInput = { "GridSizeInput", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, GridSizeInput), METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_GridSizeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_GridSizeInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_GhostMesh_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_GhostMesh = { "GhostMesh", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, GhostMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_GhostMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_GhostMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingMesh_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingMesh = { "BuildingMesh", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, BuildingMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_ValidBuildMaterial_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_ValidBuildMaterial = { "ValidBuildMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, ValidBuildMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_ValidBuildMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_ValidBuildMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_InvalidLocationMaterial_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_InvalidLocationMaterial = { "InvalidLocationMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, InvalidLocationMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_InvalidLocationMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_InvalidLocationMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_UpdateInterval_MetaData[] = {
		{ "Category", "Build Mode" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, UpdateInterval), METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_UpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_UpdateInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildDistance_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildDistance = { "BuildDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, BuildDistance), METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildComponent_Statics::NewProp_OverlapRadius_MetaData[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "BuildComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuildComponent_Statics::NewProp_OverlapRadius = { "OverlapRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildComponent, OverlapRadius), METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::NewProp_OverlapRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::NewProp_OverlapRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuildComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_bIsBuildModeOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingTraceRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingMeshDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_bEnableSnapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_SnappingSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_GridSizeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_GhostMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_ValidBuildMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_InvalidLocationMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_UpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_BuildDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildComponent_Statics::NewProp_OverlapRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuildComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildComponent_Statics::ClassParams = {
		&UBuildComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBuildComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBuildComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuildComponent()
	{
		if (!Z_Registration_Info_UClass_UBuildComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildComponent.OuterSingleton, Z_Construct_UClass_UBuildComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuildComponent.OuterSingleton;
	}
	template<> MYPROJECT3_API UClass* StaticClass<UBuildComponent>()
	{
		return UBuildComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildComponent);
	UBuildComponent::~UBuildComponent() {}
	struct Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuildComponent, UBuildComponent::StaticClass, TEXT("UBuildComponent"), &Z_Registration_Info_UClass_UBuildComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildComponent), 3363874057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_1129857001(TEXT("/Script/MyProject3"),
		Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
