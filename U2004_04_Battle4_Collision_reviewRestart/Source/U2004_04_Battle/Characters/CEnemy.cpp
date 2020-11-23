#include "CEnemy.h"
#include "Global.h"
#include "Components/CEquipmentComponent.h"
#include "Components/CMontagesComponent.h"
#include "Components/CStateManagerComponent.h"

ACEnemy::ACEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	GetMesh()->RelativeLocation = FVector(0, 0, -90);
	GetMesh()->RelativeRotation = FRotator(0, -90, 0);


	Equipment = CreateDefaultSubobject<UCEquipmentComponent>("Equipment");
	Montages = CreateDefaultSubobject<UCMontagesComponent>("Montages");
	StateManager = CreateDefaultSubobject<UCStateManagerComponent>("StateManager");
}

void ACEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}