// Fill out your copyright notice in the Description page of Project Settings.

using System;
using System.IO;
using UnrealBuildTool;

public class HorizonVRDemo : ModuleRules
{
	public HorizonVRDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] { "HorizonVR"});


		string ProjectPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../"));
		if(Target.ProjectFile != null)
		{
			ProjectPath = Path.GetDirectoryName(Target.ProjectFile.ToString());

		}
        // https://docs.unrealengine.com/en-US/Platforms/Mobile/UnrealPluginLanguage/index.html
        AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ProjectPath, "Source", "Game_UPL.xml"));

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
