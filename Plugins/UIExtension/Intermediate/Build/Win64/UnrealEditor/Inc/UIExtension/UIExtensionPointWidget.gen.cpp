// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Widgets/UIExtensionPointWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIExtensionPointWidget() {}
// Cross Module References
	UIEXTENSION_API UFunction* Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature();
	UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UIEXTENSION_API UFunction* Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature();
	UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase();
	UPackage* Z_Construct_UPackage__Script_UIExtension();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UIEXTENSION_API UEnum* Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch();
	UIEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionHandle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics
	{
		struct UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms
		{
			UObject* DataItem;
			TSubclassOf<UUserWidget>  ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataItem;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::NewProp_DataItem = { "DataItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms, DataItem), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::NewProp_DataItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionPointWidget, nullptr, "OnGetWidgetClassForData__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms), Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics
	{
		struct UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms
		{
			UUserWidget* Widget;
			UObject* DataItem;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_DataItem = { "DataItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms, DataItem), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_DataItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionPointWidget, nullptr, "OnConfigureWidgetForData__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms), Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UUIExtensionPointWidget::StaticRegisterNativesUUIExtensionPointWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIExtensionPointWidget);
	UClass* Z_Construct_UClass_UUIExtensionPointWidget_NoRegister()
	{
		return UUIExtensionPointWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUIExtensionPointWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionPointTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExtensionPointTagMatch_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionPointTagMatch_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExtensionPointTagMatch;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_DataClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetWidgetClassForData_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_GetWidgetClassForData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigureWidgetForData_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ConfigureWidgetForData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtensionMapping_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtensionMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIExtensionPointWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicEntryBoxBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIExtensionPointWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature, "OnConfigureWidgetForData__DelegateSignature" }, // 4055494414
		{ &Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature, "OnGetWidgetClassForData__DelegateSignature" }, // 2878962130
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIExtensionPointWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A slot that defines a location in a layout, where content can be added later\n */" },
		{ "IncludePath", "Widgets/UIExtensionPointWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A slot that defines a location in a layout, where content can be added later" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTag_MetaData[] = {
		{ "Category", "UI Extension" },
		{ "Comment", "/** The tag that defines this extension point */" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
		{ "ToolTip", "The tag that defines this extension point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTag = { "ExtensionPointTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIExtensionPointWidget, ExtensionPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTag_MetaData)) }; // 802167388
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch_MetaData[] = {
		{ "Category", "UI Extension" },
		{ "Comment", "/** How exactly does the extension need to match the extension point tag. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
		{ "ToolTip", "How exactly does the extension need to match the extension point tag." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch = { "ExtensionPointTagMatch", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIExtensionPointWidget, ExtensionPointTagMatch), Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch, METADATA_PARAMS(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch_MetaData)) }; // 2411247172
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses_Inner = { "DataClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses_MetaData[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses = { "DataClasses", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIExtensionPointWidget, DataClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_GetWidgetClassForData_MetaData[] = {
		{ "Category", "UI Extension" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_GetWidgetClassForData = { "GetWidgetClassForData", nullptr, (EPropertyFlags)0x0020080000080015, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIExtensionPointWidget, GetWidgetClassForData), Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_GetWidgetClassForData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_GetWidgetClassForData_MetaData)) }; // 2878962130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ConfigureWidgetForData_MetaData[] = {
		{ "Category", "UI Extension" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ConfigureWidgetForData = { "ConfigureWidgetForData", nullptr, (EPropertyFlags)0x0020080000080015, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIExtensionPointWidget, ConfigureWidgetForData), Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ConfigureWidgetForData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ConfigureWidgetForData_MetaData)) }; // 4055494414
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_ValueProp = { "ExtensionMapping", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_Key_KeyProp = { "ExtensionMapping_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(nullptr, 0) }; // 1793306028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping = { "ExtensionMapping", nullptr, (EPropertyFlags)0x0020088000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIExtensionPointWidget, ExtensionMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_MetaData)) }; // 1793306028
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIExtensionPointWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_GetWidgetClassForData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ConfigureWidgetForData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIExtensionPointWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIExtensionPointWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::ClassParams = {
		&UUIExtensionPointWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UUIExtensionPointWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIExtensionPointWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIExtensionPointWidget()
	{
		if (!Z_Registration_Info_UClass_UUIExtensionPointWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIExtensionPointWidget.OuterSingleton, Z_Construct_UClass_UUIExtensionPointWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIExtensionPointWidget.OuterSingleton;
	}
	template<> UIEXTENSION_API UClass* StaticClass<UUIExtensionPointWidget>()
	{
		return UUIExtensionPointWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIExtensionPointWidget);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIExtensionPointWidget, UUIExtensionPointWidget::StaticClass, TEXT("UUIExtensionPointWidget"), &Z_Registration_Info_UClass_UUIExtensionPointWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIExtensionPointWidget), 1367188262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_3449837435(TEXT("/Script/UIExtension"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
