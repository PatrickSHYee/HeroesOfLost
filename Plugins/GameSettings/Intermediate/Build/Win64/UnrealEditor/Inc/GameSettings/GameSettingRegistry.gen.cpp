// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/GameSettingRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettingRegistry() {}
// Cross Module References
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingRegistry_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingRegistry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameSettings();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
// End Cross Module References
	void UGameSettingRegistry::StaticRegisterNativesUGameSettingRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingRegistry);
	UClass* Z_Construct_UClass_UGameSettingRegistry_NoRegister()
	{
		return UGameSettingRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopLevelSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopLevelSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TopLevelSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningLocalPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningLocalPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameSettingRegistry.h" },
		{ "ModuleRelativePath", "Public/GameSettingRegistry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_TopLevelSettings_Inner = { "TopLevelSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_TopLevelSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSettingRegistry.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_TopLevelSettings = { "TopLevelSettings", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingRegistry, TopLevelSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_TopLevelSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_TopLevelSettings_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_RegisteredSettings_Inner = { "RegisteredSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_RegisteredSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSettingRegistry.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_RegisteredSettings = { "RegisteredSettings", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingRegistry, RegisteredSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_RegisteredSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_RegisteredSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_OwningLocalPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSettingRegistry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_OwningLocalPlayer = { "OwningLocalPlayer", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingRegistry, OwningLocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_OwningLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_OwningLocalPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_TopLevelSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_TopLevelSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_RegisteredSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_RegisteredSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingRegistry_Statics::NewProp_OwningLocalPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingRegistry_Statics::ClassParams = {
		&UGameSettingRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameSettingRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingRegistry_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingRegistry()
	{
		if (!Z_Registration_Info_UClass_UGameSettingRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingRegistry.OuterSingleton, Z_Construct_UClass_UGameSettingRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingRegistry.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingRegistry>()
	{
		return UGameSettingRegistry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingRegistry);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingRegistry, UGameSettingRegistry::StaticClass, TEXT("UGameSettingRegistry"), &Z_Registration_Info_UClass_UGameSettingRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingRegistry), 3721512171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingRegistry_h_1458116366(TEXT("/Script/GameSettings"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
