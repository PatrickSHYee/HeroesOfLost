/*
*	Bind an action based on a gameplay tag. Next we be setup our Character to this.
*/

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputConfig.h"
#include "GameplayTagContainer.h"
#include "HeroesEnhancedInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class HEROESOFLOST_API UHeroesEnhancedInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
	
public:
	template<class UserClass, typename FuncType>
	void BindActionByTag(const UInputConfig* InputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func);

};

template<class UserClass, typename FuncType>
void UHeroesEnhancedInputComponent::BindActionByTag(const UInputConfig* InputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func) {
	check(InputConfig);
	if (const UInputAction* IA = InputConfig->FindInputActionForTag(InputTag)) {
		BindAction(IA, TriggerEvent, Object, Func);
	}
}
