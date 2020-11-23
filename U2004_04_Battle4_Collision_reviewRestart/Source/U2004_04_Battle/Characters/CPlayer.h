#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CEquipmentComponent.h"
#include "Components/CStateManagerComponent.h"
#include "Components/CCollisionComponent.h"
#include "CPlayer.generated.h"

UENUM(BlueprintType)
enum class EBodyColliderPart : uint8
{
	LeftHand = 0, RightHand, LeftFoot, RightFoot, Max
};

UCLASS()
class U2004_04_BATTLE_API ACPlayer : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* FollowCamera;


private:
	UPROPERTY(VisibleDefaultsOnly)
		class UCEquipmentComponent* Equipment;

	UPROPERTY(VisibleDefaultsOnly)
		class UCMontagesComponent* Montages;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStateManagerComponent* StateManager;

	UPROPERTY(VisibleDefaultsOnly)
		class UCCollisionComponent* Collision;

	UPROPERTY(VisibleDefaultsOnly)
		class USphereComponent* BodyColliders[(int)EBodyColliderPart::Max];


public:
	ACPlayer();

public:
	FORCEINLINE class UCEquipmentComponent* GetEquipment() { return Equipment; }
	FORCEINLINE class UCStateManagerComponent* GetStateManager() { return StateManager; }

public:
	void ToggleCombat();
	void MeleeAttack(EMeleeAttackType InType);

	//충돌체 시킬 collider
	void OnBodyCollider();
	void OffBodyCollider();


protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
		void OnStateChanged(EState InPrevState, EState InNewState);

	
	UFUNCTION()
		void OnCollisionApplyActorDamage(FHitResult InHitResult);

	UFUNCTION()
		void ResetMeleeAttackCounter();

	UFUNCTION()
		void OnBodyColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);


private:
	EMeleeAttackType MeleeAttackType;
	uint32 MeleeAttackCounter;
	TMap<class USphereComponent*, TArray<AActor *>> HittedMap;
};
