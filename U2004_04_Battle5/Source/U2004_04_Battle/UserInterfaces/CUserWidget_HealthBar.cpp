#include "CUserWidget_HealthBar.h"
#include "Global.h"

void UCUserWidget_HealthBar::UpdateHealthPoint(float InHealth, float InMaxHealth)
{
	UpdatePercentage(InHealth, InMaxHealth);

}
