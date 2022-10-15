// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECommonKeybindForcedHoldStatus : uint8;
struct FKey;
#ifdef COMMONGAME_CommonPlayerInputKey_generated_h
#error "CommonPlayerInputKey.generated.h already included, missing '#pragma once' in CommonPlayerInputKey.h"
#endif
#define COMMONGAME_CommonPlayerInputKey_generated_h

#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeasuredText_Statics; \
	COMMONGAME_API static class UScriptStruct* StaticStruct();


template<> COMMONGAME_API UScriptStruct* StaticStruct<struct FMeasuredText>();

#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_SPARSE_DATA
#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsBoundKeyValid); \
	DECLARE_FUNCTION(execIsHoldKeybind); \
	DECLARE_FUNCTION(execStopHoldProgress); \
	DECLARE_FUNCTION(execStartHoldProgress); \
	DECLARE_FUNCTION(execSetPresetNameOverride); \
	DECLARE_FUNCTION(execSetAxisScale); \
	DECLARE_FUNCTION(execSetShowProgressCountDown); \
	DECLARE_FUNCTION(execSetForcedHoldKeybindStatus); \
	DECLARE_FUNCTION(execSetForcedHoldKeybind); \
	DECLARE_FUNCTION(execSetBoundAction); \
	DECLARE_FUNCTION(execSetBoundKey); \
	DECLARE_FUNCTION(execUpdateKeybindWidget);


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsBoundKeyValid); \
	DECLARE_FUNCTION(execIsHoldKeybind); \
	DECLARE_FUNCTION(execStopHoldProgress); \
	DECLARE_FUNCTION(execStartHoldProgress); \
	DECLARE_FUNCTION(execSetPresetNameOverride); \
	DECLARE_FUNCTION(execSetAxisScale); \
	DECLARE_FUNCTION(execSetShowProgressCountDown); \
	DECLARE_FUNCTION(execSetForcedHoldKeybindStatus); \
	DECLARE_FUNCTION(execSetForcedHoldKeybind); \
	DECLARE_FUNCTION(execSetBoundAction); \
	DECLARE_FUNCTION(execSetBoundKey); \
	DECLARE_FUNCTION(execUpdateKeybindWidget);


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonPlayerInputKey(); \
	friend struct Z_Construct_UClass_UCommonPlayerInputKey_Statics; \
public: \
	DECLARE_CLASS(UCommonPlayerInputKey, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonPlayerInputKey)


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUCommonPlayerInputKey(); \
	friend struct Z_Construct_UClass_UCommonPlayerInputKey_Statics; \
public: \
	DECLARE_CLASS(UCommonPlayerInputKey, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonPlayerInputKey)


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonPlayerInputKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPlayerInputKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPlayerInputKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPlayerInputKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPlayerInputKey(UCommonPlayerInputKey&&); \
	NO_API UCommonPlayerInputKey(const UCommonPlayerInputKey&); \
public:


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPlayerInputKey(UCommonPlayerInputKey&&); \
	NO_API UCommonPlayerInputKey(const UCommonPlayerInputKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPlayerInputKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPlayerInputKey); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPlayerInputKey)


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_38_PROLOG
#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_RPC_WRAPPERS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_INCLASS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_SPARSE_DATA \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_INCLASS_NO_PURE_DECLS \
	FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UCommonPlayerInputKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HeroesOfLost_Plugins_CommonGame_Source_Public_CommonPlayerInputKey_h


#define FOREACH_ENUM_ECOMMONKEYBINDFORCEDHOLDSTATUS(op) \
	op(ECommonKeybindForcedHoldStatus::NoForcedHold) \
	op(ECommonKeybindForcedHoldStatus::ForcedHold) \
	op(ECommonKeybindForcedHoldStatus::NeverShowHold) 

enum class ECommonKeybindForcedHoldStatus : uint8;
template<> COMMONGAME_API UEnum* StaticEnum<ECommonKeybindForcedHoldStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
