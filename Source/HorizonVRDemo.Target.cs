// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class HorizonVRDemoTarget : TargetRules
{
	public HorizonVRDemoTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "HorizonVRDemo" } );
		DefaultBuildSettings = BuildSettingsVersion.V2;
	}
}
