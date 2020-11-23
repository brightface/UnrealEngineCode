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
		void UpdatePercentage(float InHealth, float InMaxHealth);//�������� �� �Ҷ� ���� �Լ� ������ ���ִ�

public:
	void UpdateHealthPoint(float InHealth,float InMaxHealth);//HP�� ������ �ؾߵǴ� ��Ȳ
};
