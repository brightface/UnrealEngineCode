#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPlayerController.generated.h"

UCLASS()
class U2004_05_COMBAT_API ACPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Camera")
		float HorizontalLookRate = 45;

	UPROPERTY(EditAnywhere, Category = "Camera")
		float VerticalLookRate = 45;

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
	void OnInCombat();

	void OnAttack();

private:
	class ACPlayer* Player;
	class UInputComponent* Input;
};
