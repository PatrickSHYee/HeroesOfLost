// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameSettingCollection;
#ifdef GAMESETTINGS_GameSettingScreen_generated_h
#error "GameSettingScreen.generated.h already included, missing '#pragma once' in GameSettingScreen.h"
#endif
#define GAMESETTINGS_GameSettingScreen_generated_h

#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_RPC_WRAPPERS \
	virtual void OnSettingsDirtyStateChanged_Implementation(bool bSettingsDirty); \
 \
	DECLARE_FUNCTION(execHaveSettingsBeenChanged); \
	DECLARE_FUNCTION(execApplyChanges); \
	DECLARE_FUNCTION(execCancelChanges); \
	DECLARE_FUNCTION(execGetSettingCollection); \
	DECLARE_FUNCTION(execAttemptToPopNavigation); \
	DECLARE_FUNCTION(execOnSettingsDirtyStateChanged); \
	DECLARE_FUNCTION(execNavigateToSettings); \
	DECLARE_FUNCTION(execNavigateToSetting);


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHaveSettingsBeenChanged); \
	DECLARE_FUNCTION(execApplyChanges); \
	DECLARE_FUNCTION(execCancelChanges); \
	DECLARE_FUNCTION(execGetSettingCollection); \
	DECLARE_FUNCTION(execAttemptToPopNavigation); \
	DECLARE_FUNCTION(execOnSettingsDirtyStateChanged); \
	DECLARE_FUNCTION(execNavigateToSettings); \
	DECLARE_FUNCTION(execNavigateToSetting);


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_EVENT_PARMS \
	struct GameSettingScreen_eventOnSettingsDirtyStateChanged_Parms \
	{ \
		bool bSettingsDirty; \
	};


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_CALLBACK_WRAPPERS
#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSettingScreen(); \
	friend struct Z_Construct_UClass_UGameSettingScreen_Statics; \
public: \
	DECLARE_CLASS(UGameSettingScreen, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSettingScreen)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUGameSettingScreen(); \
	friend struct Z_Construct_UClass_UGameSettingScreen_Statics; \
public: \
	DECLARE_CLASS(UGameSettingScreen, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSettingScreen)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSettingScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSettingScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettingScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSettingScreen(UGameSettingScreen&&); \
	NO_API UGameSettingScreen(const UGameSettingScreen&); \
public:


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSettingScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSettingScreen(UGameSettingScreen&&); \
	NO_API UGameSettingScreen(const UGameSettingScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettingScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingScreen); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSettingScreen)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_25_PROLOG \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_EVENT_PARMS


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_CALLBACK_WRAPPERS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_INCLASS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_CALLBACK_WRAPPERS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESETTINGS_API UClass* StaticClass<class UGameSettingScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
