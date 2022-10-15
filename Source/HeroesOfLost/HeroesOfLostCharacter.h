// Copyright Epic Games, Inc. All Rights Reserved.
/*
*	You can delete or commented the old code like I did below.
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HeroesOfLostCharacter.generated.h"

class UInputComponent;
class UInputConfig;
struct FInputActionValue;

UCLASS(config=Game)
class AHeroesOfLostCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	AHeroesOfLostCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Input)
	float TurnRateGamepad;

protected:
	/** UE5 Enhanced Input **/
	// Fires a projectile. Note: I am add this functionally later.
	void OnPrimaryAction();

	/** Called for forwards/backward input */
	//void MoveForward(float Value);

	/** Called for side to side input */
	//void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	//void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	//void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	virtual void BeginPlay();
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

public:
	// The input config that maps Input Actions to Input Tags
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputConfig* InputConfig;

	// Movement handling
	void Input_Move(const FInputActionValue& value);

	// Handles looking around
	void Input_Look(const FInputActionValue& value);

	// Handles jumping
	void Input_Jump(const FInputActionValue& value);

	// Handles firing
	void Input_Fire(const FInputActionValue& value);

	// Displays In Game Menu
	//void Input_InGameMenu(const FInputActionValue& value);
};

