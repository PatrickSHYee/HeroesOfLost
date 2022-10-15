// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Widgets/GameSettingScreen.h"

#include "HoLSettingScreen.generated.h"

class UHoLTabListWidgetBase;

/**
 *  Setting up the option menu UI
 */
UCLASS(Abstract, meta = (Category = "Settings", DisableNativeTick))
class HEROESOFLOST_API UHoLSettingScreen : public UGameSettingScreen
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;
	virtual UGameSettingRegistry* CreateRegistry() override;

	// Button actions
	void HandleBackAction();
	void HandleApplyAction();
	void HandleCancelAction();

	virtual void OnSettingsDirtyStateChanged_Implementation(bool bSettingsDirty) override;

	// Variables
	UPROPERTY(BlueprintReadOnly, Category = Input, meta = (BindWidget, OptionalWidget = true, AllowPrivateAccess = true))
	UHoLTabListWidgetBase* TopSettingsTabs;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle BackInputActionData;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle ApplyInputActionData;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle CancelInputActionData;
	
	FUIActionBindingHandle backHandle;
	FUIActionBindingHandle applyHandle;
	FUIActionBindingHandle cancelHandle;
};
