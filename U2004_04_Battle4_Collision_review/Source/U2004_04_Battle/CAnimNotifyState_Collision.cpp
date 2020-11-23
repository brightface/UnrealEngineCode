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
	CheckNull(player);

	UActorComponent* actorComponent = player->GetComponentByClass(UCCollisionComponent::StaticClass());
	UCCollisionComponent* component = Cast<UCCollisionComponent>(actorComponent);
	component->Activation(CollisionPart);
}

void UCAnimNotifyState_Collision::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	UActorComponent* actorComponent = player->GetComponentByClass(UCCollisionComponent::StaticClass());
	UCCollisionComponent* component = Cast<UCCollisionComponent>(actorComponent);
	component->Deactivate();
}


