#include "CGameMode.h"
#include "Global.h"

ACGameMode::ACGameMode()
{
	//DefaultPawnClass 얘가 TSubOfClass에 APawn이다 
	CContentFinder::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/Player/BP_CPlayer.BP_CPlayer_C'");
	//플레이 컨트롤러 클래스로 할당된다
	CContentFinder::GetClass<APlayerController>(&PlayerControllerClass, "Blueprint'/Game/Player/BP_CPlayerController.BP_CPlayerController_C'");
}