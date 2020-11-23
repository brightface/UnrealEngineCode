#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPlayerController.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACPlayerController();

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
	void OnWalk();
	void OffWalk();
	void OnJumpAndRoll();
	void OffJumpAndRoll();

	void OnLeftHanded();
	void OnSword();
	void OnWizard();
	void OnAttack();

private:
	class ACPlayer* Player;
	class UInputComponent* Input;
	class UCOptionComponent* Option;
	class UCStateComponent* State;
};
