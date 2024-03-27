// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Movimiento1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimiento1() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimiento1();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimiento1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UMovimiento1::StaticRegisterNativesUMovimiento1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovimiento1);
	UClass* Z_Construct_UClass_UMovimiento1_NoRegister()
	{
		return UMovimiento1::StaticClass();
	}
	struct Z_Construct_UClass_UMovimiento1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimiento1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimiento1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Movimiento1.h" },
		{ "ModuleRelativePath", "Movimiento1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimiento1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimiento1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovimiento1_Statics::ClassParams = {
		&UMovimiento1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovimiento1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimiento1()
	{
		if (!Z_Registration_Info_UClass_UMovimiento1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovimiento1.OuterSingleton, Z_Construct_UClass_UMovimiento1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovimiento1.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UMovimiento1>()
	{
		return UMovimiento1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimiento1);
	UMovimiento1::~UMovimiento1() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovimiento1, UMovimiento1::StaticClass, TEXT("UMovimiento1"), &Z_Registration_Info_UClass_UMovimiento1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovimiento1), 1888160500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento1_h_2093413577(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_Movimiento1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
