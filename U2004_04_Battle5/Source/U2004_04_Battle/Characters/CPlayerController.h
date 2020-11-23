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
		float HorizontalLookRate = 45;//마우스 감도

	UPROPERTY(EditAnywhere, Category = "Camera")
		float VerticalLookRate = 45;//마우스 감도

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
	virtual void SetupInputComponent()override;

private: //Bind Axis
	void OnHorizontalLook(float Axis);
	void OnVerticalLook(float Axis);
	void OnMoveForward(float Axis);
	void OnMoveRight(float Axis);

private: //Bind Action
	void OnToggleCombat();
	void OnAttack();

public: //Delegation 으로 호출되는것
	UFUNCTION()//델리게이셔은 UFUNCTION 이 붙는다
		void OnInputBufferConsumed(EInputBufferKey InKey);// 키 상황에 분기를 넣을거다

	UFUNCTION()
		void OnInputBufferClose();

private:
	class ACPlayer* Player;
	class UInputComponent* Input;
};
