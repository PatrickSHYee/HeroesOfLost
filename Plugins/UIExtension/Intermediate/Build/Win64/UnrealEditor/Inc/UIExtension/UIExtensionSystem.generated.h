// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUIExtensionAction : uint8;
struct FUIExtensionRequest;
struct FGameplayTag;
class UObject;
struct FUIExtensionHandle;
class UUserWidget;
enum class EUIExtensionPointMatch : uint8;
struct FUIExtensionPointHandle;
#ifdef UIEXTENSION_UIExtensionSystem_generated_h
#error "UIExtensionSystem.generated.h already included, missing '#pragma once' in UIExtensionSystem.h"
#endif
#define UIEXTENSION_UIExtensionSystem_generated_h

#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UIEXTENSION_API UScriptStruct* StaticStruct<struct FUIExtensionPointHandle>();

#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIExtensionHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UIEXTENSION_API UScriptStruct* StaticStruct<struct FUIExtensionHandle>();

#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIExtensionRequest_Statics; \
	UIEXTENSION_API static class UScriptStruct* StaticStruct();


template<> UIEXTENSION_API UScriptStruct* StaticStruct<struct FUIExtensionRequest>();

#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_191_DELEGATE \
struct _Script_UIExtension_eventExtendExtensionPointDynamicDelegate_Parms \
{ \
	EUIExtensionAction Action; \
	FUIExtensionRequest ExtensionRequest; \
}; \
static inline void FExtendExtensionPointDynamicDelegate_DelegateWrapper(const FScriptDelegate& ExtendExtensionPointDynamicDelegate, EUIExtensionAction Action, FUIExtensionRequest const& ExtensionRequest) \
{ \
	_Script_UIExtension_eventExtendExtensionPointDynamicDelegate_Parms Parms; \
	Parms.Action=Action; \
	Parms.ExtensionRequest=ExtensionRequest; \
	ExtendExtensionPointDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsDataForContext); \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsData); \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsWidgetForContext); \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsWidget); \
	DECLARE_FUNCTION(execK2_RegisterExtensionPoint); \
	DECLARE_FUNCTION(execUnregisterExtensionPoint); \
	DECLARE_FUNCTION(execUnregisterExtension);


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsDataForContext); \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsData); \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsWidgetForContext); \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsWidget); \
	DECLARE_FUNCTION(execK2_RegisterExtensionPoint); \
	DECLARE_FUNCTION(execUnregisterExtensionPoint); \
	DECLARE_FUNCTION(execUnregisterExtension);


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionSubsystem(); \
	friend struct Z_Construct_UClass_UUIExtensionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionSubsystem)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_INCLASS \
private: \
	static void StaticRegisterNativesUUIExtensionSubsystem(); \
	friend struct Z_Construct_UClass_UUIExtensionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionSubsystem)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIExtensionSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIExtensionSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIExtensionSubsystem(UUIExtensionSubsystem&&); \
	NO_API UUIExtensionSubsystem(const UUIExtensionSubsystem&); \
public:


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIExtensionSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIExtensionSubsystem(UUIExtensionSubsystem&&); \
	NO_API UUIExtensionSubsystem(const UUIExtensionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIExtensionSubsystem)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_196_PROLOG
#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_INCLASS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIEXTENSION_API UClass* StaticClass<class UUIExtensionSubsystem>();

#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execUnregister);


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execUnregister);


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionHandleFunctions(); \
	friend struct Z_Construct_UClass_UUIExtensionHandleFunctions_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionHandleFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionHandleFunctions)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_INCLASS \
private: \
	static void StaticRegisterNativesUUIExtensionHandleFunctions(); \
	friend struct Z_Construct_UClass_UUIExtensionHandleFunctions_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionHandleFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionHandleFunctions)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIExtensionHandleFunctions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIExtensionHandleFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionHandleFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionHandleFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIExtensionHandleFunctions(UUIExtensionHandleFunctions&&); \
	NO_API UUIExtensionHandleFunctions(const UUIExtensionHandleFunctions&); \
public:


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIExtensionHandleFunctions(UUIExtensionHandleFunctions&&); \
	NO_API UUIExtensionHandleFunctions(const UUIExtensionHandleFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionHandleFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionHandleFunctions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIExtensionHandleFunctions)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_260_PROLOG
#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_INCLASS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIEXTENSION_API UClass* StaticClass<class UUIExtensionHandleFunctions>();

#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execUnregister);


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execUnregister);


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionPointHandleFunctions(); \
	friend struct Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionPointHandleFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionPointHandleFunctions)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_INCLASS \
private: \
	static void StaticRegisterNativesUUIExtensionPointHandleFunctions(); \
	friend struct Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionPointHandleFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionPointHandleFunctions)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIExtensionPointHandleFunctions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIExtensionPointHandleFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionPointHandleFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionPointHandleFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIExtensionPointHandleFunctions(UUIExtensionPointHandleFunctions&&); \
	NO_API UUIExtensionPointHandleFunctions(const UUIExtensionPointHandleFunctions&); \
public:


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIExtensionPointHandleFunctions(UUIExtensionPointHandleFunctions&&); \
	NO_API UUIExtensionPointHandleFunctions(const UUIExtensionPointHandleFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionPointHandleFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionPointHandleFunctions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIExtensionPointHandleFunctions)


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_275_PROLOG
#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_INCLASS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_278_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIEXTENSION_API UClass* StaticClass<class UUIExtensionPointHandleFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Plugins_UIExtension_Source_Public_UIExtensionSystem_h


#define FOREACH_ENUM_EUIEXTENSIONPOINTMATCH(op) \
	op(EUIExtensionPointMatch::ExactMatch) \
	op(EUIExtensionPointMatch::PartialMatch) 

enum class EUIExtensionPointMatch : uint8;
template<> UIEXTENSION_API UEnum* StaticEnum<EUIExtensionPointMatch>();

#define FOREACH_ENUM_EUIEXTENSIONACTION(op) \
	op(EUIExtensionAction::Added) \
	op(EUIExtensionAction::Removed) 

enum class EUIExtensionAction : uint8;
template<> UIEXTENSION_API UEnum* StaticEnum<EUIExtensionAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
