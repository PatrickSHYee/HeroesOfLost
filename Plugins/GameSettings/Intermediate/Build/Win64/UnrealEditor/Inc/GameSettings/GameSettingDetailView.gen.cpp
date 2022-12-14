// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Widgets/GameSettingDetailView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettingDetailView() {}
// Cross Module References
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingDetailView_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingDetailView();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GameSettings();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingVisualData_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	void UGameSettingDetailView::StaticRegisterNativesUGameSettingDetailView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingDetailView);
	UClass* Z_Construct_UClass_UGameSettingDetailView_NoRegister()
	{
		return UGameSettingDetailView::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingDetailView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionWidgetPool_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionWidgetPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSetting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_SettingName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SettingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichText_Description_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RichText_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichText_DynamicDetails_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RichText_DynamicDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichText_WarningDetails_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RichText_WarningDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichText_DisabledDetails_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RichText_DisabledDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_DetailsExtension_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Box_DetailsExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingDetailView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingDetailView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/GameSettingDetailView.h" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingDetailView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_VisualData_MetaData[] = {
		{ "Category", "GameSettingDetailView" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingDetailView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_VisualData = { "VisualData", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingDetailView, VisualData), Z_Construct_UClass_UGameSettingVisualData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_VisualData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_VisualData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_ExtensionWidgetPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingDetailView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_ExtensionWidgetPool = { "ExtensionWidgetPool", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingDetailView, ExtensionWidgetPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_ExtensionWidgetPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_ExtensionWidgetPool_MetaData)) }; // 1309823222
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_CurrentSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingDetailView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_CurrentSetting = { "CurrentSetting", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingDetailView, CurrentSetting), Z_Construct_UClass_UGameSetting_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_CurrentSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_CurrentSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_Text_SettingName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidgetOptional", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingDetailView" },
		{ "Comment", "// Bound Widgets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingDetailView.h" },
		{ "ToolTip", "Bound Widgets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_Text_SettingName = { "Text_SettingName", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingDetailView, Text_SettingName), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_Text_SettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_Text_SettingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidgetOptional", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingDetailView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingDetailView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_Description = { "RichText_Description", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingDetailView, RichText_Description), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_DynamicDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidgetOptional", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingDetailView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingDetailView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_DynamicDetails = { "RichText_DynamicDetails", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingDetailView, RichText_DynamicDetails), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_DynamicDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_DynamicDetails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_WarningDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidgetOptional", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingDetailView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingDetailView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_WarningDetails = { "RichText_WarningDetails", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingDetailView, RichText_WarningDetails), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_WarningDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_WarningDetails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_DisabledDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidgetOptional", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingDetailView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingDetailView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_DisabledDetails = { "RichText_DisabledDetails", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingDetailView, RichText_DisabledDetails), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_DisabledDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_DisabledDetails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_Box_DetailsExtension_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidgetOptional", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingDetailView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingDetailView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_Box_DetailsExtension = { "Box_DetailsExtension", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingDetailView, Box_DetailsExtension), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_Box_DetailsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_Box_DetailsExtension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingDetailView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_VisualData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_ExtensionWidgetPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_CurrentSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_Text_SettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_DynamicDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_WarningDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_RichText_DisabledDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingDetailView_Statics::NewProp_Box_DetailsExtension,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingDetailView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingDetailView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingDetailView_Statics::ClassParams = {
		&UGameSettingDetailView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameSettingDetailView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingDetailView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingDetailView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingDetailView()
	{
		if (!Z_Registration_Info_UClass_UGameSettingDetailView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingDetailView.OuterSingleton, Z_Construct_UClass_UGameSettingDetailView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingDetailView.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingDetailView>()
	{
		return UGameSettingDetailView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingDetailView);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingDetailView, UGameSettingDetailView::StaticClass, TEXT("UGameSettingDetailView"), &Z_Registration_Info_UClass_UGameSettingDetailView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingDetailView), 1689042054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailView_h_3929446284(TEXT("/Script/GameSettings"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
