#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "CPlayer.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACPlayer : public ACharacter, public IWeapon
{
	GENERATED_BODY()

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

private:
	UFUNCTION()
		void OnCombatTypeChanged(ECombatType InPrevType, ECombatType InNewType);
		//애가 콜이되면 어떤상태로 되는가 분기를 해주겠지.
		//인터페이스를 할당하고 콜해줘.
	UFUNCTION()
		void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);
		//스테이트 컴포넌트의 스테이트를 바꿀거야
		//Native BeginPlayer 에서 걸어주고
		//스테이트 처리 다 되어있으니까 여기로 넘어 갈거 아니야.

public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	void Begin_SwordEvent();

public:
	void AttachSwordEvent();
	void End_SwordEvent();

public: 
	void Attack();
public : 
	void EndAttack();
private:
	class ACWeapon* Weapon; //어떤 물체를 가지고 주무기가 뭔지 현재무기
	class ACWeapon_Sword* Sword; 
};
