#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUserWidget_HealthBar.generated.h"


UCLASS()
class U2004_04_BATTLE_API UCUserWidget_HealthBar : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)	
		void UpdatePercentage(float InHealth, float InMaxHealth);//블프에서 콜 할때 쓰는 함수 재정의 해주는

public:
	void UpdateHealthPoint(float InHealth,float InMaxHealth);//HP를 갱신을 해야되는 상황
};
