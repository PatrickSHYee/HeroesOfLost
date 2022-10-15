// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameSetting;
#ifdef GAMESETTINGS_GameSettingDetailExtension_generated_h
#error "GameSettingDetailExtension.generated.h already included, missing '#pragma once' in GameSettingDetailExtension.h"
#endif
#define GAMESETTINGS_GameSettingDetailExtension_generated_h

#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_RPC_WRAPPERS
#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_EVENT_PARMS \
	struct GameSettingDetailExtension_eventOnSettingAssigned_Parms \
	{ \
		UGameSetting* InSetting; \
	}; \
	struct GameSettingDetailExtension_eventOnSettingValueChanged_Parms \
	{ \
		UGameSetting* InSetting; \
	};


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_CALLBACK_WRAPPERS
#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSettingDetailExtension(); \
	friend struct Z_Construct_UClass_UGameSettingDetailExtension_Statics; \
public: \
	DECLARE_CLASS(UGameSettingDetailExtension, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSettingDetailExtension)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGameSettingDetailExtension(); \
	friend struct Z_Construct_UClass_UGameSettingDetailExtension_Statics; \
public: \
	DECLARE_CLASS(UGameSettingDetailExtension, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSettingDetailExtension)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSettingDetailExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSettingDetailExtension) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettingDetailExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingDetailExtension); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSettingDetailExtension(UGameSettingDetailExtension&&); \
	NO_API UGameSettingDetailExtension(const UGameSettingDetailExtension&); \
public:


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSettingDetailExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSettingDetailExtension(UGameSettingDetailExtension&&); \
	NO_API UGameSettingDetailExtension(const UGameSettingDetailExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettingDetailExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingDetailExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSettingDetailExtension)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_15_PROLOG \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_EVENT_PARMS


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_CALLBACK_WRAPPERS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_INCLASS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_CALLBACK_WRAPPERS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESETTINGS_API UClass* StaticClass<class UGameSettingDetailExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_GameSettingDetailExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
