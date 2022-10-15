// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class UObject;
#ifdef UIEXTENSION_UIExtensionPointWidget_generated_h
#error "UIExtensionPointWidget.generated.h already included, missing '#pragma once' in UIExtensionPointWidget.h"
#endif
#define UIEXTENSION_UIExtensionPointWidget_generated_h

#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_26_DELEGATE \
struct UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms \
{ \
	UObject* DataItem; \
	TSubclassOf<UUserWidget>  ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline TSubclassOf<UUserWidget>  FOnGetWidgetClassForData_DelegateWrapper(const FScriptDelegate& OnGetWidgetClassForData, UObject* DataItem) \
{ \
	UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms Parms; \
	Parms.DataItem=DataItem; \
	OnGetWidgetClassForData.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_27_DELEGATE \
struct UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms \
{ \
	UUserWidget* Widget; \
	UObject* DataItem; \
}; \
static inline void FOnConfigureWidgetForData_DelegateWrapper(const FScriptDelegate& OnConfigureWidgetForData, UUserWidget* Widget, UObject* DataItem) \
{ \
	UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms Parms; \
	Parms.Widget=Widget; \
	Parms.DataItem=DataItem; \
	OnConfigureWidgetForData.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_RPC_WRAPPERS
#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionPointWidget(); \
	friend struct Z_Construct_UClass_UUIExtensionPointWidget_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionPointWidget, UDynamicEntryBoxBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionPointWidget)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUUIExtensionPointWidget(); \
	friend struct Z_Construct_UClass_UUIExtensionPointWidget_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionPointWidget, UDynamicEntryBoxBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionPointWidget)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIExtensionPointWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIExtensionPointWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionPointWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionPointWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIExtensionPointWidget(UUIExtensionPointWidget&&); \
	NO_API UUIExtensionPointWidget(const UUIExtensionPointWidget&); \
public:


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIExtensionPointWidget(UUIExtensionPointWidget&&); \
	NO_API UUIExtensionPointWidget(const UUIExtensionPointWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionPointWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionPointWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIExtensionPointWidget)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_19_PROLOG
#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_INCLASS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIEXTENSION_API UClass* StaticClass<class UUIExtensionPointWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
