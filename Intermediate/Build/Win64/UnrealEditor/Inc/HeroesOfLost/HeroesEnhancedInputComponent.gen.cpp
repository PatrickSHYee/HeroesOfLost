// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesOfLost/HeroesEnhancedInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroesEnhancedInputComponent() {}
// Cross Module References
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHeroesEnhancedInputComponent_NoRegister();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHeroesEnhancedInputComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
	UPackage* Z_Construct_UPackage__Script_HeroesOfLost();
// End Cross Module References
	void UHeroesEnhancedInputComponent::StaticRegisterNativesUHeroesEnhancedInputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroesEnhancedInputComponent);
	UClass* Z_Construct_UClass_UHeroesEnhancedInputComponent_NoRegister()
	{
		return UHeroesEnhancedInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHeroesEnhancedInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroesEnhancedInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroesEnhancedInputComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "HeroesEnhancedInputComponent.h" },
		{ "ModuleRelativePath", "HeroesEnhancedInputComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroesEnhancedInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroesEnhancedInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroesEnhancedInputComponent_Statics::ClassParams = {
		&UHeroesEnhancedInputComponent::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UHeroesEnhancedInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroesEnhancedInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroesEnhancedInputComponent()
	{
		if (!Z_Registration_Info_UClass_UHeroesEnhancedInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroesEnhancedInputComponent.OuterSingleton, Z_Construct_UClass_UHeroesEnhancedInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeroesEnhancedInputComponent.OuterSingleton;
	}
	template<> HEROESOFLOST_API UClass* StaticClass<UHeroesEnhancedInputComponent>()
	{
		return UHeroesEnhancedInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroesEnhancedInputComponent);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesEnhancedInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesEnhancedInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeroesEnhancedInputComponent, UHeroesEnhancedInputComponent::StaticClass, TEXT("UHeroesEnhancedInputComponent"), &Z_Registration_Info_UClass_UHeroesEnhancedInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroesEnhancedInputComponent), 246370422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesEnhancedInputComponent_h_2444643204(TEXT("/Script/HeroesOfLost"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesEnhancedInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesEnhancedInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
