#include "CStateComponent.h"
#include "Global.h"

UCStateComponent::UCStateComponent()
{

}


bool UCStateComponent::IsStateEqual(EState InState)
{
	return CurrentState == InState;
}

bool UCStateComponent::IsAlive()
{
	return IsStateEqual(EState::Dead) == false;
}

void UCStateComponent::SetState(EState NewState)
{
	EState prev = CurrentState;//ÇöÀç»óÅÂ ÀúÀå
	CurrentState = NewState; //»õ·Î¿î »óÅÂ ÀúÀå


	if (prev != CurrentState)//ÀÌÀü »óÅÂ°¡ ÇöÀç»óÅÂ ¶û °°Áö¾Ê¾Ò´Ù¸é
		OnStateChanged.Broadcast(prev, NewState);//ÀÌÀü »óÅÂÇÏ°í »õ·Î¿î »óÅÂ ¸¦ ³Ö¾î¼­ Äİ ÇØÁØ´Ù
}

void UCStateComponent::ResetState(float InDelay)
{
	CheckTrue(CurrentState == EState::Dead);

	if (InDelay <= 0.0f)
	{
		SetState(EState::Idle);//0º¸´Ù ÀÛÀ¸¸é Idle·Î µ¹¾Æ¿Í¼­ ´ÙÀ½µ¿ÀÛÀ¸·Î µé¾î°¥¼öÀÖ´Ù´Â ¾ê±â´Ù 
		//close °¡ ÄİÀÌ¾ÈµÇ¸é ÀÌ ÇÔ¼ö°¡ ÄİÀÌ ¾ÈµÆÀ»°Å´Ù ±×·¯´Ï±ñ ´ÙÀ½µ¿ÀÛÀ¸·Î ¸ø³Ñ¾î¿À´Ï±ñ ±× µ¿ÀÛ¿¡¼­ ³¡³»¹ö¸°°Å´Ù
		
		return;
	}
	// 0º¸´Ù Å¬°æ¿ì
	UKismetSystemLibrary::K2_SetTimer(this, "SetIdleTimer", InDelay, false);//InDelayµÚ¿¡ SetIdleTimerÈ£­„ÇØ¼­ Idle·Î µ¹¸®°Å´Ù
}

void UCStateComponent::SetIdleTimer()
{
	SetState(EState::Idle);
}
