// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class U2004_05_CombatEditorTarget : TargetRules
{
	public U2004_05_CombatEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "U2004_05_Combat" } );
	}
}
