// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HeroesOfLost : ModuleRules
{
	public HeroesOfLost(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreOnline",
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"AIModule",
			"HeadMountedDisplay",
			"GameplayTags",
			"ModularGameplayActors",
			"EnhancedInput",
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { 
			"Slate", 
			"SlateCore",
			"CommonUI",
			"CommonUser",
			"GameSettings",
			"CommonGame",
			"UIExtension"
		});
	}
}
