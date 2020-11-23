#include "CAnimNotifyState_Equip_Sword.h"
#include "Global.h"
#include "Player/CPlayer.h"
#include "Interfaces/ISword.h"

FString UCAnimNotifyState_Equip_Sword::GetNotifyName_Implementation() const
{
	return "Equip Sword";
}

void UCAnimNotifyState_Equip_Sword::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);

	CheckNull(MeshComp->GetOwner());
	CheckFalse(MeshComp->GetOwner()->GetClass()->ImplementsInterface(UISword::StaticClass()));

	Cast<IISword>(MeshComp->GetOwner())->Sword_Attach();
}

void UCAnimNotifyState_Equip_Sword::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	CheckNull(MeshComp->GetOwner());
	CheckFalse(MeshComp->GetOwner()->GetClass()->ImplementsInterface(UISword::StaticClass()));

	Cast<IISword>(MeshComp->GetOwner())->Sword_Equipped();
}
