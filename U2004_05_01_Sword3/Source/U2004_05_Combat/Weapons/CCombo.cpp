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

	TArray<FComboMontage_Asset *> assets;
	DataTable->GetAllRows("", assets);

	for (const FComboMontage_Asset* asset : assets)
	{
		FComboMontage montage;

		FString path = FString::Printf(L"AnimMontage'/Game/Character/Montages/Sword/%s.%s'", *asset->MontagePath, *asset->MontagePath);		
		CContentFinder::GetAssetDynamic<UAnimMontage>(&montage.Montage, path);

		montage.PlayRatio = asset->PlayRatio;
		montage.StartSection = asset->StartSection;
		montage.bCanMove = asset->bCanMove;
		montage.Power = asset->Power;

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

		Power = Montages[Count].Power;
		PlayComboMontage();

		return;
	}

	bEnable = false;

	Power = Montages[Count].Power;
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