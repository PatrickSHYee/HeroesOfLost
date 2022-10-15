// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesOfLost/InputConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputConfig() {}
// Cross Module References
	HEROESOFLOST_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedInputAction();
	UPackage* Z_Construct_UPackage__Script_HeroesOfLost();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UInputConfig_NoRegister();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UInputConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaggedInputAction;
class UScriptStruct* FTaggedInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaggedInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaggedInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaggedInputAction, Z_Construct_UPackage__Script_HeroesOfLost(), TEXT("TaggedInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_TaggedInputAction.OuterSingleton;
}
template<> HEROESOFLOST_API UScriptStruct* StaticStruct<FTaggedInputAction>()
{
	return FTaggedInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTaggedInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""FTaggedInputAction - Struct used to map an input action to a gameplay input tag.\n */// We need to expose the struct to Blueprint as a type\n" },
		{ "ModuleRelativePath", "InputConfig.h" },
		{ "ToolTip", "FTaggedInputAction - Struct used to map an input action to a gameplay input tag.\n// We need to expose the struct to Blueprint as a type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaggedInputAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "TaggedInputAction" },
		{ "ModuleRelativePath", "InputConfig.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaggedInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewProp_InputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "TaggedInputAction" },
		{ "ModuleRelativePath", "InputConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaggedInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewProp_InputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewProp_InputTag_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaggedInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewProp_InputTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaggedInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
		nullptr,
		&NewStructOps,
		"TaggedInputAction",
		sizeof(FTaggedInputAction),
		alignof(FTaggedInputAction),
		Z_Construct_UScriptStruct_FTaggedInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedInputAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedInputAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedInputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaggedInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_TaggedInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaggedInputAction.InnerSingleton, Z_Construct_UScriptStruct_FTaggedInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TaggedInputAction.InnerSingleton;
	}
	void UInputConfig::StaticRegisterNativesUInputConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputConfig);
	UClass* Z_Construct_UClass_UInputConfig_NoRegister()
	{
		return UInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaggedInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaggedInputActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*\x09In this object, we store the input action and the gameplay tag in an Array.\n*/" },
		{ "IncludePath", "InputConfig.h" },
		{ "ModuleRelativePath", "InputConfig.h" },
		{ "ToolTip", "*      In this object, we store the input action and the gameplay tag in an Array." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputConfig_Statics::NewProp_TaggedInputActions_Inner = { "TaggedInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTaggedInputAction, METADATA_PARAMS(nullptr, 0) }; // 3203416760
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputConfig_Statics::NewProp_TaggedInputActions_MetaData[] = {
		{ "Category", "InputConfig" },
		{ "Comment", "// List of input actions used by the ower. These input actions are mapped to a gameplay tag and must be manually bound.\n" },
		{ "ModuleRelativePath", "InputConfig.h" },
		{ "TitleProperty", "InputAction" },
		{ "ToolTip", "List of input actions used by the ower. These input actions are mapped to a gameplay tag and must be manually bound." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputConfig_Statics::NewProp_TaggedInputActions = { "TaggedInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputConfig, TaggedInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputConfig_Statics::NewProp_TaggedInputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputConfig_Statics::NewProp_TaggedInputActions_MetaData)) }; // 3203416760
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputConfig_Statics::NewProp_TaggedInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputConfig_Statics::NewProp_TaggedInputActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputConfig_Statics::ClassParams = {
		&UInputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputConfig()
	{
		if (!Z_Registration_Info_UClass_UInputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputConfig.OuterSingleton, Z_Construct_UClass_UInputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputConfig.OuterSingleton;
	}
	template<> HEROESOFLOST_API UClass* StaticClass<UInputConfig>()
	{
		return UInputConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputConfig);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_InputConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_InputConfig_h_Statics::ScriptStructInfo[] = {
		{ FTaggedInputAction::StaticStruct, Z_Construct_UScriptStruct_FTaggedInputAction_Statics::NewStructOps, TEXT("TaggedInputAction"), &Z_Registration_Info_UScriptStruct_TaggedInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaggedInputAction), 3203416760U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_InputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputConfig, UInputConfig::StaticClass, TEXT("UInputConfig"), &Z_Registration_Info_UClass_UInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputConfig), 3691702227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_InputConfig_h_4193949582(TEXT("/Script/HeroesOfLost"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_InputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_InputConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_InputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_InputConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
