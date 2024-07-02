// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CustomLevelObstacleEditor : ModuleRules
{
	public CustomLevelObstacleEditor(ReadOnlyTargetRules Target) : base(Target)
	{
        PrivateDependencyModuleNames.AddRange(new string[] { "Core" });

        PublicDependencyModuleNames.AddRange(new string[] { "SperasoftRoadmap" });



    }
}
