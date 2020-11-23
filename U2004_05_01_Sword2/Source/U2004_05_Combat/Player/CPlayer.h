#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/IWeapon.h"
#include "Interfaces/ISword.h"
#include "Components/CStateComponent.h"
#include "CPlayer.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACPlayer 
	: public ACharacter
	, public IIWeapon, public IISword
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
	void Sword_Equip() override;
	void Sword_Sheath() override;

public:
	void Sword_Attach() override;
	void Sword_Detach() override;
	void Sword_Equipped() override;
	void Sword_Sheathed() override;

private:
	void Attack();

private:
	class ACWeapon* CurrWeapon;

	TSubclassOf<class ACCombo_Sword> SwordClass;
	class ACCombo_Sword* Sword;
};