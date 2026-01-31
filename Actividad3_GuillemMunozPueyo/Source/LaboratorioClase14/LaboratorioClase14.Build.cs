// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LaboratorioClase14 : ModuleRules
{
	public LaboratorioClase14(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
