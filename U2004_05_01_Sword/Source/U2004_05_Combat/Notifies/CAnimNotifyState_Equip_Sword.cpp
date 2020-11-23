#include "CAnimNotifyState_Equip_Sword.h"
#include "Global.h"
#include "Player/CPlayer.h"

FString UCAnimNotifyState_Equip_Sword::GetNotifyName_Implementation() const
{
	return "Equip Sword";
}

void UCAnimNotifyState_Equip_Sword::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	player->Attach_Sword();
}

void UCAnimNotifyState_Equip_Sword::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	player->Equipped_Sword();
}
