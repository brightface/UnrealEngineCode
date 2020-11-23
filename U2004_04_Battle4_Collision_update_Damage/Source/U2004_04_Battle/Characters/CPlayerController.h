#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Components/CInputBufferComponent.h"
#include "CPlayerController.generated.h"

UCLASS()
class U2004_04_BATTLE_API ACPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Camera")
		float HorizontalLookRate = 45;

	UPROPERTY(EditAnywhere, Category = "Camera")
		float VerticalLookRate = 45;

private:
	UPROPERTY(VisibleDefaultsOnly)
		class UCInputBufferComponent* InputBuffer;

public:
	ACPlayerController();

public:
	FORCEINLINE class UCInputBufferComponent* GetInputBuffer() { return InputBuffer; }

protected:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* aPawn) override;
	virtual void SetupInputComponent() override;

private: //Bind Axis
	void OnHorizontalLook(float Axis);
	void OnVerticalLook(float Axis);
	void OnMoveForward(float Axis);
	void OnMoveRight(float Axis);

private: //Bind Action
	void OnToggleCombat();

	void OnAttack();

private: //Delegation
	UFUNCTION()
		void OnInputBufferConsumed(EInputBufferKey InKey);

	UFUNCTION()
		void OnInputBuferClose();

private:
	class ACPlayer* Player;
	class UInputComponent* Input;
};