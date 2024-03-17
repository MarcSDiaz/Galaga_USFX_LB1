// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ReabastecimientoG2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReabastecimientoG2() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabastecimiento();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AReabastecimientoG2();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AReabastecimientoG2_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AReabastecimientoG2::StaticRegisterNativesAReabastecimientoG2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReabastecimientoG2);
	UClass* Z_Construct_UClass_AReabastecimientoG2_NoRegister()
	{
		return AReabastecimientoG2::StaticClass();
	}
	struct Z_Construct_UClass_AReabastecimientoG2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReabastecimientoG2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaReabastecimiento,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReabastecimientoG2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ReabastecimientoG2.h" },
		{ "ModuleRelativePath", "ReabastecimientoG2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReabastecimientoG2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReabastecimientoG2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReabastecimientoG2_Statics::ClassParams = {
		&AReabastecimientoG2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AReabastecimientoG2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReabastecimientoG2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReabastecimientoG2()
	{
		if (!Z_Registration_Info_UClass_AReabastecimientoG2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReabastecimientoG2.OuterSingleton, Z_Construct_UClass_AReabastecimientoG2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReabastecimientoG2.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AReabastecimientoG2>()
	{
		return AReabastecimientoG2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReabastecimientoG2);
	AReabastecimientoG2::~AReabastecimientoG2() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_ReabastecimientoG2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_ReabastecimientoG2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AReabastecimientoG2, AReabastecimientoG2::StaticClass, TEXT("AReabastecimientoG2"), &Z_Registration_Info_UClass_AReabastecimientoG2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReabastecimientoG2), 1999926127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_ReabastecimientoG2_h_2484848989(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_ReabastecimientoG2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_ReabastecimientoG2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
