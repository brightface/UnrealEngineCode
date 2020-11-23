#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CEnemy.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	ACEnemy();

protected:
	virtual void BeginPlay() override;

public:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

private:
	UFUNCTION()
		void ResetColor();

private:
	class UMaterialInstance* BodyMaterialInstance;
	class UMaterialInstance* LogoMaterialInstance;

	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

private:
	float Health = 100;
};
