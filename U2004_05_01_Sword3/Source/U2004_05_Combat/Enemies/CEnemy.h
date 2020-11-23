#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CEnemy.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACEnemy : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class UWidgetComponent* HealthBar;

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
	void UpdateHealthBar();

private:
	class UMaterialInstance* BodyMaterialInstance;
	class UMaterialInstance* LogoMaterialInstance;

	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

private:
	TSubclassOf<class UCUserWidget_HealthBar> HealthBarClass;
	float MaxHealth = 100;
	float Health = 100;
};
