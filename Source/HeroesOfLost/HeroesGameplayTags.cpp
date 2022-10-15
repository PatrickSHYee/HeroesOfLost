// After programming this, go to and develop the Asset Manager. It is a critial step for these Gameplay Tags to show up the UE Editor.


#include "HeroesGameplayTags.h"
#include "GameplayTagsManager.h"
#include "Engine/EngineTypes.h"

FHeroesGameplayTags FHeroesGameplayTags::GameplayTags;

/*
*	Get all the GameplayTags and placing them in GameplayTagsManager.
*/
void FHeroesGameplayTags::InitializeNativeTags() {
	UGameplayTagsManager& GameplayTagsManager = UGameplayTagsManager::Get();

	GameplayTags.AddAllTags(GameplayTagsManager);

	// Calling this makes sure that there is no extra memory is being used up. Once this called, it flush the gameplay tags and it is unsafe to add more.
	GameplayTagsManager.DoneAddingNativeTags();
}

// Add the Input Action tags to the GameplayTagsManager
void FHeroesGameplayTags::AddAllTags(UGameplayTagsManager& Manager) {
	AddTag(InputTag_Move, "InputTag.Move", "Move input.");
	AddTag(InputTag_Look_Mouse, "InputTag.Look.Mouse", "Mouse look input.");
	AddTag(InputTag_Look_Stick, "InputTag.Look.Stick", "Stick look input.");
	AddTag(InputTag_Jump, "InputTag.Jump", "Jump input.");
	AddTag(InputTag_Fire, "InputTag.Fire", "Fire input.");
	AddTag(InputTag_InGameMenu, "InputTag.InGameMenu", "Displays In Game Menu");
}

void FHeroesGameplayTags::AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment) {
	OutTag = UGameplayTagsManager::Get().AddNativeGameplayTag(FName(TagName), FString(TEXT("(Native) ")) + FString(TagComment));
}