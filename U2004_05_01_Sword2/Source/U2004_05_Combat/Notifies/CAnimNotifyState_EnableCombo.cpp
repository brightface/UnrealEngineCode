#include "CAnimNotifyState_EnableCombo.h"
#include "Global.h"
#include "Interfaces/IWeapon.h"
#include "Weapons/CWeapon.h"
#include "Weapons/CCombo.h"

FString UCAnimNotifyState_EnableCombo::GetNotifyName_Implementation() const
{
	return "Enable Combo";
}

void UCAnimNotifyState_EnableCombo::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);

	CheckNull(MeshComp->GetOwner());
	CheckFalse(MeshComp->GetOwner()->GetClass()->ImplementsInterface(UIWeapon::StaticClass()));
	
	ACWeapon* weapon  = Cast<IIWeapon>(MeshComp->GetOwner())->GetWeapon_Current();
	Cast<ACCombo>(weapon)->EnableNextCombo();
}

void UCAnimNotifyState_EnableCombo::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	CheckNull(MeshComp->GetOwner());
	CheckFalse(MeshComp->GetOwner()->GetClass()->ImplementsInterface(UIWeapon::StaticClass()));

	ACWeapon* weapon = Cast<IIWeapon>(MeshComp->GetOwner())->GetWeapon_Current();
	Cast<ACCombo>(weapon)->DisableNextCombo();
}
