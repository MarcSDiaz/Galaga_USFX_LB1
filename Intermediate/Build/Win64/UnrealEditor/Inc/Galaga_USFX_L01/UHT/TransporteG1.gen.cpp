// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/TransporteG1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransporteG1() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaTransporte();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ATransporteG1();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ATransporteG1_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimiento3_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ATransporteG1::StaticRegisterNativesATransporteG1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATransporteG1);
	UClass* Z_Construct_UClass_ATransporteG1_NoRegister()
	{
		return ATransporteG1::StaticClass();
	}
	struct Z_Construct_UClass_ATransporteG1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MVertical_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MVertical;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATransporteG1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaTransporte,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransporteG1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TransporteG1.h" },
		{ "ModuleRelativePath", "TransporteG1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransporteG1_Statics::NewProp_MVertical_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TransporteG1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransporteG1_Statics::NewProp_MVertical = { "MVertical", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATransporteG1, MVertical), Z_Construct_UClass_UMovimiento3_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransporteG1_Statics::NewProp_MVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransporteG1_Statics::NewProp_MVertical_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATransporteG1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransporteG1_Statics::NewProp_MVertical,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATransporteG1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransporteG1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATransporteG1_Statics::ClassParams = {
		&ATransporteG1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATransporteG1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATransporteG1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATransporteG1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATransporteG1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATransporteG1()
	{
		if (!Z_Registration_Info_UClass_ATransporteG1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATransporteG1.OuterSingleton, Z_Construct_UClass_ATransporteG1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATransporteG1.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ATransporteG1>()
	{
		return ATransporteG1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATransporteG1);
	ATransporteG1::~ATransporteG1() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_TransporteG1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_TransporteG1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATransporteG1, ATransporteG1::StaticClass, TEXT("ATransporteG1"), &Z_Registration_Info_UClass_ATransporteG1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATransporteG1), 750391080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_TransporteG1_h_1994655343(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_TransporteG1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_TransporteG1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
