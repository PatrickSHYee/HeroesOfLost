// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ULocalPlayer;
class UCommonActivatableWidget;
struct FGameplayTag;
class UUserWidget;
enum class ECommonInputType : uint8;
#ifdef COMMONGAME_CommonUIExtensions_generated_h
#error "CommonUIExtensions.generated.h already included, missing '#pragma once' in CommonUIExtensions.h"
#endif
#define COMMONGAME_CommonUIExtensions_generated_h

#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResumeInputForPlayer); \
	DECLARE_FUNCTION(execSuspendInputForPlayer); \
	DECLARE_FUNCTION(execGetLocalPlayerFromController); \
	DECLARE_FUNCTION(execPopContentFromLayer); \
	DECLARE_FUNCTION(execPushStreamedContentToLayer_ForPlayer); \
	DECLARE_FUNCTION(execPushContentToLayer_ForPlayer); \
	DECLARE_FUNCTION(execIsOwningPlayerUsingGamepad); \
	DECLARE_FUNCTION(execIsOwningPlayerUsingTouch); \
	DECLARE_FUNCTION(execGetOwningPlayerInputType);


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResumeInputForPlayer); \
	DECLARE_FUNCTION(execSuspendInputForPlayer); \
	DECLARE_FUNCTION(execGetLocalPlayerFromController); \
	DECLARE_FUNCTION(execPopContentFromLayer); \
	DECLARE_FUNCTION(execPushStreamedContentToLayer_ForPlayer); \
	DECLARE_FUNCTION(execPushContentToLayer_ForPlayer); \
	DECLARE_FUNCTION(execIsOwningPlayerUsingGamepad); \
	DECLARE_FUNCTION(execIsOwningPlayerUsingTouch); \
	DECLARE_FUNCTION(execGetOwningPlayerInputType);


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUIExtensions(); \
	friend struct Z_Construct_UClass_UCommonUIExtensions_Statics; \
public: \
	DECLARE_CLASS(UCommonUIExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonUIExtensions)


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUIExtensions(); \
	friend struct Z_Construct_UClass_UCommonUIExtensions_Statics; \
public: \
	DECLARE_CLASS(UCommonUIExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonUIExtensions)


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUIExtensions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUIExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUIExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUIExtensions(UCommonUIExtensions&&); \
	NO_API UCommonUIExtensions(const UCommonUIExtensions&); \
public:


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUIExtensions(UCommonUIExtensions&&); \
	NO_API UCommonUIExtensions(const UCommonUIExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUIExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIExtensions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUIExtensions)


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_12_PROLOG
#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_INCLASS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UCommonUIExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonUIExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
