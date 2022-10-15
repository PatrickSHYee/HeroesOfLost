// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/ScriptInterface.h"

#include "HoLTeamAgentInterface.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParam(FOnHoLTeamIndexChangedDelegate, UObject*, ObjectChangingTeam, int32, OldTeamID, int32, NewTeamId);

inline int32 GenericTeamIdToInteger(FGenericTeamId ID) {
	return (ID == FGenericTeamId::NoTeam) ? INDEX_NONE : (int32)ID;
}

inline FGenericTeamId IntegerToGenericTeamId(int32 ID) {
	return (ID == INDEX_NONE) ? FGenericTeamId::NoTeam : FGenericTeamId((uint8)ID);
}

/**
 *	Interfacce for actors which can be assoicated with teams
 */
UINTERFACE(meta=(CannotImplementInterfaceInBlueprint))
class UHoLTeamAgentInterface : public UGenericTeamAgentInterface {
	GENERATED_UINTERFACE_BODY();
};

class HEROESOFLOST_API IHoLTeamAgentInterface : public IGenericTeamAgentInterface
{
	GENERATED_UINTERFACE_BODY()

	// This need be changed because The TeamIndexChangeDelegate is just a null pointer.
	virtual FOnHoLTeamIndexChangedDelegate* GetOnTeamIndexChangedDelegate() { return nullptr; }
	
	static void ConditionalBroadcastTeamChanged(TScriptInterface<IHoLTeamAgentInterface>, This FGenericTeamId oldTeamId, FGenericTeamId newTeamId);

	FOnHoLTeamIndexChangedDelegate& GetTeamChangedDelegateChecked() {
		FOnHoLTeamIndexChangedDelegate* Result = GetOnTeamIndexChangedDelegate();
		check(Result);
		return *Result;
	}
};
