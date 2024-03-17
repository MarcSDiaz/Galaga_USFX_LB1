// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/TransporteG2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransporteG2() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaTransporte();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ATransporteG2();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ATransporteG2_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ATransporteG2::StaticRegisterNativesATransporteG2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATransporteG2);
	UClass* Z_Construct_UClass_ATransporteG2_NoRegister()
	{
		return ATransporteG2::StaticClass();
	}
	struct Z_Construct_UClass_ATransporteG2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATransporteG2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaTransporte,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransporteG2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TransporteG2.h" },
		{ "ModuleRelativePath", "TransporteG2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATransporteG2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransporteG2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATransporteG2_Statics::ClassParams = {
		&ATransporteG2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATransporteG2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATransporteG2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATransporteG2()
	{
		if (!Z_Registration_Info_UClass_ATransporteG2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATransporteG2.OuterSingleton, Z_Construct_UClass_ATransporteG2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATransporteG2.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ATransporteG2>()
	{
		return ATransporteG2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATransporteG2);
	ATransporteG2::~ATransporteG2() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_TransporteG2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_TransporteG2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATransporteG2, ATransporteG2::StaticClass, TEXT("ATransporteG2"), &Z_Registration_Info_UClass_ATransporteG2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATransporteG2), 1882878489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_TransporteG2_h_2029635559(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_TransporteG2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_TransporteG2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
