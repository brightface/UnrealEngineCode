#include "CGameMode.h"
#include "Global.h"

ACGameMode::ACGameMode()
{
	CContentFinder::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/Player/BP_CPlayer.BP_CPlayer_C'");
}