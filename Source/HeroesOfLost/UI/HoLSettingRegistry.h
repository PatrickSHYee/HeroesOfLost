// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GameSettingRegistry.h"
#include "DataSource/GameSettingDataSourceDynamic.h"
#include "HoLSettingRegistry.generated.h"

/**
 *  UHoLSettingRegistry
 */

class UHoLLocalPlayer;
class UHoLClientSettingsRecord;
class UHoLGameUserSettings;
class UGameSettingCollection;
class UGameSetting;
struct FGameSettingsFilterState;
class UHoLContentControlSettingRegistry;

UCLASS(Abstract, BlueprintType)
class HEROESOFLOST_API UHoLSettingRegistry : public UObject
{
	GENERATED_BODY()

public:
	//DECLARE_EVENT_TwoParams(UHoLSettingRegistry, FOnSe)
	
};
