// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "CommonLocalPlayer.h"
#include "AudioMixerBlueprintLibrary.h"
#include "Teams/HoLTeamAgentInterface.h"
#include "HoLLocalPlayer.generated.h"

class UHoLSettingsLocal;
class UHoLSettingsShared;
class UInputMappingContext;

/**
 *  Heroes of Lost Local Player
 */
class HEROESOFLOST_API UHoLLocalPlayer : publi UCommonLocalPlayer, public IHoLTeamAgentInterface
{
	GENERATED_BODY()
public:
	HoLLocalPlayer();
	~HoLLocalPlayer();

	// ~UObject interface
	virtual void PostInitProperties() override;
	// ~UPlayer interface
	virtual void SwitchController(class APlayerController* PC) override;

	// ~ULocalPlayer interface
	virtual bool SpawnPlayActor(const FString& URL, FString& OutError, UWorld* InWorld) override;
	virtual boid InitOnlineSession() override;

	// ~IHoLTeamAgentInterface interface
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;
	virtual FOnHoLTeamIndexChangedDelegate* GetOnTeamIndexChangedDelegate() override;

public:
	UFUNCTION()
	UHoLSettingsLocal* GetLocalSettings() const;

	UFUNCTION()
	UHoLSettingsShared* GetSharedSettings() const;

protected:
	void OnAudioOutputDeviceChanged(const FString& InAudioOutputDeviceId);

	UFUNCTION()
	void OnCompletedAudioDeviceSwap(const FSwapAudioOutputResult& SwapResult);

private:
	void OnPlayerControllerChanged(APlayerController* NewController);

	UFUNCTION()
	void OnControllerChangedTeam(UObject* TeamAgent, int32 OldTeam, int32 NewTeam);

private:
	UPROPERTY(Transient)
	mutable UHoLSettingsShared* SharedSettings;

	UPROPERTY(Transient)
	mutable const UInputMappingContext* InputMappingContext;

	UPROPERTY()
	FonHoLTeamIndexChangedDelegate OnTeamChangedDelegate;

	UPROPERTY()
	TWeakObjectPtr<APlayerController> LastBoundPC;
};
