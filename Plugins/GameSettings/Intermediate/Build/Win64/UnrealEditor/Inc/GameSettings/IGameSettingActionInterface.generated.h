// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class UGameSetting;
#ifdef GAMESETTINGS_IGameSettingActionInterface_generated_h
#error "IGameSettingActionInterface.generated.h already included, missing '#pragma once' in IGameSettingActionInterface.h"
#endif
#define GAMESETTINGS_IGameSettingActionInterface_generated_h

#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_RPC_WRAPPERS \
	virtual bool ExecuteActionForSetting_Implementation(FGameplayTag ActionTag, UGameSetting* InSetting) { return false; }; \
 \
	DECLARE_FUNCTION(execExecuteActionForSetting);


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ExecuteActionForSetting_Implementation(FGameplayTag ActionTag, UGameSetting* InSetting) { return false; }; \
 \
	DECLARE_FUNCTION(execExecuteActionForSetting);


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_EVENT_PARMS \
	struct GameSettingActionInterface_eventExecuteActionForSetting_Parms \
	{ \
		FGameplayTag ActionTag; \
		UGameSetting* InSetting; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameSettingActionInterface_eventExecuteActionForSetting_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_CALLBACK_WRAPPERS
#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMESETTINGS_API UGameSettingActionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSettingActionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMESETTINGS_API, UGameSettingActionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingActionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMESETTINGS_API UGameSettingActionInterface(UGameSettingActionInterface&&); \
	GAMESETTINGS_API UGameSettingActionInterface(const UGameSettingActionInterface&); \
public:


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMESETTINGS_API UGameSettingActionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMESETTINGS_API UGameSettingActionInterface(UGameSettingActionInterface&&); \
	GAMESETTINGS_API UGameSettingActionInterface(const UGameSettingActionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMESETTINGS_API, UGameSettingActionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingActionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSettingActionInterface)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameSettingActionInterface(); \
	friend struct Z_Construct_UClass_UGameSettingActionInterface_Statics; \
public: \
	DECLARE_CLASS(UGameSettingActionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameSettings"), GAMESETTINGS_API) \
	DECLARE_SERIALIZER(UGameSettingActionInterface)


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameSettingActionInterface() {} \
public: \
	typedef UGameSettingActionInterface UClassType; \
	typedef IGameSettingActionInterface ThisClass; \
	static bool Execute_ExecuteActionForSetting(UObject* O, FGameplayTag ActionTag, UGameSetting* InSetting); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameSettingActionInterface() {} \
public: \
	typedef UGameSettingActionInterface UClassType; \
	typedef IGameSettingActionInterface ThisClass; \
	static bool Execute_ExecuteActionForSetting(UObject* O, FGameplayTag ActionTag, UGameSetting* InSetting); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_12_PROLOG \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_EVENT_PARMS


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_CALLBACK_WRAPPERS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_CALLBACK_WRAPPERS \
	FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESETTINGS_API UClass* StaticClass<class UGameSettingActionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Plugins_GameSettings_Source_Public_Widgets_IGameSettingActionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
