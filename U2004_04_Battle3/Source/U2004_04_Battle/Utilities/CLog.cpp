#include "CLog.h"
#include "Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogProject, Display, All)

void CLog::Print(float Val, int32 Key, float Time, FColor Color)
{
	GEngine->AddOnScreenDebugMessage(Key, Time, Color, FString::SanitizeFloat(Val));
}

void CLog::Print(int32 Val, int32 Key, float Time, FColor Color)
{
	GEngine->AddOnScreenDebugMessage(Key, Time, Color, FString::FromInt(Val));
}

void CLog::Print(const FString& Val, int32 Key, float Time, FColor Color)
{
	GEngine->AddOnScreenDebugMessage(Key, Time, Color, Val);
}

void CLog::Print(const FVector& Val, int32 Key, float Time, FColor Color)
{
	GEngine->AddOnScreenDebugMessage(Key, Time, Color, Val.ToString());
}

void CLog::Print(const FRotator& Val, int32 Key, float Time, FColor Color)
{
	GEngine->AddOnScreenDebugMessage(Key, Time, Color, Val.ToString());
}


void CLog::Log(int32 Val)
{
	UE_LOG(LogProject, Display, L"%d", Val);
}

void CLog::Log(float Val)
{
	UE_LOG(LogProject, Display, L"%f", Val);
}

void CLog::Log(const FString & Val)
{
	UE_LOG(LogProject, Display, L"%s", *Val);
}

void CLog::Log(const FVector & Val)
{
	UE_LOG(LogProject, Display, L"%s", *(Val.ToString()));
}

void CLog::Log(const FRotator & Val)
{
	UE_LOG(LogProject, Display, L"%s", *(Val.ToString()));
}

void CLog::Log(UObject * Object)
{
	FString str = "";
	if (Object != NULL)
		str.Append(Object->GetName());

	str.Append(Object != NULL ? " Not Null" : "Null");

	UE_LOG(LogProject, Display, L"%s", *str);
}

void CLog::Log(UObject * Object, FString Message)
{
	FString str;
	str.Append(Message);
	str.Append(" ");
	str.Append(Object != NULL ? "Not Null" : "Null");

	UE_LOG(LogProject, Display, L"%s", *str);
}

void CLog::Log(const FString & FuncName, int32 LineNumber)
{
	FString str = "";
	str.Append(FuncName);
	str.Append(", ");
	str.Append(FString::FromInt(LineNumber));

	UE_LOG(LogProject, Display, L"%s", *str);
}
