#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CEnemy.generated.h"

UCLASS()
class U2004_04_BATTLE_API ACEnemy : public ACharacter
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleDefaultsOnly)
		class UWidgetComponent* HealthBar;

protected:
	UPROPERTY(VisibleDefaultsOnly)
		class UCEquipmentComponent* Equipment;

	UPROPERTY(VisibleDefaultsOnly)
		class UCMontagesComponent* Montages;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStateComponent* State;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStatusComponent* Status;
public:
	ACEnemy();
   

protected:
	virtual void BeginPlay() override;

public:		
	virtual void Tick(float DeltaTime) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
private:
	virtual float TakeDamage_Child(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);
};
