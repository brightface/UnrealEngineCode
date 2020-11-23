#include "CMontagesComponent.h"
#include "Global.h"
#include "Characters/CPlayer.h"

UCMontagesComponent::UCMontagesComponent()
{

}

TArray<FMontageAction> UCMontagesComponent::GetMontagesForType(EMontageType InType)
{   
	ACPlayer* player = Cast<ACPlayer>(GetOwner());
	//매개변수 InType 에 따른 키 네임을 리턴해줄거다     
	FString name = "";
	switch(player->GetEquipment()->GetCombatType())//GetCombatType()에따라 문자열을 만들거다
	{
		case ECombatType::Unarmed: name = "Fist";//name에다 Fist를 줄거다 
	}

	TArray<FMontageAction> result;
	CheckFalseResult(name.Len() > 0, result);

	const TArray<FMontageAction>& actions = MontageActionMap[name];//name에 Fist를 넣어줬다 키 네임이다 Fist라는 이름으로 찾아온다 
	for (const FMontageAction& action : actions)//찾은 상태에서 for문
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

	AddDataTable("Fist", "/Game/DataTables/");//데이터 테이블을 불러올거다

	PrintDataTable();
}

void UCMontagesComponent::AddDataTable(FString Name, FString Path)
{
	FString name = Name + "_Montages_Table";
	Path.Append(name);//Append 문자열 뒤에다 더해주는거다 Path는 풀Path가 된다

	UDataTable* dataTable;
	CContentFinder::GetAssetDynamic<UDataTable>(&dataTable, Path);//데이터 테이블을 Path로 통해 불러온다

	TArray<FMontageAction_Asset *> assets; //원본 자료형
	dataTable->GetAllRows("", assets);//불러온데이터가 assets에 들어온다
   
	//for문으로 돌려서 데이터들을 우리 구조체에다 다 넣어주고TMap에다 넣어줄거다
	TArray<FMontageAction>actions;
	for (const FMontageAction_Asset* asset : assets)
	{
		FMontageAction action; 
		action.Action = (EMontageType)asset->Action;

		FString path = asset->Montage;//경로 로 몽타주를 불러드릴거다
		CContentFinder::GetAssetDynamic<UAnimMontage>(&action.Montage, path);//우리 구조체 몽타주에다 넣을거다

		action.PlayRatio = asset->PlayRatio;

		actions.Add(action);
	}
	
	MontageActionMap.Add(Name, actions);//Name이 Fist이니깐  Fist에 Actions이 Map에 들어가겠다
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