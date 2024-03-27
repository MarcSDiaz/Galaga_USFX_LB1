// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaCaza.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaCaza() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemiga();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaCaza();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaCaza_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimiento2_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEnemigaCaza::StaticRegisterNativesANaveEnemigaCaza()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANaveEnemigaCaza);
	UClass* Z_Construct_UClass_ANaveEnemigaCaza_NoRegister()
	{
		return ANaveEnemigaCaza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaCaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Diagonal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Diagonal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaCaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaCaza.h" },
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_Diagonal_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_Diagonal = { "Diagonal", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANaveEnemigaCaza, Diagonal), Z_Construct_UClass_UMovimiento2_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_Diagonal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_Diagonal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigaCaza_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_Diagonal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaCaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaCaza>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::ClassParams = {
		&ANaveEnemigaCaza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigaCaza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaCaza()
	{
		if (!Z_Registration_Info_UClass_ANaveEnemigaCaza.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANaveEnemigaCaza.OuterSingleton, Z_Construct_UClass_ANaveEnemigaCaza_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANaveEnemigaCaza.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaCaza>()
	{
		return ANaveEnemigaCaza::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaCaza);
	ANaveEnemigaCaza::~ANaveEnemigaCaza() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_NaveEnemigaCaza_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_NaveEnemigaCaza_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANaveEnemigaCaza, ANaveEnemigaCaza::StaticClass, TEXT("ANaveEnemigaCaza"), &Z_Registration_Info_UClass_ANaveEnemigaCaza, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANaveEnemigaCaza), 1219904199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_NaveEnemigaCaza_h_457258863(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_NaveEnemigaCaza_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_NaveEnemigaCaza_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
