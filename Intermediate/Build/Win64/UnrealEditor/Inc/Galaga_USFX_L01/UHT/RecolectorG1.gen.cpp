// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/RecolectorG1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecolectorG1() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaRecolector();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ARecolectorG1();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ARecolectorG1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ARecolectorG1::StaticRegisterNativesARecolectorG1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARecolectorG1);
	UClass* Z_Construct_UClass_ARecolectorG1_NoRegister()
	{
		return ARecolectorG1::StaticClass();
	}
	struct Z_Construct_UClass_ARecolectorG1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARecolectorG1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaRecolector,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecolectorG1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RecolectorG1.h" },
		{ "ModuleRelativePath", "RecolectorG1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARecolectorG1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecolectorG1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARecolectorG1_Statics::ClassParams = {
		&ARecolectorG1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARecolectorG1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARecolectorG1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARecolectorG1()
	{
		if (!Z_Registration_Info_UClass_ARecolectorG1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARecolectorG1.OuterSingleton, Z_Construct_UClass_ARecolectorG1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARecolectorG1.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ARecolectorG1>()
	{
		return ARecolectorG1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecolectorG1);
	ARecolectorG1::~ARecolectorG1() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_RecolectorG1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_RecolectorG1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARecolectorG1, ARecolectorG1::StaticClass, TEXT("ARecolectorG1"), &Z_Registration_Info_UClass_ARecolectorG1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARecolectorG1), 2130577600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_RecolectorG1_h_699970463(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_RecolectorG1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_RecolectorG1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
