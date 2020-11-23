#include "CPlayer.h"
#include "Global.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

ACPlayer::ACPlayer()
{
	PrimaryActorTick.bCanEverTick = true;


	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0, 540, 0);


	USkeletalMesh* characterMesh;
	CContentFinder::GetAsset<USkeletalMesh>(&characterMesh, "SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
	GetMesh()->SetSkeletalMesh(characterMesh);
	GetMesh()->RelativeLocation = FVector(0, 0, -90);
	GetMesh()->RelativeRotation = FRotator(0, -90, 0);

	
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetCapsuleComponent());

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("FollowCamera");
	FollowCamera->SetupAttachment(CameraBoom);

	FollowCamera->RelativeLocation = FVector(-16, 80, 33);
	FollowCamera->RelativeRotation = FRotator(-10, 0, 0);
}

void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
