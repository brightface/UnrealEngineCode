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
	//CheckNull(player);
	//이걸 적에다 붙일건지 아닐지 적이 있는걸지 모르지
	if (player != NULL)//플레이어걸 켜야하니까 
		player->OnBodyCollider(ColliderPart);


	/*UActorComponent* actorComponent = player->GetComponentByClass(UCCollisionComponent::StaticClass());
	UCCollisionComponent* component = Cast<UCCollisionComponent>(actorComponent);
	component->Activation();*/
}

void UCAnimNotifyState_Collision::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	//CheckNull(player);
	if (player != NULL)
		player->OffBodyCollider(ColliderPart);
		//offBodyCollider()에 노티파이 다 붙어있다. 어제 
	//UActorComponent* actorComponent = player->GetComponentByClass(UCCollisionComponent::StaticClass());
	//UCCollisionComponent* component = Cast<UCCollisionComponent>(actorComponent);
	//component->Deactivate();
}


