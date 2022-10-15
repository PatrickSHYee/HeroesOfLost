// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesOfLost/HeroesOfLostCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroesOfLostCharacter() {}
// Cross Module References
	HEROESOFLOST_API UClass* Z_Construct_UClass_AHeroesOfLostCharacter_NoRegister();
	HEROESOFLOST_API UClass* Z_Construct_UClass_AHeroesOfLostCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HeroesOfLost();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEROESOFLOST_API UClass* Z_Construct_UClass_UInputConfig_NoRegister();
// End Cross Module References
	void AHeroesOfLostCharacter::StaticRegisterNativesAHeroesOfLostCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeroesOfLostCharacter);
	UClass* Z_Construct_UClass_AHeroesOfLostCharacter_NoRegister()
	{
		return AHeroesOfLostCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHeroesOfLostCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeroesOfLostCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesOfLost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesOfLostCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HeroesOfLostCharacter.h" },
		{ "ModuleRelativePath", "HeroesOfLostCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeroesOfLostCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesOfLostCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeroesOfLostCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesOfLostCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "HeroesOfLostCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesOfLostCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// The input config that maps Input Actions to Input Tags\n" },
		{ "ModuleRelativePath", "HeroesOfLostCharacter.h" },
		{ "ToolTip", "The input config that maps Input Actions to Input Tags" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesOfLostCharacter, InputConfig), Z_Construct_UClass_UInputConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_InputConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_InputConfig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeroesOfLostCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesOfLostCharacter_Statics::NewProp_InputConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeroesOfLostCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroesOfLostCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroesOfLostCharacter_Statics::ClassParams = {
		&AHeroesOfLostCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHeroesOfLostCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesOfLostCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeroesOfLostCharacter()
	{
		if (!Z_Registration_Info_UClass_AHeroesOfLostCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroesOfLostCharacter.OuterSingleton, Z_Construct_UClass_AHeroesOfLostCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHeroesOfLostCharacter.OuterSingleton;
	}
	template<> HEROESOFLOST_API UClass* StaticClass<AHeroesOfLostCharacter>()
	{
		return AHeroesOfLostCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroesOfLostCharacter);
	struct Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesOfLostCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesOfLostCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHeroesOfLostCharacter, AHeroesOfLostCharacter::StaticClass, TEXT("AHeroesOfLostCharacter"), &Z_Registration_Info_UClass_AHeroesOfLostCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroesOfLostCharacter), 1069794341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesOfLostCharacter_h_1750221113(TEXT("/Script/HeroesOfLost"),
		Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesOfLostCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HeroesOfLost_Source_HeroesOfLost_HeroesOfLostCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
