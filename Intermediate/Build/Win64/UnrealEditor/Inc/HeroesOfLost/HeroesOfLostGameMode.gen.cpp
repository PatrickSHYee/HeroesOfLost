// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesOfLost/HeroesOfLostGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroesOfLostGameMode() {}
// Cross Module References
	HEROESOFLOST_API UClass* Z_Construct_UClass_AHeroesOfLostGameMode_NoRegister();
	HEROESOFLOST_API UClass* Z_Construct_UClass_AHeroesOfLostGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HeroesOfLost();
// End Cross Module References
	void AHeroesOfLostGameMode::StaticRegisterNativesAHeroesOfLostGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeroesOfLostGameMode);
	UClass* Z_Construct_UClass_AHeroesOfLostGameMode_NoRegister()
	{
		return AHeroesOfLostGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHeroesOfLostGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeroesOfLostGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesOfLostGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HeroesOfLostGameMode.h" },
		{ "ModuleRelativePath", "HeroesOfLostGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeroesOfLostGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroesOfLostGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroesOfLostGameMode_Statics::ClassParams = {
		&AHeroesOfLostGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHeroesOfLostGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesOfLostGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeroesOfLostGameMode()
	{
		if (!Z_Registration_Info_UClass_AHeroesOfLostGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroesOfLostGameMode.OuterSingleton, Z_Construct_UClass_AHeroesOfLostGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHeroesOfLostGameMode.OuterSingleton;
	}
	template<> HEROESOFLOST_API UClass* StaticClass<AHeroesOfLostGameMode>()
	{
		return AHeroesOfLostGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroesOfLostGameMode);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesOfLostGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesOfLostGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHeroesOfLostGameMode, AHeroesOfLostGameMode::StaticClass, TEXT("AHeroesOfLostGameMode"), &Z_Registration_Info_UClass_AHeroesOfLostGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroesOfLostGameMode), 3469905238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesOfLostGameMode_h_3254405139(TEXT("/Script/HeroesOfLost"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesOfLostGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesOfLostGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
