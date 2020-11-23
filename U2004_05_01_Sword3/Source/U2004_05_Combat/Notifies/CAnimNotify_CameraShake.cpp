#include "CAnimNotify_CameraShake.h"
#include "Global.h"
#include "Interfaces/IWeapon.h"
#include "Weapons/CWeapon.h"
#include "Weapons/CCombo.h"
#include "Player/CPlayer.h"

UCAnimNotify_CameraShake::UCAnimNotify_CameraShake()
{
	CContentFinder::GetClass<UCameraShake>(&CameraShakeClass, "Blueprint'/Game/Player/BP_CameraShake.BP_CameraShake_C'");
}

FString UCAnimNotify_CameraShake::GetNotifyName_Implementation() const
{
	return "Camera Shake";
}

void UCAnimNotify_CameraShake::Notify(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	Super::Notify(MeshComp, Animation);

	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);
	
	APlayerController* controller = player->GetWorld()->GetFirstPlayerController();
	controller->PlayerCameraManager->PlayCameraShake(CameraShakeClass);
}
