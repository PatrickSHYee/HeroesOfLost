// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Widgets/GameSettingScreen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettingScreen() {}
// Cross Module References
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingScreen_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingScreen();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	UPackage* Z_Construct_UPackage__Script_GameSettings();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollection_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingPanel_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingRegistry_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameSettingScreen::execHaveSettingsBeenChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HaveSettingsBeenChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettingScreen::execApplyChanges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyChanges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettingScreen::execCancelChanges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelChanges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettingScreen::execGetSettingCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingDevName);
		P_GET_UBOOL_REF(Z_Param_Out_HasAnySettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameSettingCollection**)Z_Param__Result=P_THIS->GetSettingCollection(Z_Param_SettingDevName,Z_Param_Out_HasAnySettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettingScreen::execAttemptToPopNavigation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AttemptToPopNavigation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettingScreen::execOnSettingsDirtyStateChanged)
	{
		P_GET_UBOOL(Z_Param_bSettingsDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingsDirtyStateChanged_Implementation(Z_Param_bSettingsDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettingScreen::execNavigateToSettings)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_SettingDevNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateToSettings(Z_Param_Out_SettingDevNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettingScreen::execNavigateToSetting)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingDevName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateToSetting(Z_Param_SettingDevName);
		P_NATIVE_END;
	}
	static FName NAME_UGameSettingScreen_OnSettingsDirtyStateChanged = FName(TEXT("OnSettingsDirtyStateChanged"));
	void UGameSettingScreen::OnSettingsDirtyStateChanged(bool bSettingsDirty)
	{
		GameSettingScreen_eventOnSettingsDirtyStateChanged_Parms Parms;
		Parms.bSettingsDirty=bSettingsDirty ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGameSettingScreen_OnSettingsDirtyStateChanged),&Parms);
	}
	void UGameSettingScreen::StaticRegisterNativesUGameSettingScreen()
	{
		UClass* Class = UGameSettingScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyChanges", &UGameSettingScreen::execApplyChanges },
			{ "AttemptToPopNavigation", &UGameSettingScreen::execAttemptToPopNavigation },
			{ "CancelChanges", &UGameSettingScreen::execCancelChanges },
			{ "GetSettingCollection", &UGameSettingScreen::execGetSettingCollection },
			{ "HaveSettingsBeenChanged", &UGameSettingScreen::execHaveSettingsBeenChanged },
			{ "NavigateToSetting", &UGameSettingScreen::execNavigateToSetting },
			{ "NavigateToSettings", &UGameSettingScreen::execNavigateToSettings },
			{ "OnSettingsDirtyStateChanged", &UGameSettingScreen::execOnSettingsDirtyStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSettingScreen_ApplyChanges_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingScreen_ApplyChanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingScreen_ApplyChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingScreen, nullptr, "ApplyChanges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingScreen_ApplyChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_ApplyChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingScreen_ApplyChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingScreen_ApplyChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics
	{
		struct GameSettingScreen_eventAttemptToPopNavigation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameSettingScreen_eventAttemptToPopNavigation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSettingScreen_eventAttemptToPopNavigation_Parms), &Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingScreen, nullptr, "AttemptToPopNavigation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::GameSettingScreen_eventAttemptToPopNavigation_Parms), Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettingScreen_CancelChanges_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingScreen_CancelChanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingScreen_CancelChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingScreen, nullptr, "CancelChanges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingScreen_CancelChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_CancelChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingScreen_CancelChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingScreen_CancelChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics
	{
		struct GameSettingScreen_eventGetSettingCollection_Parms
		{
			FName SettingDevName;
			bool HasAnySettings;
			UGameSettingCollection* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingDevName;
		static void NewProp_HasAnySettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasAnySettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::NewProp_SettingDevName = { "SettingDevName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingScreen_eventGetSettingCollection_Parms, SettingDevName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::NewProp_HasAnySettings_SetBit(void* Obj)
	{
		((GameSettingScreen_eventGetSettingCollection_Parms*)Obj)->HasAnySettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::NewProp_HasAnySettings = { "HasAnySettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSettingScreen_eventGetSettingCollection_Parms), &Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::NewProp_HasAnySettings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingScreen_eventGetSettingCollection_Parms, ReturnValue), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::NewProp_SettingDevName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::NewProp_HasAnySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingScreen, nullptr, "GetSettingCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::GameSettingScreen_eventGetSettingCollection_Parms), Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics
	{
		struct GameSettingScreen_eventHaveSettingsBeenChanged_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameSettingScreen_eventHaveSettingsBeenChanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSettingScreen_eventHaveSettingsBeenChanged_Parms), &Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingScreen, nullptr, "HaveSettingsBeenChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::GameSettingScreen_eventHaveSettingsBeenChanged_Parms), Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics
	{
		struct GameSettingScreen_eventNavigateToSetting_Parms
		{
			FName SettingDevName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingDevName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::NewProp_SettingDevName = { "SettingDevName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingScreen_eventNavigateToSetting_Parms, SettingDevName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::NewProp_SettingDevName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingScreen, nullptr, "NavigateToSetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::GameSettingScreen_eventNavigateToSetting_Parms), Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics
	{
		struct GameSettingScreen_eventNavigateToSettings_Parms
		{
			TArray<FName> SettingDevNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingDevNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingDevNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SettingDevNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::NewProp_SettingDevNames_Inner = { "SettingDevNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::NewProp_SettingDevNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::NewProp_SettingDevNames = { "SettingDevNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettingScreen_eventNavigateToSettings_Parms, SettingDevNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::NewProp_SettingDevNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::NewProp_SettingDevNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::NewProp_SettingDevNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::NewProp_SettingDevNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingScreen, nullptr, "NavigateToSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::GameSettingScreen_eventNavigateToSettings_Parms), Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics
	{
		static void NewProp_bSettingsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSettingsDirty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::NewProp_bSettingsDirty_SetBit(void* Obj)
	{
		((GameSettingScreen_eventOnSettingsDirtyStateChanged_Parms*)Obj)->bSettingsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::NewProp_bSettingsDirty = { "bSettingsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSettingScreen_eventOnSettingsDirtyStateChanged_Parms), &Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::NewProp_bSettingsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::NewProp_bSettingsDirty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettingScreen, nullptr, "OnSettingsDirtyStateChanged", nullptr, nullptr, sizeof(GameSettingScreen_eventOnSettingsDirtyStateChanged_Parms), Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingScreen);
	UClass* Z_Construct_UClass_UGameSettingScreen_NoRegister()
	{
		return UGameSettingScreen::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_Panel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings_Panel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Registry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Registry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSettingScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSettingScreen_ApplyChanges, "ApplyChanges" }, // 1144239555
		{ &Z_Construct_UFunction_UGameSettingScreen_AttemptToPopNavigation, "AttemptToPopNavigation" }, // 3524322553
		{ &Z_Construct_UFunction_UGameSettingScreen_CancelChanges, "CancelChanges" }, // 4272359207
		{ &Z_Construct_UFunction_UGameSettingScreen_GetSettingCollection, "GetSettingCollection" }, // 3826201310
		{ &Z_Construct_UFunction_UGameSettingScreen_HaveSettingsBeenChanged, "HaveSettingsBeenChanged" }, // 422960672
		{ &Z_Construct_UFunction_UGameSettingScreen_NavigateToSetting, "NavigateToSetting" }, // 3929008070
		{ &Z_Construct_UFunction_UGameSettingScreen_NavigateToSettings, "NavigateToSettings" }, // 850258078
		{ &Z_Construct_UFunction_UGameSettingScreen_OnSettingsDirtyStateChanged, "OnSettingsDirtyStateChanged" }, // 2520545427
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingScreen_Statics::Class_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n * \n */" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/GameSettingScreen.h" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingScreen_Statics::NewProp_Settings_Panel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "GameSettingScreen" },
		{ "Comment", "// Bound Widgets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
		{ "ToolTip", "Bound Widgets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingScreen_Statics::NewProp_Settings_Panel = { "Settings_Panel", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingScreen, Settings_Panel), Z_Construct_UClass_UGameSettingPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingScreen_Statics::NewProp_Settings_Panel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingScreen_Statics::NewProp_Settings_Panel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingScreen_Statics::NewProp_Registry_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GameSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSettingScreen_Statics::NewProp_Registry = { "Registry", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingScreen, Registry), Z_Construct_UClass_UGameSettingRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameSettingScreen_Statics::NewProp_Registry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingScreen_Statics::NewProp_Registry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingScreen_Statics::NewProp_Settings_Panel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingScreen_Statics::NewProp_Registry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingScreen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingScreen_Statics::ClassParams = {
		&UGameSettingScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSettingScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingScreen_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingScreen()
	{
		if (!Z_Registration_Info_UClass_UGameSettingScreen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingScreen.OuterSingleton, Z_Construct_UClass_UGameSettingScreen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingScreen.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingScreen>()
	{
		return UGameSettingScreen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingScreen);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingScreen, UGameSettingScreen::StaticClass, TEXT("UGameSettingScreen"), &Z_Registration_Info_UClass_UGameSettingScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingScreen), 3701389816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_3720056090(TEXT("/Script/GameSettings"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
