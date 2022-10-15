// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
enum class ESlateVisibility : uint8;
#ifdef GAMESETTINGS_GameSetting_generated_h
#error "GameSetting.generated.h already included, missing '#pragma once' in GameSetting.h"
#endif
#define GAMESETTINGS_GameSetting_generated_h

#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWarningRichText); \
	DECLARE_FUNCTION(execGetDynamicDetails); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execGetDescriptionRichText); \
	DECLARE_FUNCTION(execGetDisplayNameVisibility); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetDevName);


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWarningRichText); \
	DECLARE_FUNCTION(execGetDynamicDetails); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execGetDescriptionRichText); \
	DECLARE_FUNCTION(execGetDisplayNameVisibility); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetDevName);


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSetting(); \
	friend struct Z_Construct_UClass_UGameSetting_Statics; \
public: \
	DECLARE_CLASS(UGameSetting, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSetting)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUGameSetting(); \
	friend struct Z_Construct_UClass_UGameSetting_Statics; \
public: \
	DECLARE_CLASS(UGameSetting, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSetting)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSetting(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSetting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSetting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSetting(UGameSetting&&); \
	NO_API UGameSetting(const UGameSetting&); \
public:


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSetting(UGameSetting&&); \
	NO_API UGameSetting(const UGameSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSetting); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameSetting)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_25_PROLOG
#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_INCLASS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESETTINGS_API UClass* StaticClass<class UGameSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Plugins_GameSettings_Source_Public_GameSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
