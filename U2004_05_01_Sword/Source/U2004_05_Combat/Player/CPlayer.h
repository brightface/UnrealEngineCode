#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/IWeapon.h"
#include "Components/CStateComponent.h"
#include "CPlayer.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACPlayer : public ACharacter, public IIWeapon
{
	GENERATED_BODY()

private:
	friend class ACPlayerController;

private:
	UPROPERTY(EditInstanceOnly, Category = "Weapon")
		FName HolsterSwordSocket = "Holster_Sword";

	UPROPERTY(EditInstanceOnly, Category = "Weapon")
		FName SwordSocket = "Sword";

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* FollowCamera;

private:
	UPROPERTY(VisibleDefaultsOnly)
		class UCOptionComponent* OptionComponent;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStateComponent* StateComponent;

public:
	UFUNCTION(BlueprintPure, BlueprintCallable)
		FORCEINLINE class UCOptionComponent* GetOptionComponent() { return OptionComponent; }

	UFUNCTION(BlueprintPure, BlueprintCallable)
		FORCEINLINE class UCStateComponent* GetStateComponent() { return StateComponent; }

public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	virtual UCStateComponent* GetWeapon_StateComponent() const override;
	virtual class ACWeapon* GetWeapon_Current() const override;

private:
	void Equip_Sword();
	void Sheath_Sword();

public:
	void Attach_Sword();
	void Detach_Sword();
	void Equipped_Sword();
	void Sheathed_Sword();

private:
	void Attack();

private:
	class ACWeapon* CurrWeapon;
	class ACCombo_Sword* Sword;
};