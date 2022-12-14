// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/GameSettingCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettingCollection() {}
// Cross Module References
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollection_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollection();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting();
	UPackage* Z_Construct_UPackage__Script_GameSettings();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollectionPage_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollectionPage();
// End Cross Module References
	void UGameSettingCollection::StaticRegisterNativesUGameSettingCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingCollection);
	UClass* Z_Construct_UClass_UGameSettingCollection_NoRegister()
	{
		return UGameSettingCollection::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingCollection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//--------------------------------------\n// UGameSettingCollection\n//--------------------------------------\n" },
		{ "IncludePath", "GameSettingCollection.h" },
		{ "ModuleRelativePath", "Public/GameSettingCollection.h" },
		{ "ToolTip", "UGameSettingCollection" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "/** The settings owned by this collection. */" },
		{ "ModuleRelativePath", "Public/GameSettingCollection.h" },
		{ "ToolTip", "The settings owned by this collection." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingCollection, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingCollection_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingCollection_Statics::ClassParams = {
		&UGameSettingCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameSettingCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingCollection()
	{
		if (!Z_Registration_Info_UClass_UGameSettingCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingCollection.OuterSingleton, Z_Construct_UClass_UGameSettingCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingCollection.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingCollection>()
	{
		return UGameSettingCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingCollection);
	void UGameSettingCollectionPage::StaticRegisterNativesUGameSettingCollectionPage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingCollectionPage);
	UClass* Z_Construct_UClass_UGameSettingCollectionPage_NoRegister()
	{
		return UGameSettingCollectionPage::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingCollectionPage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingCollectionPage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingCollectionPage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//--------------------------------------\n// UGameSettingCollectionPage\n//--------------------------------------\n" },
		{ "IncludePath", "GameSettingCollection.h" },
		{ "ModuleRelativePath", "Public/GameSettingCollection.h" },
		{ "ToolTip", "UGameSettingCollectionPage" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingCollectionPage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingCollectionPage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingCollectionPage_Statics::ClassParams = {
		&UGameSettingCollectionPage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingCollectionPage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingCollectionPage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingCollectionPage()
	{
		if (!Z_Registration_Info_UClass_UGameSettingCollectionPage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingCollectionPage.OuterSingleton, Z_Construct_UClass_UGameSettingCollectionPage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingCollectionPage.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingCollectionPage>()
	{
		return UGameSettingCollectionPage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingCollectionPage);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingCollection, UGameSettingCollection::StaticClass, TEXT("UGameSettingCollection"), &Z_Registration_Info_UClass_UGameSettingCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingCollection), 3825827945U) },
		{ Z_Construct_UClass_UGameSettingCollectionPage, UGameSettingCollectionPage::StaticClass, TEXT("UGameSettingCollectionPage"), &Z_Registration_Info_UClass_UGameSettingCollectionPage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingCollectionPage), 1927481963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingCollection_h_143753675(TEXT("/Script/GameSettings"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSettingCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
