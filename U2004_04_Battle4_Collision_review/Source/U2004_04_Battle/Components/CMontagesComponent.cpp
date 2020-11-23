#include "CMontagesComponent.h"
#include "Global.h"
#include "Characters/CPlayer.h"

UCMontagesComponent::UCMontagesComponent()
{
	
}


TArray<FMontageAction> UCMontagesComponent::GetMontagesForType(EMontageType InType)
{
	ACPlayer* player = Cast<ACPlayer>(GetOwner());

	FString name = "";
	switch (player->GetEquipment()->GetCombatType())
	{
		case ECombatType::Unarmed: name = "Fist";
	}

	
	TArray<FMontageAction> result;
	CheckFalseResult(name.Len() > 0, result);
	
	const TArray<FMontageAction>& actions = MontageActionMap[name];
	for (const FMontageAction& action : actions)
	{
		if (action.Action == InType)
		{
			result.Add(action);
		}
			
	}

	return result;
}

void UCMontagesComponent::BeginPlay()
{
	Super::BeginPlay();
	
	AddDataTable("Fist", "/Game/DataTables/");

	PrintDataTable();
}

void UCMontagesComponent::AddDataTable(FString Name, FString Path)
{
	FString name = Name + "_Montages_Table";
	Path.Append(name);

	UDataTable* dataTable;
	CContentFinder::GetAssetDynamic<UDataTable>(&dataTable, Path);

	TArray<FMontageAction_Asset *> assets;
	dataTable->GetAllRows("", assets);


	TArray<FMontageAction> actions;
	for (const FMontageAction_Asset* asset : assets)
	{
		FMontageAction action;
		action.Action = (EMontageType)asset->Action;

		FString path = asset->Montage;
		CContentFinder::GetAssetDynamic<UAnimMontage>(&action.Montage, path);

		action.PlayRatio = asset->PlayRatio;

		actions.Add(action);
	}

	MontageActionMap.Add(Name, actions);
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