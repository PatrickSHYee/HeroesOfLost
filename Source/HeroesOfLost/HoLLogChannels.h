#pragma once

#include "CoreMinimal.h"
#include "Loggin/LogMacros.h"

HEROESOFLOST_API DECLARE_LOG_CATEGORY_EXTERN(LogHoL, Log, All);
HEROESOFLOST_API DECLARE_LOG_CATEGORY_EXTERN(LogHoLExperience, Log, All);
HEROESOFLOST_API DECLARE_LOG_CATEGORY_EXTERN(LogHoLAbilitySystem, Log, All);	// May want to change this
HEROESOFLOST_API DECLARE_LOG_CATEGORY_EXTERN(LogHoLTeams, Log, All);

HEROESOFLOST_API FString GetClientServerContextString(UObject* ContextObject = nullptr);