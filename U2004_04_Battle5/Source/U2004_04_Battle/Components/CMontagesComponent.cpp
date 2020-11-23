#include "CMontagesComponent.h"
#include "Global.h"
#include "Characters/CPlayer.h"

UCMontagesComponent::UCMontagesComponent()
{

}

TArray<FMontageAction> UCMontagesComponent::GetMontagesForType(EMontageType InType)
{   
	ACPlayer* player = Cast<ACPlayer>(GetOwner());
	//�Ű����� InType �� ���� Ű ������ �������ٰŴ�     
	FString name = "";
	switch(player->GetEquipment()->GetCombatType())//GetCombatType()������ ���ڿ��� ����Ŵ�
	{
		case ECombatType::Unarmed: name = "Fist";//name���� Fist�� �ٰŴ� 
	}

	TArray<FMontageAction> result;
	CheckFalseResult(name.Len() > 0, result);

	const TArray<FMontageAction>& actions = MontageActionMap[name];//name�� Fist�� �־���� Ű �����̴� Fist��� �̸����� ã�ƿ´� 
	for (const FMontageAction& action : actions)//ã�� ���¿��� for��
	{
		FString str;
		str.Append(FString::FromInt((int)action.Action));
		str.Append("/");
		str.Append(FString::FromInt((int)InType));

		if (action.Action == InType)//
			result.Add(action);
	}


	return result;
}

void UCMontagesComponent::BeginPlay()
{
	Super::BeginPlay();

	AddDataTable("Fist", "/Game/DataTables/");//������ ���̺��� �ҷ��ðŴ�

	PrintDataTable();
}

void UCMontagesComponent::AddDataTable(FString Name, FString Path)
{
	FString name = Name + "_Montages_Table";
	Path.Append(name);//Append ���ڿ� �ڿ��� �����ִ°Ŵ� Path�� ǮPath�� �ȴ�

	UDataTable* dataTable;
	CContentFinder::GetAssetDynamic<UDataTable>(&dataTable, Path);//������ ���̺��� Path�� ���� �ҷ��´�

	TArray<FMontageAction_Asset *> assets; //���� �ڷ���
	dataTable->GetAllRows("", assets);//�ҷ��µ����Ͱ� assets�� ���´�
   
	//for������ ������ �����͵��� �츮 ����ü���� �� �־��ְ�TMap���� �־��ٰŴ�
	TArray<FMontageAction>actions;
	for (const FMontageAction_Asset* asset : assets)
	{
		FMontageAction action; 
		action.Action = (EMontageType)asset->Action;

		FString path = asset->Montage;//��� �� ��Ÿ�ָ� �ҷ��帱�Ŵ�
		CContentFinder::GetAssetDynamic<UAnimMontage>(&action.Montage, path);//�츮 ����ü ��Ÿ�ֿ��� �����Ŵ�

		action.PlayRatio = asset->PlayRatio;

		actions.Add(action);
	}
	
	MontageActionMap.Add(Name, actions);//Name�� Fist�̴ϱ�  Fist�� Actions�� Map�� ���ڴ�
}

void UCMontagesComponent::PrintDataTable()
{
	for (const TPair<FString, TArray<FMontageAction>>& pair : MontageActionMap)
	{
		CLog::Log("DataTable : " + pair.Key);

		for (const FMontageAction& action : pair.Value)
		{
			FString str = "";
			str.Append(FString::FromInt((int)action.Action));
			str.Append(" / ");
			str.Append(action.Montage->GetPathName());

			CLog::Log(str);
		}
	}
}