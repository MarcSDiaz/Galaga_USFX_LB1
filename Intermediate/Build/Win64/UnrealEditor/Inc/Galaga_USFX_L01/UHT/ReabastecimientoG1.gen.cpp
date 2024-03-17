// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ReabastecimientoG1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReabastecimientoG1() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabastecimiento();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AReabastecimientoG1();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AReabastecimientoG1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AReabastecimientoG1::StaticRegisterNativesAReabastecimientoG1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReabastecimientoG1);
	UClass* Z_Construct_UClass_AReabastecimientoG1_NoRegister()
	{
		return AReabastecimientoG1::StaticClass();
	}
	struct Z_Construct_UClass_AReabastecimientoG1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReabastecimientoG1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaReabastecimiento,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReabastecimientoG1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ReabastecimientoG1.h" },
		{ "ModuleRelativePath", "ReabastecimientoG1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReabastecimientoG1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReabastecimientoG1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReabastecimientoG1_Statics::ClassParams = {
		&AReabastecimientoG1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AReabastecimientoG1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReabastecimientoG1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReabastecimientoG1()
	{
		if (!Z_Registration_Info_UClass_AReabastecimientoG1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReabastecimientoG1.OuterSingleton, Z_Construct_UClass_AReabastecimientoG1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReabastecimientoG1.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AReabastecimientoG1>()
	{
		return AReabastecimientoG1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReabastecimientoG1);
	AReabastecimientoG1::~AReabastecimientoG1() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_ReabastecimientoG1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_ReabastecimientoG1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AReabastecimientoG1, AReabastecimientoG1::StaticClass, TEXT("AReabastecimientoG1"), &Z_Registration_Info_UClass_AReabastecimientoG1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReabastecimientoG1), 780800977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_ReabastecimientoG1_h_2400307485(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_ReabastecimientoG1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_ReabastecimientoG1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
