#pragma once

#include "CoreMinimal.h"
#include "ConstructorHelpers.h"

class U2004_05_COMBAT_API CContentFinder
{
public:
	template<typename T>
	static void GetAsset(T** OutObject, FString Path)
	{
		ConstructorHelpers::FObjectFinder<T> asset(*Path);
		verifyf(asset.Succeeded(), L"asset not found");

		*OutObject = asset.Object;
	}

	template<typename T>
	static void GetAssetDynamic(T** OutObject, FString Path)
	{	
		T* obj = Cast<T>(StaticLoadObject(T::StaticClass(), NULL, *Path));
		verifyf(obj != NULL, L"asset not found");

		*OutObject = obj;
	}


	template<typename T>
	static void GetClass(TSubclassOf<T>* OutClass, FString Path)
	{
		ConstructorHelpers::FClassFinder<T> asset(*Path);
		verifyf(asset.Succeeded(), L"asset not found");

		*OutClass = asset.Class;
	}
};