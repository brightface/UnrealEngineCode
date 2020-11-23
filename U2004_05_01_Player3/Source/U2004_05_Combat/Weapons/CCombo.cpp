#include "CCombo.h"
#include "Global.h"

ACCombo::ACCombo()
{

}

void ACCombo::BeginPlay()
{
	Super::BeginPlay();

	const UEnum* combatType = FindObject<UEnum>(ANY_PACKAGE, L"ECombatType", true);
	FString combatName = combatType->GetNameStringByIndex((int32)CombatType);
	FString tablePath = FString::Printf(L"DataTable'/Game/Weapons/DataTables/%s_Combo.%s_Combo'", *combatName);
	CContentFinder::GetAssetDynamic<UDataTable>(&DataTable, tablePath);

	//TODO: 배열에 데이터 삽입 : 데이터를 불러오는건 했는데 넣는건 안했다.
}

void ACCombo::Attack()
{
	Super::Attack();

	if (bEnable == false) //첫번째 공격
	{
		CheckFalse(CanAttack()); //공격불가판단해서 바로끝내기

		GetStateComponent()->ChangeStateType(EStateType::Attacking); //스테이트 처리 - 공격으로바뀐다.

		//TODO: Play Combo Montage

		return;
	}

	bEnable = false; //더이상 입력받지 못하도록 하고 다음공격 있다한다.

	Count++; //다음공격 넘어가기위한 카운트
	bExist = true;
}

void ACCombo::PlayNextCombo()
{
	CheckFalse(bExist);

	bExist = false;
	//존재하지 않는다.

	//몽테이지의 사이즈가 같다. 마지막 공격
	if ((Montages.Num() - 1) == Count)
		bLast = true;

	//TODO: Play Combo Montage
}

//오버라이드다.
void ACCombo::EndAttack()
{	//스테이드 기본으로 바꾼다.
	GetStateComponent()->ChangeStateType(EStateType::Idle);
	GetStateComponent()->SetCanMove(true); //움직일수 없도록 몽타주에서 할것이기 때문에 이제 끝났으니 움직일수 있게한다.

	bExist = false;
	Count = 0;
	bLast = false;
}