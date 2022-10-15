// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesOfLost/UI/Common/HoLTabListWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoLTabListWidgetBase() {}
// Cross Module References
	HEROESOFLOST_API UScriptStruct* Z_Construct_UScriptStruct_FHoLTabDescriptor();
	UPackage* Z_Construct_UPackage__Script_HeroesOfLost();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHoLTabButtonInterface_NoRegister();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHoLTabButtonInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	HEROESOFLOST_API UFunction* Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHoLTabListWidgetBase();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UHoLTabListWidgetBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTabListWidgetBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoLTabDescriptor;
class UScriptStruct* FHoLTabDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoLTabDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoLTabDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoLTabDescriptor, Z_Construct_UPackage__Script_HeroesOfLost(), TEXT("HoLTabDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_HoLTabDescriptor.OuterSingleton;
}
template<> HEROESOFLOST_API UScriptStruct* StaticStruct<FHoLTabDescriptor>()
{
	return FHoLTabDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TabText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabButtonType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TabButtonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabContentType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TabContentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedTabContentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedTabContentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n*\x09struct for the Tab Descriptor\n*/" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
		{ "ToolTip", "*      struct for the Tab Descriptor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoLTabDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabId_MetaData[] = {
		{ "Category", "HoLTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabId = { "TabId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoLTabDescriptor, TabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabText_MetaData[] = {
		{ "Category", "HoLTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabText = { "TabText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoLTabDescriptor, TabText), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_IconBrush_MetaData[] = {
		{ "Category", "HoLTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_IconBrush = { "IconBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoLTabDescriptor, IconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_IconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_IconBrush_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_bHidden_MetaData[] = {
		{ "Category", "HoLTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((FHoLTabDescriptor*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoLTabDescriptor), &Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_bHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabButtonType_MetaData[] = {
		{ "Category", "HoLTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabButtonType = { "TabButtonType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoLTabDescriptor, TabButtonType), Z_Construct_UClass_UCommonButtonBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabButtonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabButtonType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabContentType_MetaData[] = {
		{ "Category", "HoLTabDescriptor" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabContentType = { "TabContentType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoLTabDescriptor, TabContentType), Z_Construct_UClass_UCommonUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabContentType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_CreatedTabContentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_CreatedTabContentWidget = { "CreatedTabContentWidget", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoLTabDescriptor, CreatedTabContentWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_CreatedTabContentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_CreatedTabContentWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_IconBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_bHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabButtonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_TabContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewProp_CreatedTabContentWidget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
		nullptr,
		&NewStructOps,
		"HoLTabDescriptor",
		sizeof(FHoLTabDescriptor),
		alignof(FHoLTabDescriptor),
		Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoLTabDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_HoLTabDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoLTabDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoLTabDescriptor.InnerSingleton;
	}
	DEFINE_FUNCTION(IHoLTabButtonInterface::execSetTabLabalInfo)
	{
		P_GET_STRUCT_REF(FHoLTabDescriptor,Z_Param_Out_TabDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabLabalInfo_Implementation(Z_Param_Out_TabDescriptor);
		P_NATIVE_END;
	}
	void IHoLTabButtonInterface::SetTabLabalInfo(FHoLTabDescriptor const& TabDescriptor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTabLabalInfo instead.");
	}
	void UHoLTabButtonInterface::StaticRegisterNativesUHoLTabButtonInterface()
	{
		UClass* Class = UHoLTabButtonInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTabLabalInfo", &IHoLTabButtonInterface::execSetTabLabalInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabDescriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabDescriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::NewProp_TabDescriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::NewProp_TabDescriptor = { "TabDescriptor", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoLTabButtonInterface_eventSetTabLabalInfo_Parms, TabDescriptor), Z_Construct_UScriptStruct_FHoLTabDescriptor, METADATA_PARAMS(Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::NewProp_TabDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::NewProp_TabDescriptor_MetaData)) }; // 2220999287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::NewProp_TabDescriptor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab Button" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoLTabButtonInterface, nullptr, "SetTabLabalInfo", nullptr, nullptr, sizeof(HoLTabButtonInterface_eventSetTabLabalInfo_Parms), Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoLTabButtonInterface);
	UClass* Z_Construct_UClass_UHoLTabButtonInterface_NoRegister()
	{
		return UHoLTabButtonInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHoLTabButtonInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoLTabButtonInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoLTabButtonInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoLTabButtonInterface_SetTabLabalInfo, "SetTabLabalInfo" }, // 2285314638
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoLTabButtonInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoLTabButtonInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHoLTabButtonInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoLTabButtonInterface_Statics::ClassParams = {
		&UHoLTabButtonInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHoLTabButtonInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoLTabButtonInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoLTabButtonInterface()
	{
		if (!Z_Registration_Info_UClass_UHoLTabButtonInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoLTabButtonInterface.OuterSingleton, Z_Construct_UClass_UHoLTabButtonInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoLTabButtonInterface.OuterSingleton;
	}
	template<> HEROESOFLOST_API UClass* StaticClass<UHoLTabButtonInterface>()
	{
		return UHoLTabButtonInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoLTabButtonInterface);
	static FName NAME_UHoLTabButtonInterface_SetTabLabalInfo = FName(TEXT("SetTabLabalInfo"));
	void IHoLTabButtonInterface::Execute_SetTabLabalInfo(UObject* O, FHoLTabDescriptor const& TabDescriptor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHoLTabButtonInterface::StaticClass()));
		HoLTabButtonInterface_eventSetTabLabalInfo_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHoLTabButtonInterface_SetTabLabalInfo);
		if (Func)
		{
			Parms.TabDescriptor=TabDescriptor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHoLTabButtonInterface*)(O->GetNativeInterfaceAddress(UHoLTabButtonInterface::StaticClass())))
		{
			I->SetTabLabalInfo_Implementation(TabDescriptor);
		}
	}
	struct Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics
	{
		struct HoLTabListWidgetBase_eventOnTabContentCreated_Parms
		{
			FName TabId;
			UCommonUserWidget* TabWidget;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TabWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabId = { "TabId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoLTabListWidgetBase_eventOnTabContentCreated_Parms, TabId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabWidget = { "TabWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoLTabListWidgetBase_eventOnTabContentCreated_Parms, TabWidget), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::NewProp_TabWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegate broadcast when a new tab is created. Allows hook ups after creation.\n" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
		{ "ToolTip", "Delegate broadcast when a new tab is created. Allows hook ups after creation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoLTabListWidgetBase, nullptr, "OnTabContentCreated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::HoLTabListWidgetBase_eventOnTabContentCreated_Parms), Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHoLTabListWidgetBase::execGetVisibleTabCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVisibleTabCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoLTabListWidgetBase::execIsTabVisible)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTabVisible(Z_Param_TabId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoLTabListWidgetBase::execIsLastTabActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLastTabActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoLTabListWidgetBase::execIsFirstTabActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFirstTabActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoLTabListWidgetBase::execRegisterDynamicTab)
	{
		P_GET_STRUCT_REF(FHoLTabDescriptor,Z_Param_Out_TabDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterDynamicTab(Z_Param_Out_TabDescriptor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoLTabListWidgetBase::execSetTabHiddenState)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameId);
		P_GET_UBOOL(Z_Param_bHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTabHiddenState(Z_Param_TabNameId,Z_Param_bHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoLTabListWidgetBase::execGetPreregisteredTabInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabNameId);
		P_GET_STRUCT_REF(FHoLTabDescriptor,Z_Param_Out_OutTabInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPreregisteredTabInfo(Z_Param_TabNameId,Z_Param_Out_OutTabInfo);
		P_NATIVE_END;
	}
	void UHoLTabListWidgetBase::StaticRegisterNativesUHoLTabListWidgetBase()
	{
		UClass* Class = UHoLTabListWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPreregisteredTabInfo", &UHoLTabListWidgetBase::execGetPreregisteredTabInfo },
			{ "GetVisibleTabCount", &UHoLTabListWidgetBase::execGetVisibleTabCount },
			{ "IsFirstTabActive", &UHoLTabListWidgetBase::execIsFirstTabActive },
			{ "IsLastTabActive", &UHoLTabListWidgetBase::execIsLastTabActive },
			{ "IsTabVisible", &UHoLTabListWidgetBase::execIsTabVisible },
			{ "RegisterDynamicTab", &UHoLTabListWidgetBase::execRegisterDynamicTab },
			{ "SetTabHiddenState", &UHoLTabListWidgetBase::execSetTabHiddenState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics
	{
		struct HoLTabListWidgetBase_eventGetPreregisteredTabInfo_Parms
		{
			FName TabNameId;
			FHoLTabDescriptor OutTabInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabNameId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTabInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_TabNameId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_TabNameId = { "TabNameId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoLTabListWidgetBase_eventGetPreregisteredTabInfo_Parms, TabNameId), METADATA_PARAMS(Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_TabNameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_TabNameId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_OutTabInfo = { "OutTabInfo", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoLTabListWidgetBase_eventGetPreregisteredTabInfo_Parms, OutTabInfo), Z_Construct_UScriptStruct_FHoLTabDescriptor, METADATA_PARAMS(nullptr, 0) }; // 2220999287
	void Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoLTabListWidgetBase_eventGetPreregisteredTabInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoLTabListWidgetBase_eventGetPreregisteredTabInfo_Parms), &Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_TabNameId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_OutTabInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoLTabListWidgetBase, nullptr, "GetPreregisteredTabInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::HoLTabListWidgetBase_eventGetPreregisteredTabInfo_Parms), Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics
	{
		struct HoLTabListWidgetBase_eventGetVisibleTabCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoLTabListWidgetBase_eventGetVisibleTabCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoLTabListWidgetBase, nullptr, "GetVisibleTabCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::HoLTabListWidgetBase_eventGetVisibleTabCount_Parms), Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics
	{
		struct HoLTabListWidgetBase_eventIsFirstTabActive_Parms
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
	void Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoLTabListWidgetBase_eventIsFirstTabActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoLTabListWidgetBase_eventIsFirstTabActive_Parms), &Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoLTabListWidgetBase, nullptr, "IsFirstTabActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::HoLTabListWidgetBase_eventIsFirstTabActive_Parms), Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics
	{
		struct HoLTabListWidgetBase_eventIsLastTabActive_Parms
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
	void Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoLTabListWidgetBase_eventIsLastTabActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoLTabListWidgetBase_eventIsLastTabActive_Parms), &Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoLTabListWidgetBase, nullptr, "IsLastTabActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::HoLTabListWidgetBase_eventIsLastTabActive_Parms), Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics
	{
		struct HoLTabListWidgetBase_eventIsTabVisible_Parms
		{
			FName TabId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::NewProp_TabId = { "TabId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoLTabListWidgetBase_eventIsTabVisible_Parms, TabId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoLTabListWidgetBase_eventIsTabVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoLTabListWidgetBase_eventIsTabVisible_Parms), &Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::NewProp_TabId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoLTabListWidgetBase, nullptr, "IsTabVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::HoLTabListWidgetBase_eventIsTabVisible_Parms), Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics
	{
		struct HoLTabListWidgetBase_eventRegisterDynamicTab_Parms
		{
			FHoLTabDescriptor TabDescriptor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabDescriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabDescriptor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_TabDescriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_TabDescriptor = { "TabDescriptor", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoLTabListWidgetBase_eventRegisterDynamicTab_Parms, TabDescriptor), Z_Construct_UScriptStruct_FHoLTabDescriptor, METADATA_PARAMS(Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_TabDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_TabDescriptor_MetaData)) }; // 2220999287
	void Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoLTabListWidgetBase_eventRegisterDynamicTab_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoLTabListWidgetBase_eventRegisterDynamicTab_Parms), &Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_TabDescriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoLTabListWidgetBase, nullptr, "RegisterDynamicTab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::HoLTabListWidgetBase_eventRegisterDynamicTab_Parms), Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics
	{
		struct HoLTabListWidgetBase_eventSetTabHiddenState_Parms
		{
			FName TabNameId;
			bool bHidden;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabNameId;
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::NewProp_TabNameId = { "TabNameId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoLTabListWidgetBase_eventSetTabHiddenState_Parms, TabNameId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((HoLTabListWidgetBase_eventSetTabHiddenState_Parms*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoLTabListWidgetBase_eventSetTabHiddenState_Parms), &Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::NewProp_TabNameId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::NewProp_bHidden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tab List" },
		{ "Comment", "// Toggles whether or not a specified tab is hidden, can only be called before the switcher is associated\n" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
		{ "ToolTip", "Toggles whether or not a specified tab is hidden, can only be called before the switcher is associated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoLTabListWidgetBase, nullptr, "SetTabHiddenState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::HoLTabListWidgetBase_eventSetTabHiddenState_Parms), Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoLTabListWidgetBase);
	UClass* Z_Construct_UClass_UHoLTabListWidgetBase_NoRegister()
	{
		return UHoLTabListWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UHoLTabListWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTabContentCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTabContentCreated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreregisteredTabInfoArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreregisteredTabInfoArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreregisteredTabInfoArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoLTabListWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonTabListWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoLTabListWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoLTabListWidgetBase_GetPreregisteredTabInfo, "GetPreregisteredTabInfo" }, // 2760523528
		{ &Z_Construct_UFunction_UHoLTabListWidgetBase_GetVisibleTabCount, "GetVisibleTabCount" }, // 3341182118
		{ &Z_Construct_UFunction_UHoLTabListWidgetBase_IsFirstTabActive, "IsFirstTabActive" }, // 2068612949
		{ &Z_Construct_UFunction_UHoLTabListWidgetBase_IsLastTabActive, "IsLastTabActive" }, // 574548342
		{ &Z_Construct_UFunction_UHoLTabListWidgetBase_IsTabVisible, "IsTabVisible" }, // 3210586666
		{ &Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature, "OnTabContentCreated__DelegateSignature" }, // 2107244057
		{ &Z_Construct_UFunction_UHoLTabListWidgetBase_RegisterDynamicTab, "RegisterDynamicTab" }, // 2597362465
		{ &Z_Construct_UFunction_UHoLTabListWidgetBase_SetTabHiddenState, "SetTabHiddenState" }, // 1888018181
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoLTabListWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/Common/HoLTabListWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_OnTabContentCreated_MetaData[] = {
		{ "Category", "Tab List" },
		{ "Comment", "// Broadcasts when a new tab is created.\n" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
		{ "ToolTip", "Broadcasts when a new tab is created." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_OnTabContentCreated = { "OnTabContentCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoLTabListWidgetBase, OnTabContentCreated), Z_Construct_UDelegateFunction_UHoLTabListWidgetBase_OnTabContentCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_OnTabContentCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_OnTabContentCreated_MetaData)) }; // 2107244057
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray_Inner = { "PreregisteredTabInfoArray", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoLTabDescriptor, METADATA_PARAMS(nullptr, 0) }; // 2220999287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray_MetaData[] = {
		{ "Category", "HoLTabListWidgetBase" },
		{ "ModuleRelativePath", "UI/Common/HoLTabListWidgetBase.h" },
		{ "TitleProperty", "TabId" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray = { "PreregisteredTabInfoArray", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoLTabListWidgetBase, PreregisteredTabInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray_MetaData)) }; // 2220999287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoLTabListWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_OnTabContentCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoLTabListWidgetBase_Statics::NewProp_PreregisteredTabInfoArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoLTabListWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoLTabListWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoLTabListWidgetBase_Statics::ClassParams = {
		&UHoLTabListWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoLTabListWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoLTabListWidgetBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHoLTabListWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoLTabListWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoLTabListWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UHoLTabListWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoLTabListWidgetBase.OuterSingleton, Z_Construct_UClass_UHoLTabListWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoLTabListWidgetBase.OuterSingleton;
	}
	template<> HEROESOFLOST_API UClass* StaticClass<UHoLTabListWidgetBase>()
	{
		return UHoLTabListWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoLTabListWidgetBase);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_Statics::ScriptStructInfo[] = {
		{ FHoLTabDescriptor::StaticStruct, Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics::NewStructOps, TEXT("HoLTabDescriptor"), &Z_Registration_Info_UScriptStruct_HoLTabDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoLTabDescriptor), 2220999287U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoLTabButtonInterface, UHoLTabButtonInterface::StaticClass, TEXT("UHoLTabButtonInterface"), &Z_Registration_Info_UClass_UHoLTabButtonInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoLTabButtonInterface), 2372631742U) },
		{ Z_Construct_UClass_UHoLTabListWidgetBase, UHoLTabListWidgetBase::StaticClass, TEXT("UHoLTabListWidgetBase"), &Z_Registration_Info_UClass_UHoLTabListWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoLTabListWidgetBase), 2931218094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_72570280(TEXT("/Script/HeroesOfLost"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
