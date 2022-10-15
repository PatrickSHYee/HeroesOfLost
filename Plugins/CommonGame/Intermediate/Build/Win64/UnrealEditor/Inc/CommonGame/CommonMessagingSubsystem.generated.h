// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONGAME_CommonMessagingSubsystem_generated_h
#error "CommonMessagingSubsystem.generated.h already included, missing '#pragma once' in CommonMessagingSubsystem.h"
#endif
#define COMMONGAME_CommonMessagingSubsystem_generated_h

#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_RPC_WRAPPERS
#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonMessagingSubsystem(); \
	friend struct Z_Construct_UClass_UCommonMessagingSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonMessagingSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonMessagingSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUCommonMessagingSubsystem(); \
	friend struct Z_Construct_UClass_UCommonMessagingSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonMessagingSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonMessagingSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonMessagingSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonMessagingSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonMessagingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonMessagingSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonMessagingSubsystem(UCommonMessagingSubsystem&&); \
	NO_API UCommonMessagingSubsystem(const UCommonMessagingSubsystem&); \
public:


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonMessagingSubsystem(UCommonMessagingSubsystem&&); \
	NO_API UCommonMessagingSubsystem(const UCommonMessagingSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonMessagingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonMessagingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonMessagingSubsystem)


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_34_PROLOG
#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_INCLASS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UCommonMessagingSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Plugins_CommonGame_Source_Public_Messaging_CommonMessagingSubsystem_h


#define FOREACH_ENUM_ECOMMONMESSAGINGRESULT(op) \
	op(ECommonMessagingResult::Confirmed) \
	op(ECommonMessagingResult::Declined) \
	op(ECommonMessagingResult::Cancelled) \
	op(ECommonMessagingResult::Killed) \
	op(ECommonMessagingResult::Unknown) 

enum class ECommonMessagingResult : uint8;
template<> COMMONGAME_API UEnum* StaticEnum<ECommonMessagingResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
