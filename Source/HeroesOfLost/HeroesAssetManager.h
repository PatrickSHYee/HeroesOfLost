/*
*	To initialize the native Gameplay Tags during the engine startup, the Asset Manager can do this. This is a critial step when we use the editor to access the Gameplay Tags.
*	Note: When you get to the UE Editor for the project to access the Asset Manager, change the default Asset Manager to this class. This is located in the Project Settings under the heading for Engine
*		in the General Settings. Located the 'Defaults Classes', you might need to expand it to access default Asset Manager class.
*/

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "HeroesAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class HEROESOFLOST_API UHeroesAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	UHeroesAssetManager();

	// Returns the AssetManager singleton object
	static UHeroesAssetManager& Get();

protected:
	// Loading and initializing our tags.
	virtual void StartInitialLoading() override;
	
};
