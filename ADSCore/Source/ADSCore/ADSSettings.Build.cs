/*
* ADSCore Lite - Unreal Engine 5 Advertise Plugin for Yandex
*
* Copyright (C) 2023 VOORHU <voorhu@gmail.com> All Rights Reserved.
*/

using UnrealBuildTool;

public class ADSSettings : ModuleRules
{
	public ADSSettings(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PrecompileForTargets = PrecompileTargetsType.Any;
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "ADSNode"
				// ... add private dependencies that you statically link with here ...	
			}
			);
	}
}
