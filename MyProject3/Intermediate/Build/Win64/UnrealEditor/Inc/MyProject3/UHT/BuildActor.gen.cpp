// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject3/BuildActor.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MYPROJECT3_API UClass* Z_Construct_UClass_ABuildActor();
	MYPROJECT3_API UClass* Z_Construct_UClass_ABuildActor_NoRegister();
	MYPROJECT3_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingMeshData();
	UPackage* Z_Construct_UPackage__Script_MyProject3();
// End Cross Module References

static_assert(std::is_polymorphic<FBuildingMeshData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBuildingMeshData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildingMeshData;
class UScriptStruct* FBuildingMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildingMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildingMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingMeshData, Z_Construct_UPackage__Script_MyProject3(), TEXT("BuildingMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_BuildingMeshData.OuterSingleton;
}
template<> MYPROJECT3_API UScriptStruct* StaticStruct<FBuildingMeshData>()
{
	return FBuildingMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildingMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buildName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_buildName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buildMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_buildMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buildGhostMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_buildGhostMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_socketNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_socketNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_socketNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BuildActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingMeshData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildName_MetaData[] = {
		{ "Category", "BuildingMeshData" },
		{ "DisplayName", "buildName" },
		{ "ModuleRelativePath", "BuildActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildName = { "buildName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildingMeshData, buildName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildMesh_MetaData[] = {
		{ "Category", "BuildingMeshData" },
		{ "DisplayName", "buildMesh" },
		{ "ModuleRelativePath", "BuildActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildMesh = { "buildMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildingMeshData, buildMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildGhostMesh_MetaData[] = {
		{ "Category", "BuildingMeshData" },
		{ "DisplayName", "ghostMesh" },
		{ "ModuleRelativePath", "BuildActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildGhostMesh = { "buildGhostMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildingMeshData, buildGhostMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildGhostMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildGhostMesh_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_socketNames_Inner = { "socketNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_socketNames_MetaData[] = {
		{ "Category", "BuildingMeshData" },
		{ "DisplayName", "socketNames" },
		{ "ModuleRelativePath", "BuildActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_socketNames = { "socketNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildingMeshData, socketNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_socketNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_socketNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildingMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_buildGhostMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_socketNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewProp_socketNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildingMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject3,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BuildingMeshData",
		sizeof(FBuildingMeshData),
		alignof(FBuildingMeshData),
		Z_Construct_UScriptStruct_FBuildingMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildingMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildingMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildingMeshData.InnerSingleton, Z_Construct_UScriptStruct_FBuildingMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildingMeshData.InnerSingleton;
	}
	DEFINE_FUNCTION(ABuildActor::execGetInstancedSocketTransform)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_InstancedComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetInstancedSocketTransform(Z_Param_InstancedComponent,Z_Param_InstanceIndex,Z_Param_SocketName,Z_Param_Out_Success,Z_Param_bWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildActor::execDestroyInstance)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyInstance(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	void ABuildActor::StaticRegisterNativesABuildActor()
	{
		UClass* Class = ABuildActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyInstance", &ABuildActor::execDestroyInstance },
			{ "GetInstancedSocketTransform", &ABuildActor::execGetInstancedSocketTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics
	{
		struct BuildActor_eventDestroyInstance_Parms
		{
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildActor_eventDestroyInstance_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Mode" },
		{ "ModuleRelativePath", "BuildActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildActor, nullptr, "DestroyInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::BuildActor_eventDestroyInstance_Parms), Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildActor_DestroyInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildActor_DestroyInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics
	{
		struct BuildActor_eventGetInstancedSocketTransform_Parms
		{
			UInstancedStaticMeshComponent* InstancedComponent;
			int32 InstanceIndex;
			FName SocketName;
			bool Success;
			bool bWorldSpace;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_InstancedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_InstancedComponent = { "InstancedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildActor_eventGetInstancedSocketTransform_Parms, InstancedComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_InstancedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_InstancedComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildActor_eventGetInstancedSocketTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildActor_eventGetInstancedSocketTransform_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_SocketName_MetaData)) };
	void Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((BuildActor_eventGetInstancedSocketTransform_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BuildActor_eventGetInstancedSocketTransform_Parms), &Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((BuildActor_eventGetInstancedSocketTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BuildActor_eventGetInstancedSocketTransform_Parms), &Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildActor_eventGetInstancedSocketTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_InstancedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Mode" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "BuildActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildActor, nullptr, "GetInstancedSocketTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::BuildActor_eventGetInstancedSocketTransform_Parms), Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildActor);
	UClass* Z_Construct_UClass_ABuildActor_NoRegister()
	{
		return ABuildActor::StaticClass();
	}
	struct Z_Construct_UClass_ABuildActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseInstancedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseInstancedMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildActor_DestroyInstance, "DestroyInstance" }, // 2499967555
		{ &Z_Construct_UFunction_ABuildActor_GetInstancedSocketTransform, "GetInstancedSocketTransform" }, // 3436474902
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuildActor.h" },
		{ "ModuleRelativePath", "BuildActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildActor_Statics::NewProp_BaseInstancedMesh_MetaData[] = {
		{ "Category", "Build Mode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BuildActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildActor_Statics::NewProp_BaseInstancedMesh = { "BaseInstancedMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildActor, BaseInstancedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildActor_Statics::NewProp_BaseInstancedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildActor_Statics::NewProp_BaseInstancedMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildActor_Statics::NewProp_BaseInstancedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildActor_Statics::ClassParams = {
		&ABuildActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuildActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildActor()
	{
		if (!Z_Registration_Info_UClass_ABuildActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildActor.OuterSingleton, Z_Construct_UClass_ABuildActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuildActor.OuterSingleton;
	}
	template<> MYPROJECT3_API UClass* StaticClass<ABuildActor>()
	{
		return ABuildActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildActor);
	ABuildActor::~ABuildActor() {}
	struct Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_Statics::ScriptStructInfo[] = {
		{ FBuildingMeshData::StaticStruct, Z_Construct_UScriptStruct_FBuildingMeshData_Statics::NewStructOps, TEXT("BuildingMeshData"), &Z_Registration_Info_UScriptStruct_BuildingMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingMeshData), 157305133U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuildActor, ABuildActor::StaticClass, TEXT("ABuildActor"), &Z_Registration_Info_UClass_ABuildActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildActor), 452489692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_4099293997(TEXT("/Script/MyProject3"),
		Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
