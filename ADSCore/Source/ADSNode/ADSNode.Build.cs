/*
* ADSCore Lite - Unreal Engine 5 Advertise Plugin for Yandex
*
* Copyright (C) 2023 VOORHU <voorhu@gmail.com> All Rights Reserved.
*/

using System.ComponentModel;
using System.IO;
using EpicGames.Core;
using UnrealBuildTool;

public class ADSNode : ModuleRules
{
	public ADSNode(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PrecompileForTargets = PrecompileTargetsType.Any;
        PrivatePCHHeaderFile = "Public/ADSNode.h";

		PublicIncludePaths.Add("Runtime/Advertising/Advertising/Public");

		if(Target.Platform == UnrealTargetPlatform.Android)
		{
            //PrivateDependencyModuleNames.AddRange(new string[] { "Launch" });
            PrivateDependencyModuleNames.Add("Launch");

            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);

            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "ADSNode_UPL.xml"));
        }
	}
}
