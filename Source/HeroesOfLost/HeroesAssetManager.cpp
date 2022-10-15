// After coding this up, go to the InputConfig.


#include "HeroesAssetManager.h"
#include "HeroesGameplayTags.h"

UHeroesAssetManager::UHeroesAssetManager() {

}

// Getting our Asset Manager
UHeroesAssetManager& UHeroesAssetManager::Get() {
	check(GEngine);
	UHeroesAssetManager* AM = Cast<UHeroesAssetManager>(GEngine->AssetManager);
	return *AM;
}

// Initializing and loading our Gameplay Tags
void UHeroesAssetManager::StartInitialLoading() {
	Super::StartInitialLoading();

	// Load Native Tags
	FHeroesGameplayTags::InitializeNativeTags();
}