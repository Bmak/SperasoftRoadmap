// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SperasoftRoadmap : ModuleRules
{
	public SperasoftRoadmap(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "CustomLevelObstacleEditor" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
    }
}
