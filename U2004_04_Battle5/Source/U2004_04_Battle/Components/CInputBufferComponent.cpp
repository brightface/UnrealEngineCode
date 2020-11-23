#include "CInputBufferComponent.h"

UCInputBufferComponent::UCInputBufferComponent()
{

}

void UCInputBufferComponent::Open()
{
	bOpen = true;

	if (OnInputBufferOpen.IsBound())
		OnInputBufferOpen.Broadcast();
}

void UCInputBufferComponent::Close()
{
	bOpen = false;

	if (OnInputBufferClose.IsBound())
		OnInputBufferClose.Broadcast();//CPlayerController 에서 해준다

	Consumed();
}

void UCInputBufferComponent::UpdateKey(EInputBufferKey InKey)
{
	Key = InKey;

	if (bOpen == false)
		Consumed();
}

void UCInputBufferComponent::Consumed()
{
	if (OnInputBufferConsumed.IsBound())
		OnInputBufferConsumed.Broadcast(Key);//컨섬드가 적용시키고//CPlayerController에 있다

	Key = EInputBufferKey::None;//행동을 실행되면 끝나거니깐 아무것도 동작이 없는걸로 돌리는거다 
}

