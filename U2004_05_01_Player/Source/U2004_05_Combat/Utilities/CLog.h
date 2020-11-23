#pragma once

#include "CoreMinimal.h"

#define CURRENT __FUNCTION__, __LINE__

class U2004_05_COMBAT_API CLog
{
public:
	static void Print(int32 Val, int32 Key = -1, float Time = 10.0f, FColor Color = FColor::Blue);
	static void Print(float Val, int32 Key = -1, float Time = 10.0f, FColor Color = FColor::Blue);
	static void Print(const FString& Val, int32 Key = -1, float Time = 10.0f, FColor Color = FColor::Blue);
	static void Print(const FVector& Val, int32 Key = -1, float Time = 10.0f, FColor Color = FColor::Blue);
	static void Print(const FRotator& Val, int32 Key = -1, float Time = 10.0f, FColor Color = FColor::Blue);

	static void Log(int32 Val);
	static void Log(float Val);
	static void Log(const FString& Val);
	static void Log(const FVector& Val);
	static void Log(const FRotator& Val);
	static void Log(UObject* Object);
	static void Log(UObject* Object, FString Message);
	static void Log(const FString& FuncName, int32 LineNumber);
};
