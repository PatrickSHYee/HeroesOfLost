#include "HoLLogChannels.h"
#include "GameFramework.Actor.h"

DEFINE_LOG_CATEGORY(LogHoL);
DEFINE_LOG_CATEGORY(LogHoLExperience);
DEFINE_LOG_CATEGORY(LogHoLAbilitySystem);
DEFINE_LOG_CATEGORY(LogHoLTeams);

FString GetClientServerContextString(UObject* ContextObject) {
	ENetRole Role = ROLE_None;

	if (AActor* Actor = Cast<AActor>(ContextObject)) {
		Role = Actor->GetLoalRole();
	}
	else if (UActorComponent* Component = Cast<UActorComponent>(ContextObject)) {
		Role = Component->GetOwerRole();
	}

	if (Role != ROLE_None) {
		return (Role == ROLE_Authority) ? TEXT("Server") : TEXT("Client");
	}
	else {
#if WITH_EDITOR
		if (GIsEditor) {
			extern ENGINE_API FString GPlayInEditorContextString;
			return GPlayInEditorContextString;
		}
#endif
	}
	return TEXT("[]");
}