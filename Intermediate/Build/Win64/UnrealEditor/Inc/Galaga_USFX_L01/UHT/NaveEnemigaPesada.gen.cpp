// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaPesada.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaPesada() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemiga();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaPesada();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaPesada_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEnemigaPesada::StaticRegisterNativesANaveEnemigaPesada()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANaveEnemigaPesada);
	UClass* Z_Construct_UClass_ANaveEnemigaPesada_NoRegister()
	{
		return ANaveEnemigaPesada::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaPesada_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaPesada_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaPesada_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaPesada.h" },
		{ "ModuleRelativePath", "NaveEnemigaPesada.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaPesada_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaPesada>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaPesada_Statics::ClassParams = {
		&ANaveEnemigaPesada::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaPesada_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaPesada_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaPesada()
	{
		if (!Z_Registration_Info_UClass_ANaveEnemigaPesada.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANaveEnemigaPesada.OuterSingleton, Z_Construct_UClass_ANaveEnemigaPesada_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANaveEnemigaPesada.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaPesada>()
	{
		return ANaveEnemigaPesada::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaPesada);
	ANaveEnemigaPesada::~ANaveEnemigaPesada() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_NaveEnemigaPesada_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_NaveEnemigaPesada_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANaveEnemigaPesada, ANaveEnemigaPesada::StaticClass, TEXT("ANaveEnemigaPesada"), &Z_Registration_Info_UClass_ANaveEnemigaPesada, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANaveEnemigaPesada), 20641532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_NaveEnemigaPesada_h_2953641792(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_NaveEnemigaPesada_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_NaveEnemigaPesada_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
