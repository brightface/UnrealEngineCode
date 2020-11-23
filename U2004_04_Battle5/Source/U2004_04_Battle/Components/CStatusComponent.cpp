#include "CStatusComponent.h"
#include "Global.h"
#include "Components/WidgetComponent.h"
#include "UserInterfaces/CUserWidget_HealthBar.h"

UCStatusComponent::UCStatusComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	
}


void UCStatusComponent::BeginPlay()
{
	Super::BeginPlay();

	verifyf(TableName.Len() > 0, L"%s", L"TableName.Len() > 0");
	
	//������ ���̺�� �ҷ��´�
	FString tablePath = "";
	tablePath = FString::Printf(TEXT("DataTable'/Game/DataTables/%s.%s'"), *TableName,*TableName);
	CContentFinder::GetAssetDynamic<UDataTable>(&DataTable, tablePath);
	DataTable->GetAllRows<FStatusData>("", Datas);

	MaxHealth = GetValue(EStatusType::Health);
	Health = MaxHealth;
	
}


float UCStatusComponent::GetValue(EStatusType InType)
{//float random = UKismetMathLibrary::RandomFloatInRange(-modifiers, modifiers);
	float value = 0.0f;
	float modifiers = 0.0f;

	for (int32 i = 0; i < Datas.Num(); i++)
	{
		if (Datas[i]->Type == InType)
		{
			value = Datas[i]->Value;
			modifiers = Datas[i]->Modifiers;

			break;
		}
	}

	switch (InType)
	{
	   case EStatusType::Critical:
	   {
	   	  return (bool)(UKismetMathLibrary::RandomIntegerInRange(0, value - 1) == 0);//-1�� �����Լ��� +1�� �־ ���ذŴ� 
	   }
	   break;
	   
	   case EStatusType::CriticalPower:
	   {
	   	  return value + value * UKismetMathLibrary::RandomFloatInRange(-modifiers, modifiers);//
	   }
	   break;
	}

	return value;
}

void UCStatusComponent::ApplyDamage(float InDamage)
{
	Health -= InDamage;

	UpdateHealthBar();

	CLog::Log(Health);
}

void UCStatusComponent::UpdateHealthBar()
{
	UWidgetComponent* widget = Cast<UWidgetComponent>(GetOwner()->GetComponentByClass(UWidgetComponent::StaticClass()));

	UCUserWidget_HealthBar* healthBar = Cast<UCUserWidget_HealthBar>(widget->GetUserWidgetObject());
	healthBar->UpdateHealthPoint(Health,MaxHealth);

	CLog::Log(Health);
}
