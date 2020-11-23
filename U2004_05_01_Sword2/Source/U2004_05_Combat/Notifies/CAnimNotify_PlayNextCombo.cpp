#include "CAnimNotify_PlayNextCombo.h"
#include "Global.h"
#include "Interfaces/IWeapon.h"
#include "Weapons/CWeapon.h"
#include "Weapons/CCombo.h"

FString UCAnimNotify_PlayNextCombo::GetNotifyName_Implementation() const
{
	return "Play Next Combo";
}

void UCAnimNotify_PlayNextCombo::Notify(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	Super::Notify(MeshComp, Animation);

	CheckNull(MeshComp->GetOwner());
	CheckFalse(MeshComp->GetOwner()->GetClass()->ImplementsInterface(UIWeapon::StaticClass()));

	ACWeapon* weapon = Cast<IIWeapon>(MeshComp->GetOwner())->GetWeapon_Current();
	Cast<ACCombo>(weapon)->PlayNextCombo();
}
