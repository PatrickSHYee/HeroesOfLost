// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatableWidget;
class APlayerController;
struct FGameplayTag;
class UAsyncAction_PushContentToLayerForPlayer;
#ifdef COMMONGAME_AsyncAction_PushContentToLayerForPlayer_generated_h
#error "AsyncAction_PushContentToLayerForPlayer.generated.h already included, missing '#pragma once' in AsyncAction_PushContentToLayerForPlayer.h"
#endif
#define COMMONGAME_AsyncAction_PushContentToLayerForPlayer_generated_h

#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_19_DELEGATE \
struct _Script_CommonGame_eventPushContentToLayerForPlayerAsyncDelegate_Parms \
{ \
	UCommonActivatableWidget* UserWidget; \
}; \
static inline void FPushContentToLayerForPlayerAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& PushContentToLayerForPlayerAsyncDelegate, UCommonActivatableWidget* UserWidget) \
{ \
	_Script_CommonGame_eventPushContentToLayerForPlayerAsyncDelegate_Parms Parms; \
	Parms.UserWidget=UserWidget; \
	PushContentToLayerForPlayerAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPushContentToLayerForPlayer);


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPushContentToLayerForPlayer);


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_PushContentToLayerForPlayer(); \
	friend struct Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_PushContentToLayerForPlayer, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_PushContentToLayerForPlayer)


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_PushContentToLayerForPlayer(); \
	friend struct Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_PushContentToLayerForPlayer, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_PushContentToLayerForPlayer)


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_PushContentToLayerForPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PushContentToLayerForPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_PushContentToLayerForPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PushContentToLayerForPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_PushContentToLayerForPlayer(UAsyncAction_PushContentToLayerForPlayer&&); \
	NO_API UAsyncAction_PushContentToLayerForPlayer(const UAsyncAction_PushContentToLayerForPlayer&); \
public:


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_PushContentToLayerForPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_PushContentToLayerForPlayer(UAsyncAction_PushContentToLayerForPlayer&&); \
	NO_API UAsyncAction_PushContentToLayerForPlayer(const UAsyncAction_PushContentToLayerForPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_PushContentToLayerForPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PushContentToLayerForPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PushContentToLayerForPlayer)


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_24_PROLOG
#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_INCLASS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncAction_PushContentToLayerForPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UAsyncAction_PushContentToLayerForPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
