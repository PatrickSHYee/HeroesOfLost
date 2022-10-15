/*
*	GameplayTags - A bridge between game code and the editor. The reference of the tags in code for input binding since they are native defined and also use them in them
*		in data assets for input configuration in the editor.
*	Note: Please add "GameplayTags" to the PublicDependencyModuleNames in the *.Build.cs file to run this.
*/

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

class UGameplayTagsManager;

/**
 *	HeroesGameplayTags - Singleton containing native gameplay tags
 */
struct FHeroesGameplayTags {
public:
	// Getter
	static const FHeroesGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeTags();

	// Input tags
	FGameplayTag InputTag_Move;
	FGameplayTag InputTag_Look_Mouse;
	FGameplayTag InputTag_Look_Stick;
	FGameplayTag InputTag_Jump;
	FGameplayTag InputTag_Fire;
	FGameplayTag InputTag_InGameMenu;

protected:
	// Registers all of the tags with the GameplayTags Manager
	void AddAllTags(UGameplayTagsManager& Manager);

	// Helper function used by AddAllTags to register a single tag with the GameplayTags Manager
	void AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment);

private:
	static FHeroesGameplayTags GameplayTags;
};

