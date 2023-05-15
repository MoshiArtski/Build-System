// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInstancedStaticMeshComponent;
struct FHitResult;
#ifdef MYPROJECT3_BuildActor_generated_h
#error "BuildActor.generated.h already included, missing '#pragma once' in BuildActor.h"
#endif
#define MYPROJECT3_BuildActor_generated_h

#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuildingMeshData_Statics; \
	MYPROJECT3_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MYPROJECT3_API UScriptStruct* StaticStruct<struct FBuildingMeshData>();

#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_SPARSE_DATA
#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInstancedSocketTransform); \
	DECLARE_FUNCTION(execDestroyInstance);


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInstancedSocketTransform); \
	DECLARE_FUNCTION(execDestroyInstance);


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_ACCESSORS
#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildActor(); \
	friend struct Z_Construct_UClass_ABuildActor_Statics; \
public: \
	DECLARE_CLASS(ABuildActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(ABuildActor)


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_INCLASS \
private: \
	static void StaticRegisterNativesABuildActor(); \
	friend struct Z_Construct_UClass_ABuildActor_Statics; \
public: \
	DECLARE_CLASS(ABuildActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(ABuildActor)


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildActor(ABuildActor&&); \
	NO_API ABuildActor(const ABuildActor&); \
public: \
	NO_API virtual ~ABuildActor();


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildActor(ABuildActor&&); \
	NO_API ABuildActor(const ABuildActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuildActor) \
	NO_API virtual ~ABuildActor();


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_28_PROLOG
#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_SPARSE_DATA \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_RPC_WRAPPERS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_ACCESSORS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_INCLASS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_SPARSE_DATA \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_ACCESSORS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_INCLASS_NO_PURE_DECLS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT3_API UClass* StaticClass<class ABuildActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildSystem_MyProject3_Source_MyProject3_BuildActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
