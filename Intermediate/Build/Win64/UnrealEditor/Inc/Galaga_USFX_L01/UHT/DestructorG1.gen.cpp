// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/DestructorG1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructorG1() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ADestructorG1();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ADestructorG1_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaDestructor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ADestructorG1::StaticRegisterNativesADestructorG1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADestructorG1);
	UClass* Z_Construct_UClass_ADestructorG1_NoRegister()
	{
		return ADestructorG1::StaticClass();
	}
	struct Z_Construct_UClass_ADestructorG1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestructorG1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaDestructor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructorG1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DestructorG1.h" },
		{ "ModuleRelativePath", "DestructorG1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestructorG1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestructorG1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADestructorG1_Statics::ClassParams = {
		&ADestructorG1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADestructorG1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructorG1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestructorG1()
	{
		if (!Z_Registration_Info_UClass_ADestructorG1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADestructorG1.OuterSingleton, Z_Construct_UClass_ADestructorG1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADestructorG1.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ADestructorG1>()
	{
		return ADestructorG1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestructorG1);
	ADestructorG1::~ADestructorG1() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_DestructorG1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_DestructorG1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADestructorG1, ADestructorG1::StaticClass, TEXT("ADestructorG1"), &Z_Registration_Info_UClass_ADestructorG1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADestructorG1), 2449000729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_DestructorG1_h_767248990(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_DestructorG1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_NewRepo_Source_Galaga_USFX_L01_DestructorG1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
