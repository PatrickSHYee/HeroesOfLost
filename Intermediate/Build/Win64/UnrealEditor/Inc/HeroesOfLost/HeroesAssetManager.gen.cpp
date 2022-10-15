// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesOfLost/HeroesAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroesAssetManager() {}
// Cross Module References
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHeroesAssetManager_NoRegister();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHeroesAssetManager();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_HeroesOfLost();
// End Cross Module References
	void UHeroesAssetManager::StaticRegisterNativesUHeroesAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroesAssetManager);
	UClass* Z_Construct_UClass_UHeroesAssetManager_NoRegister()
	{
		return UHeroesAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UHeroesAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroesAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroesAssetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HeroesAssetManager.h" },
		{ "ModuleRelativePath", "HeroesAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroesAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroesAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroesAssetManager_Statics::ClassParams = {
		&UHeroesAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroesAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroesAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroesAssetManager()
	{
		if (!Z_Registration_Info_UClass_UHeroesAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroesAssetManager.OuterSingleton, Z_Construct_UClass_UHeroesAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeroesAssetManager.OuterSingleton;
	}
	template<> HEROESOFLOST_API UClass* StaticClass<UHeroesAssetManager>()
	{
		return UHeroesAssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroesAssetManager);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeroesAssetManager, UHeroesAssetManager::StaticClass, TEXT("UHeroesAssetManager"), &Z_Registration_Info_UClass_UHeroesAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroesAssetManager), 3547874773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesAssetManager_h_311967975(TEXT("/Script/HeroesOfLost"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
