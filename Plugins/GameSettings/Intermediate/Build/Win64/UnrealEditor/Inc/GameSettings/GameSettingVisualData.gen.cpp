// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Widgets/GameSettingVisualData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettingVisualData() {}
// Cross Module References
	GAMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameSettingClassExtensions();
	UPackage* Z_Construct_UPackage__Script_GameSettings();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingDetailExtension_NoRegister();
	GAMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameSettingNameExtensions();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingVisualData_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingVisualData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingListEntryBase_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSetting_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameSettingClassExtensions;
class UScriptStruct* FGameSettingClassExtensions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameSettingClassExtensions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameSettingClassExtensions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameSettingClassExtensions, Z_Construct_UPackage__Script_GameSettings(), TEXT("GameSettingClassExtensions"));
	}
	return Z_Registration_Info_UScriptStruct_GameSettingClassExtensions.OuterSingleton;
}
template<> GAMESETTINGS_API UScriptStruct* StaticStruct<FGameSettingClassExtensions>()
{
	return FGameSettingClassExtensions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Extensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingVisualData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameSettingClassExtensions>();
	}
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameSettingDetailExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::NewProp_Extensions_MetaData[] = {
		{ "Category", "Extensions" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingVisualData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameSettingClassExtensions, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::NewProp_Extensions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::NewProp_Extensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::NewProp_Extensions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
		nullptr,
		&NewStructOps,
		"GameSettingClassExtensions",
		sizeof(FGameSettingClassExtensions),
		alignof(FGameSettingClassExtensions),
		Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameSettingClassExtensions()
	{
		if (!Z_Registration_Info_UScriptStruct_GameSettingClassExtensions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameSettingClassExtensions.InnerSingleton, Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameSettingClassExtensions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameSettingNameExtensions;
class UScriptStruct* FGameSettingNameExtensions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameSettingNameExtensions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameSettingNameExtensions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameSettingNameExtensions, Z_Construct_UPackage__Script_GameSettings(), TEXT("GameSettingNameExtensions"));
	}
	return Z_Registration_Info_UScriptStruct_GameSettingNameExtensions.OuterSingleton;
}
template<> GAMESETTINGS_API UScriptStruct* StaticStruct<FGameSettingNameExtensions>()
{
	return FGameSettingNameExtensions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeClassDefaultExtensions_MetaData[];
#endif
		static void NewProp_bIncludeClassDefaultExtensions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeClassDefaultExtensions;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Extensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingVisualData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameSettingNameExtensions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_bIncludeClassDefaultExtensions_MetaData[] = {
		{ "Category", "Extensions" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingVisualData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_bIncludeClassDefaultExtensions_SetBit(void* Obj)
	{
		((FGameSettingNameExtensions*)Obj)->bIncludeClassDefaultExtensions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_bIncludeClassDefaultExtensions = { "bIncludeClassDefaultExtensions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameSettingNameExtensions), &Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_bIncludeClassDefaultExtensions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_bIncludeClassDefaultExtensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_bIncludeClassDefaultExtensions_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameSettingDetailExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_Extensions_MetaData[] = {
		{ "Category", "Extensions" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingVisualData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameSettingNameExtensions, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_Extensions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_bIncludeClassDefaultExtensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_Extensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewProp_Extensions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
		nullptr,
		&NewStructOps,
		"GameSettingNameExtensions",
		sizeof(FGameSettingNameExtensions),
		alignof(FGameSettingNameExtensions),
		Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameSettingNameExtensions()
	{
		if (!Z_Registration_Info_UScriptStruct_GameSettingNameExtensions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameSettingNameExtensions.InnerSingleton, Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameSettingNameExtensions.InnerSingleton;
	}
	void UGameSettingVisualData::StaticRegisterNativesUGameSettingVisualData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettingVisualData);
	UClass* Z_Construct_UClass_UGameSettingVisualData_NoRegister()
	{
		return UGameSettingVisualData::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettingVisualData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EntryWidgetForClass_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EntryWidgetForClass_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetForClass_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EntryWidgetForClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EntryWidgetForName_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EntryWidgetForName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetForName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EntryWidgetForName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionsForClasses_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExtensionsForClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionsForClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtensionsForClasses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionsForName_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExtensionsForName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionsForName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtensionsForName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettingVisualData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingVisualData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/GameSettingVisualData.h" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingVisualData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForClass_ValueProp = { "EntryWidgetForClass", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UGameSettingListEntryBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForClass_Key_KeyProp = { "EntryWidgetForClass_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameSetting_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "ListEntries" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingVisualData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForClass = { "EntryWidgetForClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingVisualData, EntryWidgetForClass), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForName_ValueProp = { "EntryWidgetForName", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UGameSettingListEntryBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForName_Key_KeyProp = { "EntryWidgetForName_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForName_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "ListEntries" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingVisualData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForName = { "EntryWidgetForName", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingVisualData, EntryWidgetForName), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForClasses_ValueProp = { "ExtensionsForClasses", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGameSettingClassExtensions, METADATA_PARAMS(nullptr, 0) }; // 159029924
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForClasses_Key_KeyProp = { "ExtensionsForClasses_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameSetting_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForClasses_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Extensions" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingVisualData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForClasses = { "ExtensionsForClasses", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingVisualData, ExtensionsForClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForClasses_MetaData)) }; // 159029924
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForName_ValueProp = { "ExtensionsForName", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGameSettingNameExtensions, METADATA_PARAMS(nullptr, 0) }; // 2692937140
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForName_Key_KeyProp = { "ExtensionsForName_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForName_MetaData[] = {
		{ "Category", "Extensions" },
		{ "ModuleRelativePath", "Public/Widgets/GameSettingVisualData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForName = { "ExtensionsForName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettingVisualData, ExtensionsForName), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForName_MetaData)) }; // 2692937140
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettingVisualData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForClass_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForClass_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_EntryWidgetForName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettingVisualData_Statics::NewProp_ExtensionsForName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettingVisualData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingVisualData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingVisualData_Statics::ClassParams = {
		&UGameSettingVisualData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameSettingVisualData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingVisualData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettingVisualData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingVisualData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettingVisualData()
	{
		if (!Z_Registration_Info_UClass_UGameSettingVisualData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingVisualData.OuterSingleton, Z_Construct_UClass_UGameSettingVisualData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettingVisualData.OuterSingleton;
	}
	template<> GAMESETTINGS_API UClass* StaticClass<UGameSettingVisualData>()
	{
		return UGameSettingVisualData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingVisualData);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingVisualData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingVisualData_h_Statics::ScriptStructInfo[] = {
		{ FGameSettingClassExtensions::StaticStruct, Z_Construct_UScriptStruct_FGameSettingClassExtensions_Statics::NewStructOps, TEXT("GameSettingClassExtensions"), &Z_Registration_Info_UScriptStruct_GameSettingClassExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameSettingClassExtensions), 159029924U) },
		{ FGameSettingNameExtensions::StaticStruct, Z_Construct_UScriptStruct_FGameSettingNameExtensions_Statics::NewStructOps, TEXT("GameSettingNameExtensions"), &Z_Registration_Info_UScriptStruct_GameSettingNameExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameSettingNameExtensions), 2692937140U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingVisualData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingVisualData, UGameSettingVisualData::StaticClass, TEXT("UGameSettingVisualData"), &Z_Registration_Info_UClass_UGameSettingVisualData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingVisualData), 1607428038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingVisualData_h_3407559715(TEXT("/Script/GameSettings"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingVisualData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingVisualData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingVisualData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingVisualData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
