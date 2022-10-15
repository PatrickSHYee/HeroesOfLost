// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/GameSettingValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettingValue() {}
// Cross Module References
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValue_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValue();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting();
	UPackage* Z_Construct_UPackage__Script_GameSettings();
// End Cross Module References
	void UGameSettingValue::StaticRegisterNativesUGameSettingValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingValue);
	UClass* Z_Construct_UClass_UGameSettingValue_NoRegister()
	{
		return UGameSettingValue::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingValue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for all settings that are conceptually a value, that can be \n * changed, and thus reset or restored to their initial value.\n */" },
		{ "IncludePath", "GameSettingValue.h" },
		{ "ModuleRelativePath", "Public/GameSettingValue.h" },
		{ "ToolTip", "The base class for all settings that are conceptually a value, that can be\nchanged, and thus reset or restored to their initial value." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingValue_Statics::ClassParams = {
		&UGameSettingValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingValue()
	{
		if (!Z_Registration_Info_UClass_UGameSettingValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingValue.OuterSingleton, Z_Construct_UClass_UGameSettingValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingValue.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingValue>()
	{
		return UGameSettingValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingValue);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingValue, UGameSettingValue::StaticClass, TEXT("UGameSettingValue"), &Z_Registration_Info_UClass_UGameSettingValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingValue), 2302626318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingValue_h_1895923652(TEXT("/Script/GameSettings"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
