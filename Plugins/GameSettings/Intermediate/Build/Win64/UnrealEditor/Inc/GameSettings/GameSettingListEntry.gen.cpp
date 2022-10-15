// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Widgets/GameSettingListEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettingListEntry() {}
// Cross Module References
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntryBase_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntryBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	UPackage* Z_Construct_UPackage__Script_GameSettings();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserListEntry_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntry_Setting_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntry_Setting();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Discrete();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValueDiscrete_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingRotator_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Scalar();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValueScalar_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UAnalogSlider_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Action_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Action();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingAction_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Navigation();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollectionPage_NoRegister();
// End Cross Module References
	static FName NAME_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget = FName(TEXT("GetPrimaryGamepadFocusWidget"));
	UWidget* UGameSettingListEntryBase::GetPrimaryGamepadFocusWidget()
	{
		GameSettingListEntryBase_eventGetPrimaryGamepadFocusWidget_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget),&Parms);
		return Parms.ReturnValue;
	}
	void UGameSettingListEntryBase::StaticRegisterNativesUGameSettingListEntryBase()
	{
	}
	struct Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingListEntryBase_eventGetPrimaryGamepadFocusWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingListEntryBase, nullptr, "GetPrimaryGamepadFocusWidget", nullptr, nullptr, sizeof(GameSettingListEntryBase_eventGetPrimaryGamepadFocusWidget_Parms), Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingListEntryBase);
	UClass* Z_Construct_UClass_UGameSettingListEntryBase_NoRegister()
	{
		return UGameSettingListEntryBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingListEntryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Setting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Setting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Background;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingListEntryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSettingListEntryBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget, "GetPrimaryGamepadFocusWidget" }, // 1951447989
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntryBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// UAthenaChallengeListEntry\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/GameSettingListEntry.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "UAthenaChallengeListEntry" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntryBase_Statics::NewProp_Setting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntryBase_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntryBase, Setting), Z_Construct_UClass_UGameSetting_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntryBase_Statics::NewProp_Setting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntryBase_Statics::NewProp_Setting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntryBase_Statics::NewProp_Background_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidgetOptional", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntryBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntryBase_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntryBase, Background), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntryBase_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntryBase_Statics::NewProp_Background_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingListEntryBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntryBase_Statics::NewProp_Setting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntryBase_Statics::NewProp_Background,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameSettingListEntryBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUserListEntry_NoRegister, (int32)VTABLE_OFFSET(UGameSettingListEntryBase, IUserListEntry), false },  // 1133342243
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingListEntryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingListEntryBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingListEntryBase_Statics::ClassParams = {
		&UGameSettingListEntryBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSettingListEntryBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntryBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntryBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingListEntryBase()
	{
		if (!Z_Registration_Info_UClass_UGameSettingListEntryBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingListEntryBase.OuterSingleton, Z_Construct_UClass_UGameSettingListEntryBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingListEntryBase.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingListEntryBase>()
	{
		return UGameSettingListEntryBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingListEntryBase);
	void UGameSettingListEntry_Setting::StaticRegisterNativesUGameSettingListEntry_Setting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingListEntry_Setting);
	UClass* Z_Construct_UClass_UGameSettingListEntry_Setting_NoRegister()
	{
		return UGameSettingListEntry_Setting::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingListEntry_Setting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_SettingName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SettingName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingListEntryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Settings" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// UGameSettingListEntry_Setting\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/GameSettingListEntry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "UGameSettingListEntry_Setting" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::NewProp_Text_SettingName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntry_Setting" },
		{ "Comment", "// Bound Widgets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "Bound Widgets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::NewProp_Text_SettingName = { "Text_SettingName", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntry_Setting, Text_SettingName), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::NewProp_Text_SettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::NewProp_Text_SettingName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::NewProp_Text_SettingName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingListEntry_Setting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::ClassParams = {
		&UGameSettingListEntry_Setting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingListEntry_Setting()
	{
		if (!Z_Registration_Info_UClass_UGameSettingListEntry_Setting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingListEntry_Setting.OuterSingleton, Z_Construct_UClass_UGameSettingListEntry_Setting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingListEntry_Setting.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingListEntry_Setting>()
	{
		return UGameSettingListEntry_Setting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingListEntry_Setting);
	void UGameSettingListEntrySetting_Discrete::StaticRegisterNativesUGameSettingListEntrySetting_Discrete()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingListEntrySetting_Discrete);
	UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_NoRegister()
	{
		return UGameSettingListEntrySetting_Discrete::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscreteSetting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DiscreteSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Panel_Value_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Panel_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_SettingValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rotator_SettingValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_Decrease_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Decrease;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_Increase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Increase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingListEntry_Setting,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Settings" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// UGameSettingListEntrySetting_Discrete\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/GameSettingListEntry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "UGameSettingListEntrySetting_Discrete" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_DiscreteSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_DiscreteSetting = { "DiscreteSetting", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Discrete, DiscreteSetting), Z_Construct_UClass_UGameSettingValueDiscrete_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_DiscreteSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_DiscreteSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Panel_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntrySetting_Discrete" },
		{ "Comment", "// Bound Widgets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "Bound Widgets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Panel_Value = { "Panel_Value", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Discrete, Panel_Value), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Panel_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Panel_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Rotator_SettingValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntrySetting_Discrete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Rotator_SettingValue = { "Rotator_SettingValue", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Discrete, Rotator_SettingValue), Z_Construct_UClass_UGameSettingRotator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Rotator_SettingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Rotator_SettingValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Button_Decrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntrySetting_Discrete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Button_Decrease = { "Button_Decrease", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Discrete, Button_Decrease), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Button_Decrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Button_Decrease_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Button_Increase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntrySetting_Discrete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Button_Increase = { "Button_Increase", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Discrete, Button_Increase), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Button_Increase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Button_Increase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_DiscreteSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Panel_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Rotator_SettingValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Button_Decrease,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::NewProp_Button_Increase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingListEntrySetting_Discrete>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::ClassParams = {
		&UGameSettingListEntrySetting_Discrete::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Discrete()
	{
		if (!Z_Registration_Info_UClass_UGameSettingListEntrySetting_Discrete.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingListEntrySetting_Discrete.OuterSingleton, Z_Construct_UClass_UGameSettingListEntrySetting_Discrete_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingListEntrySetting_Discrete.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingListEntrySetting_Discrete>()
	{
		return UGameSettingListEntrySetting_Discrete::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingListEntrySetting_Discrete);
	DEFINE_FUNCTION(UGameSettingListEntrySetting_Scalar::execHandleSliderCaptureEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSliderCaptureEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettingListEntrySetting_Scalar::execHandleSliderValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSliderValueChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged = FName(TEXT("OnDefaultValueChanged"));
	void UGameSettingListEntrySetting_Scalar::OnDefaultValueChanged(float DefaultValue)
	{
		GameSettingListEntrySetting_Scalar_eventOnDefaultValueChanged_Parms Parms;
		Parms.DefaultValue=DefaultValue;
		ProcessEvent(FindFunctionChecked(NAME_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged),&Parms);
	}
	static FName NAME_UGameSettingListEntrySetting_Scalar_OnValueChanged = FName(TEXT("OnValueChanged"));
	void UGameSettingListEntrySetting_Scalar::OnValueChanged(float Value)
	{
		GameSettingListEntrySetting_Scalar_eventOnValueChanged_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UGameSettingListEntrySetting_Scalar_OnValueChanged),&Parms);
	}
	void UGameSettingListEntrySetting_Scalar::StaticRegisterNativesUGameSettingListEntrySetting_Scalar()
	{
		UClass* Class = UGameSettingListEntrySetting_Scalar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleSliderCaptureEnded", &UGameSettingListEntrySetting_Scalar::execHandleSliderCaptureEnded },
			{ "HandleSliderValueChanged", &UGameSettingListEntrySetting_Scalar::execHandleSliderValueChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderCaptureEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderCaptureEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderCaptureEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingListEntrySetting_Scalar, nullptr, "HandleSliderCaptureEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderCaptureEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderCaptureEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderCaptureEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderCaptureEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics
	{
		struct GameSettingListEntrySetting_Scalar_eventHandleSliderValueChanged_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingListEntrySetting_Scalar_eventHandleSliderValueChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingListEntrySetting_Scalar, nullptr, "HandleSliderValueChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::GameSettingListEntrySetting_Scalar_eventHandleSliderValueChanged_Parms), Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingListEntrySetting_Scalar_eventOnDefaultValueChanged_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics::NewProp_DefaultValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingListEntrySetting_Scalar, nullptr, "OnDefaultValueChanged", nullptr, nullptr, sizeof(GameSettingListEntrySetting_Scalar_eventOnDefaultValueChanged_Parms), Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingListEntrySetting_Scalar_eventOnValueChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingListEntrySetting_Scalar, nullptr, "OnValueChanged", nullptr, nullptr, sizeof(GameSettingListEntrySetting_Scalar_eventOnValueChanged_Parms), Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingListEntrySetting_Scalar);
	UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_NoRegister()
	{
		return UGameSettingListEntrySetting_Scalar::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarSetting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScalarSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Panel_Value_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Panel_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_SettingValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider_SettingValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_SettingValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SettingValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingListEntry_Setting,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderCaptureEnded, "HandleSliderCaptureEnded" }, // 3346602213
		{ &Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged, "HandleSliderValueChanged" }, // 776981385
		{ &Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged, "OnDefaultValueChanged" }, // 1575250365
		{ &Z_Construct_UFunction_UGameSettingListEntrySetting_Scalar_OnValueChanged, "OnValueChanged" }, // 2304603079
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Settings" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// UGameSettingListEntrySetting_Scalar\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/GameSettingListEntry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "UGameSettingListEntrySetting_Scalar" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_ScalarSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_ScalarSetting = { "ScalarSetting", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Scalar, ScalarSetting), Z_Construct_UClass_UGameSettingValueScalar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_ScalarSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_ScalarSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Panel_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntrySetting_Scalar" },
		{ "Comment", "// Bound Widgets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "Bound Widgets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Panel_Value = { "Panel_Value", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Scalar, Panel_Value), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Panel_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Panel_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Slider_SettingValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntrySetting_Scalar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Slider_SettingValue = { "Slider_SettingValue", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Scalar, Slider_SettingValue), Z_Construct_UClass_UAnalogSlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Slider_SettingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Slider_SettingValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Text_SettingValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntrySetting_Scalar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Text_SettingValue = { "Text_SettingValue", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Scalar, Text_SettingValue), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Text_SettingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Text_SettingValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_ScalarSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Panel_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Slider_SettingValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::NewProp_Text_SettingValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingListEntrySetting_Scalar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::ClassParams = {
		&UGameSettingListEntrySetting_Scalar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Scalar()
	{
		if (!Z_Registration_Info_UClass_UGameSettingListEntrySetting_Scalar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingListEntrySetting_Scalar.OuterSingleton, Z_Construct_UClass_UGameSettingListEntrySetting_Scalar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingListEntrySetting_Scalar.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingListEntrySetting_Scalar>()
	{
		return UGameSettingListEntrySetting_Scalar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingListEntrySetting_Scalar);
	static FName NAME_UGameSettingListEntrySetting_Action_OnSettingAssigned = FName(TEXT("OnSettingAssigned"));
	void UGameSettingListEntrySetting_Action::OnSettingAssigned(FText const& ActionText)
	{
		GameSettingListEntrySetting_Action_eventOnSettingAssigned_Parms Parms;
		Parms.ActionText=ActionText;
		ProcessEvent(FindFunctionChecked(NAME_UGameSettingListEntrySetting_Action_OnSettingAssigned),&Parms);
	}
	void UGameSettingListEntrySetting_Action::StaticRegisterNativesUGameSettingListEntrySetting_Action()
	{
	}
	struct Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ActionText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::NewProp_ActionText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::NewProp_ActionText = { "ActionText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingListEntrySetting_Action_eventOnSettingAssigned_Parms, ActionText), METADATA_PARAMS(Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::NewProp_ActionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::NewProp_ActionText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::NewProp_ActionText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingListEntrySetting_Action, nullptr, "OnSettingAssigned", nullptr, nullptr, sizeof(GameSettingListEntrySetting_Action_eventOnSettingAssigned_Parms), Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingListEntrySetting_Action);
	UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Action_NoRegister()
	{
		return UGameSettingListEntrySetting_Action::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionSetting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingListEntry_Setting,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSettingListEntrySetting_Action_OnSettingAssigned, "OnSettingAssigned" }, // 3559326728
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Settings" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// UGameSettingListEntrySetting_Action\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/GameSettingListEntry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "UGameSettingListEntrySetting_Action" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::NewProp_ActionSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::NewProp_ActionSetting = { "ActionSetting", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Action, ActionSetting), Z_Construct_UClass_UGameSettingAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::NewProp_ActionSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::NewProp_ActionSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::NewProp_Button_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntrySetting_Action" },
		{ "Comment", "// Bound Widgets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "Bound Widgets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::NewProp_Button_Action = { "Button_Action", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Action, Button_Action), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::NewProp_Button_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::NewProp_Button_Action_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::NewProp_ActionSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::NewProp_Button_Action,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingListEntrySetting_Action>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::ClassParams = {
		&UGameSettingListEntrySetting_Action::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Action()
	{
		if (!Z_Registration_Info_UClass_UGameSettingListEntrySetting_Action.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingListEntrySetting_Action.OuterSingleton, Z_Construct_UClass_UGameSettingListEntrySetting_Action_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingListEntrySetting_Action.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingListEntrySetting_Action>()
	{
		return UGameSettingListEntrySetting_Action::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingListEntrySetting_Action);
	static FName NAME_UGameSettingListEntrySetting_Navigation_OnSettingAssigned = FName(TEXT("OnSettingAssigned"));
	void UGameSettingListEntrySetting_Navigation::OnSettingAssigned(FText const& ActionText)
	{
		GameSettingListEntrySetting_Navigation_eventOnSettingAssigned_Parms Parms;
		Parms.ActionText=ActionText;
		ProcessEvent(FindFunctionChecked(NAME_UGameSettingListEntrySetting_Navigation_OnSettingAssigned),&Parms);
	}
	void UGameSettingListEntrySetting_Navigation::StaticRegisterNativesUGameSettingListEntrySetting_Navigation()
	{
	}
	struct Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ActionText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::NewProp_ActionText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::NewProp_ActionText = { "ActionText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingListEntrySetting_Navigation_eventOnSettingAssigned_Parms, ActionText), METADATA_PARAMS(Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::NewProp_ActionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::NewProp_ActionText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::NewProp_ActionText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingListEntrySetting_Navigation, nullptr, "OnSettingAssigned", nullptr, nullptr, sizeof(GameSettingListEntrySetting_Navigation_eventOnSettingAssigned_Parms), Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingListEntrySetting_Navigation);
	UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_NoRegister()
	{
		return UGameSettingListEntrySetting_Navigation::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionSetting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectionSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_Navigate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Navigate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingListEntry_Setting,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSettingListEntrySetting_Navigation_OnSettingAssigned, "OnSettingAssigned" }, // 3581272386
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Settings" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// UGameSettingListEntrySetting_Navigation\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/GameSettingListEntry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "UGameSettingListEntrySetting_Navigation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::NewProp_CollectionSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::NewProp_CollectionSetting = { "CollectionSetting", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Navigation, CollectionSetting), Z_Construct_UClass_UGameSettingCollectionPage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::NewProp_CollectionSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::NewProp_CollectionSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::NewProp_Button_Navigate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingListEntrySetting_Navigation" },
		{ "Comment", "// Bound Widgets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingListEntry.h" },
		{ "ToolTip", "Bound Widgets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::NewProp_Button_Navigate = { "Button_Navigate", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingListEntrySetting_Navigation, Button_Navigate), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::NewProp_Button_Navigate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::NewProp_Button_Navigate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::NewProp_CollectionSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::NewProp_Button_Navigate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingListEntrySetting_Navigation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::ClassParams = {
		&UGameSettingListEntrySetting_Navigation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingListEntrySetting_Navigation()
	{
		if (!Z_Registration_Info_UClass_UGameSettingListEntrySetting_Navigation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingListEntrySetting_Navigation.OuterSingleton, Z_Construct_UClass_UGameSettingListEntrySetting_Navigation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingListEntrySetting_Navigation.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingListEntrySetting_Navigation>()
	{
		return UGameSettingListEntrySetting_Navigation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingListEntrySetting_Navigation);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingListEntry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingListEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingListEntryBase, UGameSettingListEntryBase::StaticClass, TEXT("UGameSettingListEntryBase"), &Z_Registration_Info_UClass_UGameSettingListEntryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingListEntryBase), 3443131815U) },
		{ Z_Construct_UClass_UGameSettingListEntry_Setting, UGameSettingListEntry_Setting::StaticClass, TEXT("UGameSettingListEntry_Setting"), &Z_Registration_Info_UClass_UGameSettingListEntry_Setting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingListEntry_Setting), 3948810934U) },
		{ Z_Construct_UClass_UGameSettingListEntrySetting_Discrete, UGameSettingListEntrySetting_Discrete::StaticClass, TEXT("UGameSettingListEntrySetting_Discrete"), &Z_Registration_Info_UClass_UGameSettingListEntrySetting_Discrete, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingListEntrySetting_Discrete), 1488177333U) },
		{ Z_Construct_UClass_UGameSettingListEntrySetting_Scalar, UGameSettingListEntrySetting_Scalar::StaticClass, TEXT("UGameSettingListEntrySetting_Scalar"), &Z_Registration_Info_UClass_UGameSettingListEntrySetting_Scalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingListEntrySetting_Scalar), 3086216054U) },
		{ Z_Construct_UClass_UGameSettingListEntrySetting_Action, UGameSettingListEntrySetting_Action::StaticClass, TEXT("UGameSettingListEntrySetting_Action"), &Z_Registration_Info_UClass_UGameSettingListEntrySetting_Action, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingListEntrySetting_Action), 2448948267U) },
		{ Z_Construct_UClass_UGameSettingListEntrySetting_Navigation, UGameSettingListEntrySetting_Navigation::StaticClass, TEXT("UGameSettingListEntrySetting_Navigation"), &Z_Registration_Info_UClass_UGameSettingListEntrySetting_Navigation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingListEntrySetting_Navigation), 1752796659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingListEntry_h_3373333786(TEXT("/Script/GameSettings"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingListEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingListEntry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
