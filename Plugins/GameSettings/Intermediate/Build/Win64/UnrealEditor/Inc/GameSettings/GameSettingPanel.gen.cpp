// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Widgets/GameSettingPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettingPanel() {}
// Cross Module References
	GAMESETTINGS_API UFunction* Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingPanel();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingPanel_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	UPackage* Z_Construct_UPackage__Script_GameSettings();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingRegistry_NoRegister();
	GAMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameSettingFilterState();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListView_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingDetailView_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics
	{
		struct GameSettingPanel_eventOnExecuteNamedActionBP_Parms
		{
			UGameSetting* Setting;
			FGameplayTag Action;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Setting;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingPanel_eventOnExecuteNamedActionBP_Parms, Setting), Z_Construct_UClass_UGameSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingPanel_eventOnExecuteNamedActionBP_Parms, Action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::NewProp_Setting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingPanel, nullptr, "OnExecuteNamedActionBP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::GameSettingPanel_eventOnExecuteNamedActionBP_Parms), Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGameSettingPanel::StaticRegisterNativesUGameSettingPanel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingPanel);
	UClass* Z_Construct_UClass_UGameSettingPanel_NoRegister()
	{
		return UGameSettingPanel::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Registry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Registry;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VisibleSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibleSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHoveredOrSelectedSetting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastHoveredOrSelectedSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterNavigationStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterNavigationStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterNavigationStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListView_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListView_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Details_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Details_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnExecuteNamedAction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnExecuteNamedAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSettingPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature, "OnExecuteNamedActionBP__DelegateSignature" }, // 3837828828
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingPanel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/GameSettingPanel.h" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingPanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_Registry_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingPanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_Registry = { "Registry", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingPanel, Registry), Z_Construct_UClass_UGameSettingRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_Registry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_Registry_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_VisibleSettings_Inner = { "VisibleSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_VisibleSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingPanel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_VisibleSettings = { "VisibleSettings", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingPanel, VisibleSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_VisibleSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_VisibleSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_LastHoveredOrSelectedSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingPanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_LastHoveredOrSelectedSetting = { "LastHoveredOrSelectedSetting", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingPanel, LastHoveredOrSelectedSetting), Z_Construct_UClass_UGameSetting_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_LastHoveredOrSelectedSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_LastHoveredOrSelectedSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingPanel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterState = { "FilterState", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingPanel, FilterState), Z_Construct_UScriptStruct_FGameSettingFilterState, METADATA_PARAMS(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterState_MetaData)) }; // 1453809868
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterNavigationStack_Inner = { "FilterNavigationStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameSettingFilterState, METADATA_PARAMS(nullptr, 0) }; // 1453809868
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterNavigationStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingPanel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterNavigationStack = { "FilterNavigationStack", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingPanel, FilterNavigationStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterNavigationStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterNavigationStack_MetaData)) }; // 1453809868
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_ListView_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingPanel" },
		{ "Comment", "// Bound Widgets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingPanel.h" },
		{ "ToolTip", "Bound Widgets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_ListView_Settings = { "ListView_Settings", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingPanel, ListView_Settings), Z_Construct_UClass_UGameSettingListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_ListView_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_ListView_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_Details_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidgetOptional", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingPanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_Details_Settings = { "Details_Settings", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingPanel, Details_Settings), Z_Construct_UClass_UGameSettingDetailView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_Details_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_Details_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_BP_OnExecuteNamedAction_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Execute Named Action" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingPanel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_BP_OnExecuteNamedAction = { "BP_OnExecuteNamedAction", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingPanel, BP_OnExecuteNamedAction), Z_Construct_UDelegateFunction_UGameSettingPanel_OnExecuteNamedActionBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_BP_OnExecuteNamedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_BP_OnExecuteNamedAction_MetaData)) }; // 3837828828
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_Registry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_VisibleSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_VisibleSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_LastHoveredOrSelectedSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterNavigationStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_FilterNavigationStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_ListView_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_Details_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingPanel_Statics::NewProp_BP_OnExecuteNamedAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingPanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingPanel_Statics::ClassParams = {
		&UGameSettingPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UGameSettingPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPanel_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingPanel()
	{
		if (!Z_Registration_Info_UClass_UGameSettingPanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingPanel.OuterSingleton, Z_Construct_UClass_UGameSettingPanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingPanel.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingPanel>()
	{
		return UGameSettingPanel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingPanel);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingPanel, UGameSettingPanel::StaticClass, TEXT("UGameSettingPanel"), &Z_Registration_Info_UClass_UGameSettingPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingPanel), 681172713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_3240604215(TEXT("/Script/GameSettings"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
