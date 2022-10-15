// Copyright Epic Games, Inc. All Rights Reserved.
/*
*	After programming the Enhanced Input code. Go to the UE Editor and go to the Project Settings->Input under the Engine and clear out the existing input mappings in the Bindings section and
*	also set the Input Default Classes:
*		- Default Player input Class = EnhancedPlayerInput
*		- Default Input Component Class = MyEnhancedInputComponent(or whatever you named your component)
* 
*	Then
*/

#include "HeroesOfLostCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInput/Public/InputAction.h"
#include "HeroesEnhancedInputComponent.h"
#include "HeroesGameplayTags.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AHeroesOfLostCharacter

AHeroesOfLostCharacter::AHeroesOfLostCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rate for input
	TurnRateGamepad = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void AHeroesOfLostCharacter::BeginPlay() {
	Super::BeginPlay();
}

//////////////////////////////////////////////////////////////////////////
// Input

void AHeroesOfLostCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	/* Old Code
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AHeroesOfLostCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AHeroesOfLostCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &AHeroesOfLostCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &AHeroesOfLostCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AHeroesOfLostCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AHeroesOfLostCharacter::TouchStopped);*/

	/** UE5 Enhanced Input **/
	check(PlayerInputComponent);
	UHeroesEnhancedInputComponent* Enh_InputComponent = Cast<UHeroesEnhancedInputComponent>(PlayerInputComponent);
	check(Enh_InputComponent);							// Make sure to set your input component class in the InputSettings->DefaultClasses

	const FHeroesGameplayTags& GameplayTags = FHeroesGameplayTags::Get();

	// Bind Input actions by tag
	Enh_InputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_Move, ETriggerEvent::Triggered, this, &AHeroesOfLostCharacter::Input_Move);
	Enh_InputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_Look_Mouse, ETriggerEvent::Triggered, this, &AHeroesOfLostCharacter::Input_Look);
	Enh_InputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_Look_Stick, ETriggerEvent::Triggered, this, &AHeroesOfLostCharacter::Input_Look);
	Enh_InputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_Fire, ETriggerEvent::Triggered, this, &AHeroesOfLostCharacter::Input_Fire);
	Enh_InputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_Jump, ETriggerEvent::Triggered, this, &AHeroesOfLostCharacter::Input_Jump);
	//Enh_InputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_InGame, ETriggerEvent::Triggered, this, &AHeroesOfLostCharacter::Input_InGameMenu);
}

void AHeroesOfLostCharacter::OnPrimaryAction() {
	// Trigger the OnItemUsed Event
}

/* void AHeroesOfLostCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void AHeroesOfLostCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}*/

void AHeroesOfLostCharacter::Input_Move(const FInputActionValue& value) {
	if (Controller != nullptr) {
		const FVector2D mValue = value.Get<FVector2D>();
		const FRotator rotMovement(0.0f, Controller->GetControlRotation().Yaw, 0.0f);

		if (mValue.X != 0.0f) {
			const FVector movDir = rotMovement.RotateVector(FVector::RightVector);
			AddMovementInput(movDir, mValue.X);
		}

		if (mValue.Y != 0.0f) {
			const FVector movDir = rotMovement.RotateVector(FVector::ForwardVector);
			AddMovementInput(movDir, mValue.Y);
		}
	}
}

void AHeroesOfLostCharacter::Input_Look(const FInputActionValue& value) {
	if (Controller != nullptr) {
		const FVector2D lValue = value.Get<FVector2D>();

		if (lValue.X != 0.0f) {
			TurnAtRate(lValue.X);
		}

		if (lValue.Y != 0.0f) {
			LookUpAtRate(lValue.Y);
		}
	}
}

void AHeroesOfLostCharacter::Input_Jump(const FInputActionValue& value) {
	Jump();
}

void AHeroesOfLostCharacter::Input_Fire(const FInputActionValue& value) {
	OnPrimaryAction();
}

void AHeroesOfLostCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AHeroesOfLostCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

/*void AHeroesOfLostCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AHeroesOfLostCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}*/

/*void AHeroesOfLostCharacter::Input_InGameMenu(const FInputActionValue& value) {
	
}*/
