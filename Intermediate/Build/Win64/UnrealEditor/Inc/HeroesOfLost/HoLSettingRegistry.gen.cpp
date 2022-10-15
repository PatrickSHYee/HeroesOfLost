// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesOfLost/UI/HoLSettingRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoLSettingRegistry() {}
// Cross Module References
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHoLSettingRegistry_NoRegister();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHoLSettingRegistry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HeroesOfLost();
// End Cross Module References
	void UHoLSettingRegistry::StaticRegisterNativesUHoLSettingRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoLSettingRegistry);
	UClass* Z_Construct_UClass_UHoLSettingRegistry_NoRegister()
	{
		return UHoLSettingRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UHoLSettingRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoLSettingRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoLSettingRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/HoLSettingRegistry.h" },
		{ "ModuleRelativePath", "UI/HoLSettingRegistry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoLSettingRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoLSettingRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoLSettingRegistry_Statics::ClassParams = {
		&UHoLSettingRegistry::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHoLSettingRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoLSettingRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoLSettingRegistry()
	{
		if (!Z_Registration_Info_UClass_UHoLSettingRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoLSettingRegistry.OuterSingleton, Z_Construct_UClass_UHoLSettingRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoLSettingRegistry.OuterSingleton;
	}
	template<> HEROESOFLOST_API UClass* StaticClass<UHoLSettingRegistry>()
	{
		return UHoLSettingRegistry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoLSettingRegistry);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_HoLSettingRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_HoLSettingRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoLSettingRegistry, UHoLSettingRegistry::StaticClass, TEXT("UHoLSettingRegistry"), &Z_Registration_Info_UClass_UHoLSettingRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoLSettingRegistry), 3557018215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_HoLSettingRegistry_h_104909560(TEXT("/Script/HeroesOfLost"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_HoLSettingRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_HoLSettingRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
