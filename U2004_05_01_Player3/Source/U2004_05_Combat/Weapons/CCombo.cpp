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

	//TODO: �迭�� ������ ���� : �����͸� �ҷ����°� �ߴµ� �ִ°� ���ߴ�.
}

void ACCombo::Attack()
{
	Super::Attack();

	if (bEnable == false) //ù��° ����
	{
		CheckFalse(CanAttack()); //���ݺҰ��Ǵ��ؼ� �ٷγ�����

		GetStateComponent()->ChangeStateType(EStateType::Attacking); //������Ʈ ó�� - �������ιٲ��.

		//TODO: Play Combo Montage

		return;
	}

	bEnable = false; //���̻� �Է¹��� ���ϵ��� �ϰ� �������� �ִ��Ѵ�.

	Count++; //�������� �Ѿ������ ī��Ʈ
	bExist = true;
}

void ACCombo::PlayNextCombo()
{
	CheckFalse(bExist);

	bExist = false;
	//�������� �ʴ´�.

	//���������� ����� ����. ������ ����
	if ((Montages.Num() - 1) == Count)
		bLast = true;

	//TODO: Play Combo Montage
}

//�������̵��.
void ACCombo::EndAttack()
{	//�����̵� �⺻���� �ٲ۴�.
	GetStateComponent()->ChangeStateType(EStateType::Idle);
	GetStateComponent()->SetCanMove(true); //�����ϼ� ������ ��Ÿ�ֿ��� �Ұ��̱� ������ ���� �������� �����ϼ� �ְ��Ѵ�.

	bExist = false;
	Count = 0;
	bLast = false;
}