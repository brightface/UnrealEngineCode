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
		//�ְ� ���̵Ǹ� ����·� �Ǵ°� �б⸦ ���ְ���.
		//�������̽��� �Ҵ��ϰ� ������.
	UFUNCTION()
		void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);
		//������Ʈ ������Ʈ�� ������Ʈ�� �ٲܰž�
		//Native BeginPlayer ���� �ɾ��ְ�
		//������Ʈ ó�� �� �Ǿ������ϱ� ����� �Ѿ� ���� �ƴϾ�.

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
	class ACWeapon* Weapon; //� ��ü�� ������ �ֹ��Ⱑ ���� ���繫��
	class ACWeapon_Sword* Sword; 
};
