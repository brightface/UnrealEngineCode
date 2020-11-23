#include "CAnimNotifyState_Collision.h"
#include "Global.h"
#include "Characters/CPlayer.h"

FString UCAnimNotifyState_Collision::GetNotifyName_Implementation() const
{
	return "CollisionPart";
}

void UCAnimNotifyState_Collision::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);

	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	if (player != NULL)//player 꺼를 해줄려고
		player->OnBodyCollider(ColliderPart);

}

void UCAnimNotifyState_Collision::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	Super::NotifyEnd(MeshComp, Animation);
		

	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	if (player != NULL)
		player->OffBodyCollider(ColliderPart);

	
}
