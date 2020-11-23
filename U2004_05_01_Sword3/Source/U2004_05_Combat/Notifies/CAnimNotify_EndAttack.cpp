#include "CAnimNotify_EndAttack.h"
#include "Global.h"
#include "Interfaces/IWeapon.h"
#include "Weapons/CWeapon.h"
#include "Weapons/CCombo.h"

FString UCAnimNotify_EndAttack::GetNotifyName_Implementation() const
{
	return "End Attack";
}

void UCAnimNotify_EndAttack::Notify(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	Super::Notify(MeshComp, Animation);

	CheckNull(MeshComp->GetOwner());
	CheckFalse(MeshComp->GetOwner()->GetClass()->ImplementsInterface(UIWeapon::StaticClass()));

	ACWeapon* weapon = Cast<IIWeapon>(MeshComp->GetOwner())->GetWeapon_Current();
	weapon->EndAttack();
}
