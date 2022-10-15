// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularPawn() {}
// Cross Module References
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPawn_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// End Cross Module References
	void AModularPawn::StaticRegisterNativesAModularPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularPawn);
	UClass* Z_Construct_UClass_AModularPawn_NoRegister()
	{
		return AModularPawn::StaticClass();
	}
	struct Z_Construct_UClass_AModularPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ModularPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularPawn.h" },
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularPawn_Statics::ClassParams = {
		&AModularPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularPawn()
	{
		if (!Z_Registration_Info_UClass_AModularPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularPawn.OuterSingleton, Z_Construct_UClass_AModularPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AModularPawn.OuterSingleton;
	}
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularPawn>()
	{
		return AModularPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularPawn);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AModularPawn, AModularPawn::StaticClass, TEXT("AModularPawn"), &Z_Registration_Info_UClass_AModularPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularPawn), 353959238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_4163848565(TEXT("/Script/ModularGameplayActors"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
