// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Movimiento2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimiento2() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimiento2();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimiento2_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UMovimiento2::StaticRegisterNativesUMovimiento2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovimiento2);
	UClass* Z_Construct_UClass_UMovimiento2_NoRegister()
	{
		return UMovimiento2::StaticClass();
	}
	struct Z_Construct_UClass_UMovimiento2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimiento2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimiento2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Movimiento2.h" },
		{ "ModuleRelativePath", "Movimiento2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimiento2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimiento2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovimiento2_Statics::ClassParams = {
		&UMovimiento2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovimiento2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimiento2()
	{
		if (!Z_Registration_Info_UClass_UMovimiento2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovimiento2.OuterSingleton, Z_Construct_UClass_UMovimiento2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovimiento2.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UMovimiento2>()
	{
		return UMovimiento2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimiento2);
	UMovimiento2::~UMovimiento2() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovimiento2, UMovimiento2::StaticClass, TEXT("UMovimiento2"), &Z_Registration_Info_UClass_UMovimiento2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovimiento2), 2392807407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento2_h_1928385420(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
