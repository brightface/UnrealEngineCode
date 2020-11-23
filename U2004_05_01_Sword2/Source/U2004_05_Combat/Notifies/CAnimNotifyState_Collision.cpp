#include "CAnimNotifyState_Collision.h"
#include "Global.h"
#include "Interfaces/IWeapon.h"
#include "Weapons/CWeapon.h"
#include "Weapons/CCombo.h"

FString UCAnimNotifyState_Collision::GetNotifyName_Implementation() const
{
	return "Collision";
}

void UCAnimNotifyState_Collision::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);

	CheckNull(MeshComp->GetOwner());
	CheckFalse(MeshComp->GetOwner()->GetClass()->ImplementsInterface(UIWeapon::StaticClass()));

	ACWeapon* weapon = Cast<IIWeapon>(MeshComp->GetOwner())->GetWeapon_Current();
	Cast<ACCombo>(weapon)->OnCollision();
}

void UCAnimNotifyState_Collision::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	CheckNull(MeshComp->GetOwner());
	CheckFalse(MeshComp->GetOwner()->GetClass()->ImplementsInterface(UIWeapon::StaticClass()));

	ACWeapon* weapon = Cast<IIWeapon>(MeshComp->GetOwner())->GetWeapon_Current();
	Cast<ACCombo>(weapon)->OffCollision();
}
