// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResourceSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBuildResource;
#ifdef MYPROJECT3_ResourceSystem_generated_h
#error "ResourceSystem.generated.h already included, missing '#pragma once' in ResourceSystem.h"
#endif
#define MYPROJECT3_ResourceSystem_generated_h

#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_SPARSE_DATA
#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddResourceToInventory); \
	DECLARE_FUNCTION(execSetResource); \
	DECLARE_FUNCTION(execGetResourceData); \
	DECLARE_FUNCTION(execGetResource); \
	DECLARE_FUNCTION(execLoadPlayerResources); \
	DECLARE_FUNCTION(execSavePlayerResources);


#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddResourceToInventory); \
	DECLARE_FUNCTION(execSetResource); \
	DECLARE_FUNCTION(execGetResourceData); \
	DECLARE_FUNCTION(execGetResource); \
	DECLARE_FUNCTION(execLoadPlayerResources); \
	DECLARE_FUNCTION(execSavePlayerResources);


#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_ACCESSORS
#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResourceSystem(); \
	friend struct Z_Construct_UClass_UResourceSystem_Statics; \
public: \
	DECLARE_CLASS(UResourceSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(UResourceSystem)


#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUResourceSystem(); \
	friend struct Z_Construct_UClass_UResourceSystem_Statics; \
public: \
	DECLARE_CLASS(UResourceSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(UResourceSystem)


#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResourceSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResourceSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResourceSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResourceSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResourceSystem(UResourceSystem&&); \
	NO_API UResourceSystem(const UResourceSystem&); \
public: \
	NO_API virtual ~UResourceSystem();


#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResourceSystem(UResourceSystem&&); \
	NO_API UResourceSystem(const UResourceSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResourceSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResourceSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UResourceSystem) \
	NO_API virtual ~UResourceSystem();


#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_14_PROLOG
#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_SPARSE_DATA \
	FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_RPC_WRAPPERS \
	FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_ACCESSORS \
	FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_INCLASS \
	FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_SPARSE_DATA \
	FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_ACCESSORS \
	FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyProject3_Source_MyProject3_ResourceSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT3_API UClass* StaticClass<class UResourceSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject3_Source_MyProject3_ResourceSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
