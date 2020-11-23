#include "Global.h"
#include "CStatusComponent.h"

UCStatusComponent::UCStatusComponent()
{

	PrimaryComponentTick.bCanEverTick = true;

	
	// ...
}


void UCStatusComponent::BeginPlay()
{
	Super::BeginPlay();
	
	
	FString tablePath = "";
	tablePath =FString::Printf(TEXT("DataTable'/Game/DataTables/%s.%s'"), *TableName, *TableName);
	CContentFinder::GetAsset<UDataTable>(&DataTable, tablePath);
	DataTable->GetAllRows<FStatusData>("", Datas);//����Ÿ ���̺� �� ����°���

	InitialHealth = GetValue(EStatusType::Health, false);


	
}



int UCStatusComponent::GetValue(EStatusType InType)
{
	for (int32 i = 0; i < Datas.Num(); i++)
	{
		if (Datas[i]->Type == InType)
			return Datas[i]->Value;
	}
	return 0;
}

float UCStatusComponent::GetValue(EStatusType InType, bool ApplyModifiers)
{
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
	CheckTrueResult(modifiers <= 0.0f, value);
	//������̾

	//TODO : ����

	//modifier�� ������ �ϴ°�
	CheckFalseResult(ApplyModifiers, value);
	//false �� value�� �����ϸ��

	//float random = FMath::RandRange(-modifiers, modifiers);
	//return value += (value * random);

	return ApplyModifierValue(InType, value, modifiers);
}

float UCStatusComponent::ApplyModifierValue(EStatusType InType, float Value, float Modifiers)
{
	float random = 0.0f;
	switch (InType)
	{
		case EStatusType::Power:
		{
			random = FMath::RandRange(-Modifiers, Modifiers);
			return Value += (Value * random);
		}
	}
	return Value;
}

