#include "CAnimNotifyState_Sheath_Sword.h"
#include "Global.h"
#include "Player/CPlayer.h"

FString UCAnimNotifyState_Sheath_Sword::GetNotifyName_Implementation() const
{
	return "Sheath Sword";
}

void UCAnimNotifyState_Sheath_Sword::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);

	CheckNull(MeshComp->GetOwner());
	CheckFalse(MeshComp->GetOwner()->GetClass()->ImplementsInterface(UISword::StaticClass()));

	Cast<IISword>(MeshComp->GetOwner())->Sword_Detach();
}

void UCAnimNotifyState_Sheath_Sword::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	CheckNull(MeshComp->GetOwner());
	CheckFalse(MeshComp->GetOwner()->GetClass()->ImplementsInterface(UISword::StaticClass()));

	Cast<IISword>(MeshComp->GetOwner())->Sword_Sheathed();
}
