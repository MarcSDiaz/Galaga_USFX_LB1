// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Movimiento3.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimiento3() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimiento3();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimiento3_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UMovimiento3::StaticRegisterNativesUMovimiento3()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovimiento3);
	UClass* Z_Construct_UClass_UMovimiento3_NoRegister()
	{
		return UMovimiento3::StaticClass();
	}
	struct Z_Construct_UClass_UMovimiento3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimiento3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimiento3_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Movimiento3.h" },
		{ "ModuleRelativePath", "Movimiento3.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimiento3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimiento3>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovimiento3_Statics::ClassParams = {
		&UMovimiento3::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimiento3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimiento3()
	{
		if (!Z_Registration_Info_UClass_UMovimiento3.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovimiento3.OuterSingleton, Z_Construct_UClass_UMovimiento3_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovimiento3.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UMovimiento3>()
	{
		return UMovimiento3::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimiento3);
	UMovimiento3::~UMovimiento3() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento3_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento3_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovimiento3, UMovimiento3::StaticClass, TEXT("UMovimiento3"), &Z_Registration_Info_UClass_UMovimiento3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovimiento3), 2361246264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento3_h_3085896646(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento3_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento3_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
