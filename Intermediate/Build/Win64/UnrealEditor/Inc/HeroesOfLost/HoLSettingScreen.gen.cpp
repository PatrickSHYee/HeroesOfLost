// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesOfLost/HoLSettingScreen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoLSettingScreen() {}
// Cross Module References
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHoLSettingScreen_NoRegister();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHoLSettingScreen();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingScreen();
	UPackage* Z_Construct_UPackage__Script_HeroesOfLost();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHoLTabListWidgetBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References
	void UHoLSettingScreen::StaticRegisterNativesUHoLSettingScreen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoLSettingScreen);
	UClass* Z_Construct_UClass_UHoLSettingScreen_NoRegister()
	{
		return UHoLSettingScreen::StaticClass();
	}
	struct Z_Construct_UClass_UHoLSettingScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopSettingsTabs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopSettingsTabs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackInputActionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackInputActionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyInputActionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyInputActionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelInputActionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CancelInputActionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoLSettingScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoLSettingScreen_Statics::Class_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n *  Setting up the option menu UI\n */" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "HoLSettingScreen.h" },
		{ "ModuleRelativePath", "HoLSettingScreen.h" },
		{ "ToolTip", "Setting up the option menu UI" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_TopSettingsTabs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "Input" },
		{ "Comment", "// Variables\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HoLSettingScreen.h" },
		{ "OptionalWidget", "TRUE" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_TopSettingsTabs = { "TopSettingsTabs", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoLSettingScreen, TopSettingsTabs), Z_Construct_UClass_UHoLTabListWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_TopSettingsTabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_TopSettingsTabs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_BackInputActionData_MetaData[] = {
		{ "Category", "HoLSettingScreen" },
		{ "ModuleRelativePath", "HoLSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_BackInputActionData = { "BackInputActionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoLSettingScreen, BackInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_BackInputActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_BackInputActionData_MetaData)) }; // 2016613317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_ApplyInputActionData_MetaData[] = {
		{ "Category", "HoLSettingScreen" },
		{ "ModuleRelativePath", "HoLSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_ApplyInputActionData = { "ApplyInputActionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoLSettingScreen, ApplyInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_ApplyInputActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_ApplyInputActionData_MetaData)) }; // 2016613317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_CancelInputActionData_MetaData[] = {
		{ "Category", "HoLSettingScreen" },
		{ "ModuleRelativePath", "HoLSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_CancelInputActionData = { "CancelInputActionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoLSettingScreen, CancelInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_CancelInputActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_CancelInputActionData_MetaData)) }; // 2016613317
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoLSettingScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_TopSettingsTabs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_BackInputActionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_ApplyInputActionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoLSettingScreen_Statics::NewProp_CancelInputActionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoLSettingScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoLSettingScreen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoLSettingScreen_Statics::ClassParams = {
		&UHoLSettingScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoLSettingScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoLSettingScreen_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHoLSettingScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoLSettingScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoLSettingScreen()
	{
		if (!Z_Registration_Info_UClass_UHoLSettingScreen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoLSettingScreen.OuterSingleton, Z_Construct_UClass_UHoLSettingScreen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoLSettingScreen.OuterSingleton;
	}
	template<> HEROESOFLOST_API UClass* StaticClass<UHoLSettingScreen>()
	{
		return UHoLSettingScreen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoLSettingScreen);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HoLSettingScreen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HoLSettingScreen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoLSettingScreen, UHoLSettingScreen::StaticClass, TEXT("UHoLSettingScreen"), &Z_Registration_Info_UClass_UHoLSettingScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoLSettingScreen), 855489832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HoLSettingScreen_h_1933029975(TEXT("/Script/HeroesOfLost"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HoLSettingScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HoLSettingScreen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
