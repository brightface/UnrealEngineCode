#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CEnemy.generated.h"

UCLASS()
class U2004_04_BATTLE_API ACEnemy : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class UCEquipmentComponent* Equipment;

	UPROPERTY(VisibleDefaultsOnly)
		class UCMontagesComponent* Montages;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStateManagerComponent* StateManager;

public:
	ACEnemy();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
};
