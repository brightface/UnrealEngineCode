#include "CAnimNotifyState_Sword.h"
#include "Global.h"
#include "Player/CPlayer.h"

FString UCAnimNotifyState_Sword::GetNotifyName_Implementation() const
{
	return "Sword Event";
}

void UCAnimNotifyState_Sword::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);
	//칼 등장시키고 붙인다.
	player->AttachSwordEvent();
}

void UCAnimNotifyState_Sword::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);
	//끝낸다.
	player->End_SwordEvent();
}
