#include "CAnimNotifyState_Sheath_Sword.h"
#include "Global.h"
#include "Player/CPlayer.h"

FString UCAnimNotifyState_Sheath_Sword::GetNotifyName_Implementation() const
{
	return "Sheath Sword";
}

void UCAnimNotifyState_Sheath_Sword::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	player->Detach_Sword();
}

void UCAnimNotifyState_Sheath_Sword::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	player->Sheathed_Sword();
}
