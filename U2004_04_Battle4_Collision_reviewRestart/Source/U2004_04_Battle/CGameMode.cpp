#include "CGameMode.h"
#include "Global.h"

ACGameMode::ACGameMode()
{
	CContentFinder::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/Player/BP_CPlayer.BP_CPlayer_C'");
	CContentFinder::GetClass<APlayerController>(&PlayerControllerClass, "Blueprint'/Game/Player/BP_CPlayerController.BP_CPlayerController_C'");
}