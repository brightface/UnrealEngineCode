#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CEquipmentComponent.h"
#include "Components/CStateManagerComponent.h"
#include "Components/CCollisionComponent.h"
#include "CPlayer.generated.h"

UCLASS()
class U2004_04_BATTLE_API ACPlayer : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* FollowCamera;

	
	UPROPERTY(EditAnywhere, Category = "CollisionSocket")
		TArray<FName> LeftHandCollisionSocket = { "LeftHand_01" };

	UPROPERTY(EditAnywhere, Category = "CollisionSocket")
		TArray<FName> RightHandCollisionSocket = { "RightHand_01" };

	UPROPERTY(EditAnywhere, Category = "CollisionSocket")
		TArray<FName> LeftFootCollisionSocket = { "LeftFoot_01" };

	UPROPERTY(EditAnywhere, Category = "CollisionSocket")
		TArray<FName> RightFootCollisionSocket = { "RightFoot_01" };

private:
	UPROPERTY(VisibleDefaultsOnly)
		class UCEquipmentComponent* Equipment;

	UPROPERTY(VisibleDefaultsOnly)
		class UCMontagesComponent* Montages;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStateManagerComponent* StateManager;

	UPROPERTY(VisibleDefaultsOnly)
		class UCCollisionComponent* Collision;

public:
	ACPlayer();

public:
	FORCEINLINE class UCEquipmentComponent* GetEquipment() { return Equipment; }
	FORCEINLINE class UCStateManagerComponent* GetStateManager() { return StateManager; }

public:
	void ToggleCombat();
	void MeleeAttack(EMeleeAttackType InType);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
		void OnStateChanged(EState InPrevState, EState InNewState);

	UFUNCTION()
		void OnCollisionActivated(ECollisionPart InPart);

	UFUNCTION()
		void OnCollisionDeactivated();

	UFUNCTION()
		void OnCollisionApplyActorDamage(FHitResult InHitResult);

	UFUNCTION()
		void ResetMeleeAttackCounter();

private:
	EMeleeAttackType MeleeAttackType;
	uint32 MeleeAttackCounter;
};
