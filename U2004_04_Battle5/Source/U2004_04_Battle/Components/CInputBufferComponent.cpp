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
		OnInputBufferClose.Broadcast();//CPlayerController ���� ���ش�

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
		OnInputBufferConsumed.Broadcast(Key);//�����尡 �����Ű��//CPlayerController�� �ִ�

	Key = EInputBufferKey::None;//�ൿ�� ����Ǹ� �����Ŵϱ� �ƹ��͵� ������ ���°ɷ� �����°Ŵ� 
}

