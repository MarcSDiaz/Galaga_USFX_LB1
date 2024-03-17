// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EspiaG1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEspiaG1() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEspiaG1();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEspiaG1_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaEspia();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEspiaG1::StaticRegisterNativesAEspiaG1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEspiaG1);
	UClass* Z_Construct_UClass_AEspiaG1_NoRegister()
	{
		return AEspiaG1::StaticClass();
	}
	struct Z_Construct_UClass_AEspiaG1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEspiaG1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaEspia,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEspiaG1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EspiaG1.h" },
		{ "ModuleRelativePath", "EspiaG1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEspiaG1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEspiaG1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEspiaG1_Statics::ClassParams = {
		&AEspiaG1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEspiaG1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEspiaG1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEspiaG1()
	{
		if (!Z_Registration_Info_UClass_AEspiaG1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEspiaG1.OuterSingleton, Z_Construct_UClass_AEspiaG1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEspiaG1.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEspiaG1>()
	{
		return AEspiaG1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEspiaG1);
	AEspiaG1::~AEspiaG1() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_EspiaG1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_EspiaG1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEspiaG1, AEspiaG1::StaticClass, TEXT("AEspiaG1"), &Z_Registration_Info_UClass_AEspiaG1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEspiaG1), 1913038922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_EspiaG1_h_3785604526(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_EspiaG1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_EspiaG1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
