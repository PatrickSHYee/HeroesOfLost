// Fill out your copyright notice in the Description page of Project Settings.


#include "Teams/HoLTeamAgentInterface.h"
#include "HoLLogChannels.h"

UHoLTeamAgentInterface::UHoLTeamAgentInterface(const FObjectInitializer& objInit) : Super(objInit)
{
}

void IHoLTeamAgentInterface::ConditionalBroadcastTeamChanged(TScriptInterface<IHoLTeamAgentInterface> This, FGenericTeamId oldID, FGenericTeamId newID) {
	if (oldID != newID) {
		const int32 oldTeamIndex = GenericTeamIdToInteger(oldID);
		const int32 newTeamIndex = GenericTeamIdToInteger(newID);

		UObject* thisObj = This.GetObject();
		UE_LOG(LogHoLTeams, Verbose, TEXT("[%s] %s assigned team %d"), *GetClientSeverContextString(thisObj), *GetPathNameSafe(ThisObj), newTeamIdex);

		This.GetInterface()->GetTeamChangedDelegateChecked().Broadcast(thisObj, oldTeamIndex, newTeamIndex);
	}
}
