#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CEquipmentComponent.h"
#include "Components/CStateComponent.h"
#include "CPlayer.generated.h"

UENUM(BlueprintType)
enum class EBodyColliderPart : uint8
{
	LeftHand = 0,RightHand, LeftFoot, RightFoot,Max
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

	UPROPERTY(VisibleDefaultsOnly)
		class USphereComponent* BodyColliders[(int)EBodyColliderPart::Max];//충돌체
 
private:
	UPROPERTY(VisibleDefaultsOnly)
		class UCEquipmentComponent* Equipment;

	UPROPERTY(VisibleDefaultsOnly)
		class UCMontagesComponent* Montages;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStateComponent* State;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStatusComponent* Status;

public:
	ACPlayer();

public:
	FORCEINLINE class UCEquipmentComponent* GetEquipment() { return Equipment; }
	FORCEINLINE class UCStateComponent* GetState() { return State; } //상태관리

public:
	void ToggleCombat();
	void MeleeAttack(EMeleeAttackType InType);

	void OnBodyCollider(EBodyColliderPart InPart);
	void OffBodyCollider(EBodyColliderPart InPart);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UFUNCTION()
		void OnStateChanged(EState InPreState, EState InNewState); 

	UFUNCTION()
	   void ResetMeleeAttackCounter();

	UFUNCTION()
	   void OnBodyColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

private:
	EMeleeAttackType MeleeAttackType;
	uint32 MeleeAttackCounter;//콤보 개수 올려준다

	TMap<class USphereComponent*, TArray<AActor*>>HittedMap;//TArray는 충돌된 액터가들어간다
};
