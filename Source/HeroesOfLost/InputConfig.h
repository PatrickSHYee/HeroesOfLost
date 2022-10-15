/*
*	We need to associate our input tags with the input actions in the UE Editor.
*/

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#include "InputConfig.generated.h"

class UInputAction;
struct FGameplayTag;

/**
 *	FTaggedInputAction - Struct used to map an input action to a gameplay input tag.
 */
USTRUCT(BlueprintType)			// We need to expose the struct to Blueprint as a type
struct FTaggedInputAction {
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	const UInputAction* InputAction = nullptr;

	UPROPERTY(EditDefaultsOnly, Meta = (Categories = "InputTag"))
	FGameplayTag InputTag;
};

/*
*	In this object, we store the input action and the gameplay tag in an Array.
*/
UCLASS()
class HEROESOFLOST_API UInputConfig : public UDataAsset
{
	GENERATED_BODY()
	
public:
	// Returns the first Input Action associated with a give tag.
	const UInputAction* FindInputActionForTag(const FGameplayTag& InputTag) const;

	// List of input actions used by the ower. These input actions are mapped to a gameplay tag and must be manually bound.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (TitleProperty = "InputAction"))
	TArray<FTaggedInputAction> TaggedInputActions;
};
