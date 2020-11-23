#include "CGameMode.h"
#include "Global.h"

ACGameMode::ACGameMode()
{
	//빙의
	CContentFinder::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/Player/BP_CPlayer.BP_CPlayer_C'");
	CContentFinder::GetClass<APlayerController>(&PlayerControllerClass, "Blueprint'/Game/Player/BP_CPlayerController.BP_CPlayerController_C'");
	//빙의시켜봐야 아무것도 없지 아직
}