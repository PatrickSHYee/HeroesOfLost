// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameState() {}
// Cross Module References
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameState_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
// End Cross Module References
	void AModularGameStateBase::StaticRegisterNativesAModularGameStateBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularGameStateBase);
	UClass* Z_Construct_UClass_AModularGameStateBase_NoRegister()
	{
		return AModularGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AModularGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Pair this with a ModularGameModeBase */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Pair this with a ModularGameModeBase" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameStateBase_Statics::ClassParams = {
		&AModularGameStateBase::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularGameStateBase()
	{
		if (!Z_Registration_Info_UClass_AModularGameStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameStateBase.OuterSingleton, Z_Construct_UClass_AModularGameStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AModularGameStateBase.OuterSingleton;
	}
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameStateBase>()
	{
		return AModularGameStateBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameStateBase);
	void AModularGameState::StaticRegisterNativesAModularGameState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularGameState);
	UClass* Z_Construct_UClass_AModularGameState_NoRegister()
	{
		return AModularGameState::StaticClass();
	}
	struct Z_Construct_UClass_AModularGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Pair this with a ModularGameState */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Pair this with a ModularGameState" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameState_Statics::ClassParams = {
		&AModularGameState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularGameState()
	{
		if (!Z_Registration_Info_UClass_AModularGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameState.OuterSingleton, Z_Construct_UClass_AModularGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AModularGameState.OuterSingleton;
	}
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameState>()
	{
		return AModularGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameState);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AModularGameStateBase, AModularGameStateBase::StaticClass, TEXT("AModularGameStateBase"), &Z_Registration_Info_UClass_AModularGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameStateBase), 876836599U) },
		{ Z_Construct_UClass_AModularGameState, AModularGameState::StaticClass, TEXT("AModularGameState"), &Z_Registration_Info_UClass_AModularGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameState), 2507649171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_1288726965(TEXT("/Script/ModularGameplayActors"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
