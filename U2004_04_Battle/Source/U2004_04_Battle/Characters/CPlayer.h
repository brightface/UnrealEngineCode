#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CInputBufferComponent.h"
#include "CPlayer.generated.h"

UCLASS()
class U2004_04_BATTLE_API ACPlayer : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Camera")
		float HorizontalLookRate = 45;

	UPROPERTY(EditAnywhere, Category = "Camera")
		float VerticalLookRate = 45;

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* FollowCamera;

private:
	UPROPERTY(VisibleDefaultsOnly)
		class UCInputBufferComponent* InputBuffer;

public:
	ACPlayer();


protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private: //Bind Axis
	void OnHorizontalLook(float Axis);
	void OnVerticalLook(float Axis);
	void OnMoveForward(float Axis);
	void OnMoveRight(float Axis);

private: //Bind Action
	void OnToggleCombat();

private: //Delegation
	UFUNCTION()
		void OnInputBufferConsumed(EInputBufferKey InKey);
};
