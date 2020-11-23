// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class U2004_05_CombatTarget : TargetRules
{
	public U2004_05_CombatTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "U2004_05_Combat" } );
	}
}
