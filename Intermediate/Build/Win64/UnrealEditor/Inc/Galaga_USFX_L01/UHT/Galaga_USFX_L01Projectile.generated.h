// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Galaga_USFX_L01Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GALAGA_USFX_L01_Galaga_USFX_L01Projectile_generated_h
#error "Galaga_USFX_L01Projectile.generated.h already included, missing '#pragma once' in Galaga_USFX_L01Projectile.h"
#endif
#define GALAGA_USFX_L01_Galaga_USFX_L01Projectile_generated_h

#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_SPARSE_DATA
#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_ACCESSORS
#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaga_USFX_L01Projectile(); \
	friend struct Z_Construct_UClass_AGalaga_USFX_L01Projectile_Statics; \
public: \
	DECLARE_CLASS(AGalaga_USFX_L01Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L01"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_USFX_L01Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGalaga_USFX_L01Projectile(); \
	friend struct Z_Construct_UClass_AGalaga_USFX_L01Projectile_Statics; \
public: \
	DECLARE_CLASS(AGalaga_USFX_L01Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L01"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_USFX_L01Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaga_USFX_L01Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaga_USFX_L01Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_USFX_L01Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_USFX_L01Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_USFX_L01Projectile(AGalaga_USFX_L01Projectile&&); \
	NO_API AGalaga_USFX_L01Projectile(const AGalaga_USFX_L01Projectile&); \
public: \
	NO_API virtual ~AGalaga_USFX_L01Projectile();


#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_USFX_L01Projectile(AGalaga_USFX_L01Projectile&&); \
	NO_API AGalaga_USFX_L01Projectile(const AGalaga_USFX_L01Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_USFX_L01Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_USFX_L01Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaga_USFX_L01Projectile) \
	NO_API virtual ~AGalaga_USFX_L01Projectile();


#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_12_PROLOG
#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_SPARSE_DATA \
	FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_RPC_WRAPPERS \
	FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_ACCESSORS \
	FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_INCLASS \
	FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_SPARSE_DATA \
	FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_ACCESSORS \
	FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_L01_API UClass* StaticClass<class AGalaga_USFX_L01Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Galaga_USFX_L01Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
