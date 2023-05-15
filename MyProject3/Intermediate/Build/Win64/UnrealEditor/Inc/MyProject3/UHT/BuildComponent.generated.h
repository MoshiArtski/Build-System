// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef MYPROJECT3_BuildComponent_generated_h
#error "BuildComponent.generated.h already included, missing '#pragma once' in BuildComponent.h"
#endif
#define MYPROJECT3_BuildComponent_generated_h

#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_SPARSE_DATA
#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnBuilding); \
	DECLARE_FUNCTION(execGetBuildMode); \
	DECLARE_FUNCTION(execSetBuildMode); \
	DECLARE_FUNCTION(execPerformLineTrace); \
	DECLARE_FUNCTION(execDeleteBuild); \
	DECLARE_FUNCTION(execRotateBuilding); \
	DECLARE_FUNCTION(execChangeMesh);


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnBuilding); \
	DECLARE_FUNCTION(execGetBuildMode); \
	DECLARE_FUNCTION(execSetBuildMode); \
	DECLARE_FUNCTION(execPerformLineTrace); \
	DECLARE_FUNCTION(execDeleteBuild); \
	DECLARE_FUNCTION(execRotateBuilding); \
	DECLARE_FUNCTION(execChangeMesh);


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_ACCESSORS
#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildComponent(); \
	friend struct Z_Construct_UClass_UBuildComponent_Statics; \
public: \
	DECLARE_CLASS(UBuildComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(UBuildComponent)


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBuildComponent(); \
	friend struct Z_Construct_UClass_UBuildComponent_Statics; \
public: \
	DECLARE_CLASS(UBuildComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(UBuildComponent)


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuildComponent(UBuildComponent&&); \
	NO_API UBuildComponent(const UBuildComponent&); \
public: \
	NO_API virtual ~UBuildComponent();


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuildComponent(UBuildComponent&&); \
	NO_API UBuildComponent(const UBuildComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuildComponent) \
	NO_API virtual ~UBuildComponent();


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_13_PROLOG
#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_SPARSE_DATA \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_RPC_WRAPPERS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_ACCESSORS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_INCLASS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_SPARSE_DATA \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_ACCESSORS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT3_API UClass* StaticClass<class UBuildComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildSystem_MyProject3_Source_MyProject3_BuildComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
