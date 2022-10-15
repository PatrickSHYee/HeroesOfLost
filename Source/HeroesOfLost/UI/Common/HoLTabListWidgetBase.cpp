// Fill out your copyright notice in the Description page of Project Settings.


#include "HoLTabListWidgetBase.h"

#include "CommonAnimatedSwitcher.h"
#include "CommonButtonBase.h"

void UHoLTabListWidgetBase::NativeOnInitialized() {
	Super::NativeOnInitialized();
}

void UHoLTabListWidgetBase::NativeConstruct() {
	Super::NativeConstruct();

	SetupTabs();
}

void UHoLTabListWidgetBase::NativeDestruct() {
	for (FHoLTabDescriptor& TabInfo : PreregisteredTabInfoArray) {
		if (TabInfo.CreatedTabContentWidget) {
			TabInfo.CreatedTabContentWidget->RemoveFromParent();
			TabInfo.CreatedTabContentWidget = nullptr;
		}
	}

	Super::NativeDestruct();
}

bool UHoLTabListWidgetBase::GetPreregisteredTabInfo(const FName TabNameId, FHoLTabDescriptor& OutTabInfo) {
	const FHoLTabDescriptor* const FoundTabInfo = PreregisteredTabInfoArray.FindByPredicate([&](FHoLTabDescriptor& TabInfo)->bool { return TabInfo.TabId == TabNameId; });

	if (!FoundTabInfo) return false;

	OutTabInfo = *FoundTabInfo;
	return true;
}

void UHoLTabListWidgetBase::SetTabHiddenState(FName TabNameId, bool bHidden) {
	for (FHoLTabDescriptor& TabInfo : PreregisteredTabInfoArray) {
		if (TabInfo.TabId == TabNameId) {
			TabInfo.bHidden = bHidden;
			break;
		}
	}
}

bool UHoLTabListWidgetBase::RegisterDynamicTab(const FHoLTabDescriptor& TabDescriptor) {
	// If it's hidden we just ignore it
	if (TabDescriptor.bHidden) {
		return true;
	}

	PendingTabLabelInfoMap.Add(TabDescriptor.TabId, TabDescriptor);

	return RegisterTab(TabDescriptor.TabId, TabDescriptor.TabButtonType, TabDescriptor.CreatedTabContentWidget);
}


void UHoLTabListWidgetBase::HandlePreLinkedSwitcherChanged() {
	for (const FHoLTabDescriptor& TabInfo : PreregisteredTabInfoArray) {
		if (TabInfo.CreatedTabContentWidget) {
			TabInfo.CreatedTabContentWidget->RemoveFromParent();
		}
	}

	Super::HandlePreLinkedSwitcherChanged();
}

void UHoLTabListWidgetBase::HandlePostLinkedSwitcherChanged() {
	if (!IsDesignTime() && GetCachedWidget().IsValid()) {
		// Don't bother making tabs if we're in the designer or haven't been constructed yet
		SetupTabs();
	}

	Super::HandlePostLinkedSwitcherChanged();
}

void UHoLTabListWidgetBase::HandleTabCreation_Implementation(FName TabId, UCommonButtonBase* TabButton) {
	FHoLTabDescriptor* TabInfoPtr = nullptr;
	FHoLTabDescriptor TabInfo;

	if (GetPreregisteredTabInfo(TabId, TabInfo)) {
		TabInfoPtr = &TabInfo;
	}
	else {
		TabInfoPtr = PendingTabLabelInfoMap.Find(TabId);
	}

	if (TabButton->GetClass()->ImplementsInterface(UHoLTabButtonInterface::StaticClass())) {
		if (ensureMsgf(TabInfoPtr, TEXT("A tab button was created with id %s, but no label info was specified. RegisterDynamicTab should be used over RegisterTab to provide label info."), *TabId.ToString())) {
			IHoLTabButtonInterface::Execute_SetTabLabalInfo(TabButton, *TabInfoPtr);
		}
	}

	PendingTabLabelInfoMap.Remove(TabId);
}

bool UHoLTabListWidgetBase::IsFirstTabActive() const {
	if (PreregisteredTabInfoArray.Num() > 0) {
		return GetActiveTab() == PreregisteredTabInfoArray[0].TabId;
	}

	return false;
}

bool UHoLTabListWidgetBase::IsLastTabActive() const {
	if (PreregisteredTabInfoArray.Num() > 0) {
		return GetActiveTab() == PreregisteredTabInfoArray.Last().TabId;
	}
	return false;
}

bool UHoLTabListWidgetBase::IsTabVisible(FName TabId) {
	if (const UCommonButtonBase* Button = GetTabButtonBaseByID(TabId)) {
		const ESlateVisibility TabVis = Button->GetVisibility();
		return (TabVis == ESlateVisibility::Visible
			|| TabVis == ESlateVisibility::HitTestInvisible
			|| TabVis == ESlateVisibility::SelfHitTestInvisible);
	}
	return false;
}

int32 UHoLTabListWidgetBase::GetVisibleTabCount() {
	int32 result = 0;
	const int32 cTab = GetTabCount();

	for (int32 i = 0; i < cTab; i++) {
		if (IsTabVisible(GetTabIdAtIndex(i))) {
			result++;
		}
	}

	return result;
}

void UHoLTabListWidgetBase::SetupTabs() {
	for (FHoLTabDescriptor& tInfo : PreregisteredTabInfoArray) {
		if (tInfo.bHidden) {
			continue;
		}

		// If the tab content has not been created already, then create it.
		if (!tInfo.CreatedTabContentWidget && tInfo.TabContentType) {
			tInfo.CreatedTabContentWidget = CreateWidget<UCommonUserWidget>(GetOwningPlayer(), tInfo.TabContentType);
			OnTabContentCreatedNative.Broadcast(tInfo.TabId, Cast<UCommonUserWidget>(tInfo.CreatedTabContentWidget));
			OnTabContentCreated.Broadcast(tInfo.TabId, Cast<UCommonUserWidget>(tInfo.CreatedTabContentWidget));
		}

		if (UCommonAnimatedSwitcher* Curr_LinkedSwitcher = GetLinkedSwitcher()) {
			// Add the tab content to the newly linked switcher
			if (!Curr_LinkedSwitcher->HasChild(tInfo.CreatedTabContentWidget)) {
				Curr_LinkedSwitcher->AddChild(tInfo.CreatedTabContentWidget);
			}
		}

		// If the tab is not already registered, get it register.
		if (GetTabButtonBaseByID(tInfo.TabId) == nullptr) {
			RegisterTab(tInfo.TabId, tInfo.TabButtonType, tInfo.CreatedTabContentWidget);
		}
	}
}