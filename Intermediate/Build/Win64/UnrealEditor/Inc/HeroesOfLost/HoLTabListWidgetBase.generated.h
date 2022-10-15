// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHoLTabDescriptor;
class UCommonUserWidget;
#ifdef HEROESOFLOST_HoLTabListWidgetBase_generated_h
#error "HoLTabListWidgetBase.generated.h already included, missing '#pragma once' in HoLTabListWidgetBase.h"
#endif
#define HEROESOFLOST_HoLTabListWidgetBase_generated_h

#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoLTabDescriptor_Statics; \
	HEROESOFLOST_API static class UScriptStruct* StaticStruct();


template<> HEROESOFLOST_API UScriptStruct* StaticStruct<struct FHoLTabDescriptor>();

#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_SPARSE_DATA
#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_RPC_WRAPPERS \
	virtual void SetTabLabalInfo_Implementation(FHoLTabDescriptor const& TabDescriptor) {}; \
 \
	DECLARE_FUNCTION(execSetTabLabalInfo);


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetTabLabalInfo_Implementation(FHoLTabDescriptor const& TabDescriptor) {}; \
 \
	DECLARE_FUNCTION(execSetTabLabalInfo);


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_EVENT_PARMS \
	struct HoLTabButtonInterface_eventSetTabLabalInfo_Parms \
	{ \
		FHoLTabDescriptor TabDescriptor; \
	};


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_CALLBACK_WRAPPERS
#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoLTabButtonInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoLTabButtonInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoLTabButtonInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoLTabButtonInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoLTabButtonInterface(UHoLTabButtonInterface&&); \
	NO_API UHoLTabButtonInterface(const UHoLTabButtonInterface&); \
public:


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoLTabButtonInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoLTabButtonInterface(UHoLTabButtonInterface&&); \
	NO_API UHoLTabButtonInterface(const UHoLTabButtonInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoLTabButtonInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoLTabButtonInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoLTabButtonInterface)


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHoLTabButtonInterface(); \
	friend struct Z_Construct_UClass_UHoLTabButtonInterface_Statics; \
public: \
	DECLARE_CLASS(UHoLTabButtonInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HeroesOfLost"), NO_API) \
	DECLARE_SERIALIZER(UHoLTabButtonInterface)


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_GENERATED_UINTERFACE_BODY() \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_GENERATED_UINTERFACE_BODY() \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHoLTabButtonInterface() {} \
public: \
	typedef UHoLTabButtonInterface UClassType; \
	typedef IHoLTabButtonInterface ThisClass; \
	static void Execute_SetTabLabalInfo(UObject* O, FHoLTabDescriptor const& TabDescriptor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_INCLASS_IINTERFACE \
protected: \
	virtual ~IHoLTabButtonInterface() {} \
public: \
	typedef UHoLTabButtonInterface UClassType; \
	typedef IHoLTabButtonInterface ThisClass; \
	static void Execute_SetTabLabalInfo(UObject* O, FHoLTabDescriptor const& TabDescriptor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_48_PROLOG \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_EVENT_PARMS


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_SPARSE_DATA \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_RPC_WRAPPERS \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_CALLBACK_WRAPPERS \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_SPARSE_DATA \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_CALLBACK_WRAPPERS \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_50_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEROESOFLOST_API UClass* StaticClass<class UHoLTabButtonInterface>();

#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_95_DELEGATE \
struct HoLTabListWidgetBase_eventOnTabContentCreated_Parms \
{ \
	FName TabId; \
	UCommonUserWidget* TabWidget; \
}; \
static inline void FOnTabContentCreated_DelegateWrapper(const FMulticastScriptDelegate& OnTabContentCreated, FName TabId, UCommonUserWidget* TabWidget) \
{ \
	HoLTabListWidgetBase_eventOnTabContentCreated_Parms Parms; \
	Parms.TabId=TabId; \
	Parms.TabWidget=TabWidget; \
	OnTabContentCreated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_SPARSE_DATA
#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVisibleTabCount); \
	DECLARE_FUNCTION(execIsTabVisible); \
	DECLARE_FUNCTION(execIsLastTabActive); \
	DECLARE_FUNCTION(execIsFirstTabActive); \
	DECLARE_FUNCTION(execRegisterDynamicTab); \
	DECLARE_FUNCTION(execSetTabHiddenState); \
	DECLARE_FUNCTION(execGetPreregisteredTabInfo);


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVisibleTabCount); \
	DECLARE_FUNCTION(execIsTabVisible); \
	DECLARE_FUNCTION(execIsLastTabActive); \
	DECLARE_FUNCTION(execIsFirstTabActive); \
	DECLARE_FUNCTION(execRegisterDynamicTab); \
	DECLARE_FUNCTION(execSetTabHiddenState); \
	DECLARE_FUNCTION(execGetPreregisteredTabInfo);


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoLTabListWidgetBase(); \
	friend struct Z_Construct_UClass_UHoLTabListWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UHoLTabListWidgetBase, UCommonTabListWidgetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/HeroesOfLost"), NO_API) \
	DECLARE_SERIALIZER(UHoLTabListWidgetBase)


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUHoLTabListWidgetBase(); \
	friend struct Z_Construct_UClass_UHoLTabListWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UHoLTabListWidgetBase, UCommonTabListWidgetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/HeroesOfLost"), NO_API) \
	DECLARE_SERIALIZER(UHoLTabListWidgetBase)


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoLTabListWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoLTabListWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoLTabListWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoLTabListWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoLTabListWidgetBase(UHoLTabListWidgetBase&&); \
	NO_API UHoLTabListWidgetBase(const UHoLTabListWidgetBase&); \
public:


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoLTabListWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoLTabListWidgetBase(UHoLTabListWidgetBase&&); \
	NO_API UHoLTabListWidgetBase(const UHoLTabListWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoLTabListWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoLTabListWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoLTabListWidgetBase)


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_64_PROLOG
#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_SPARSE_DATA \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_RPC_WRAPPERS \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_INCLASS \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_SPARSE_DATA \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEROESOFLOST_API UClass* StaticClass<class UHoLTabListWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Source_HeroesOfLost_UI_Common_HoLTabListWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
