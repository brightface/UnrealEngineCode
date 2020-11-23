#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CInputBufferComponent.generated.h"

UENUM(BlueprintType)
enum class EInputBufferKey : uint8// 하나하나가 인터페이스 객체화로 되어있다 //InputBuffer에다 어떤명령인지 내리려고 정의 해논거다
{
	None,
	ToggleCombat,
	LightAttack, HeavyAttack,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInputBufferOpen);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInputBufferClose);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputBufferConsumed, EInputBufferKey, InKey);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U2004_04_BATTLE_API UCInputBufferComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCInputBufferComponent();

public:	
	void Open();
	void Close();
	void UpdateKey(EInputBufferKey InKey);

private:
	void Consumed();//어떤 내용을 적용시킬애

public:
	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)//블프에 접근 가져다 쓸려면BlueprintAssignable 있어야한다
		FInputBufferOpen OnInputBufferOpen;

	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FInputBufferClose OnInputBufferClose;

	UPROPERTY(BlueprintAssignable, VisibleDefaultsOnly, BlueprintCallable)
		FInputBufferConsumed OnInputBufferConsumed;

private:
	bool bOpen;//inputbuufer가 열렸냐
	EInputBufferKey Key;//이동 카메라회전 빼고 다 Key 상태에 따라 분기 할꺼다
};
