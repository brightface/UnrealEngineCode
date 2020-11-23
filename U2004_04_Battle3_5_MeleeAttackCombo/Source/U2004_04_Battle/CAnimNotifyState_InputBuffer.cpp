#include "CAnimNotifyState_InputBuffer.h"
#include "Global.h"
#include "Characters/CPlayer.h"
#include "Characters/CPlayerController.h"
#include "Components/CInputBufferComponent.h"

FString UCAnimNotifyState_InputBuffer::GetNotifyName_Implementation() const
{
	return "InputBuffer";
}

void UCAnimNotifyState_InputBuffer::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);

	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	ACPlayerController* controller = player->GetController<ACPlayerController>();
	CheckNull(controller);

	controller->GetInputBuffer()->Open();
}

void UCAnimNotifyState_InputBuffer::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	ACPlayerController* controller = player->GetController<ACPlayerController>();
	CheckNull(controller);

	controller->GetInputBuffer()->Close();
}
