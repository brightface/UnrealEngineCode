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
	FString tablePath = FString::Printf(L"DataTable'/Game/Weapons/DataTables/%s_Combo.%s_Combo'", *combatName, *combatName);
	CContentFinder::GetAssetDynamic<UDataTable>(&DataTable, tablePath);
	//데이터테이블 가져오고
	TArray<FComboMontage_Asset *> assets;
	DataTable->GetAllRows("", assets);

	for (const FComboMontage_Asset* asset : assets)
	{
		FComboMontage montage;
		//몽테이지에 몽테이지 패스 가져오고
		FString path = FString::Printf(L"AnimMontage'/Game/Character/Montages/Sword/%s.%s'", *asset->MontagePath, *asset->MontagePath);		
		CContentFinder::GetAssetDynamic<UAnimMontage>(&montage.Montage, path);

		montage.PlayRatio = asset->PlayRatio;
		montage.StartSection = asset->StartSection;
		montage.bCanMove = asset->bCanMove;
		montage.Power = asset->Power;
		//이러면 배열 삽입하는것 끝났고
		Montages.Add(montage);
	}
}

void ACCombo::Attack()
{
	Super::Attack();

	if (bEnable == false) //첫번째 공격
	{
		CheckFalse(CanAttack());

		GetStateComponent()->ChangeStateType(EStateType::Attacking);
		PlayComboMontage();

		return;
	}

	bEnable = false;

	Count++;
	bExist = true;
}

void ACCombo::PlayNextCombo()
{
	CheckFalse(bExist);

	bExist = false;

	if ((Montages.Num() - 1) == Count)
		bLast = true;

	PlayComboMontage();
}

void ACCombo::EndAttack()
{
	GetStateComponent()->ChangeStateType(EStateType::Idle);
	GetStateComponent()->SetCanMove(true);

	bExist = false;
	Count = 0;
	bLast = false;
}

void ACCombo::PlayComboMontage()
{
	const FComboMontage& montage = Montages[Count];
	Cast<ACharacter>(GetOwner())->PlayAnimMontage(montage.Montage, montage.PlayRatio, montage.StartSection);
	
	GetStateComponent()->SetCanMove(montage.bCanMove);
}