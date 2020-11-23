#include "CGameMode.h"
#include "Global.h"

ACGameMode::ACGameMode()
{
	//DefaultPawnClass �갡 TSubOfClass�� APawn�̴� 
	CContentFinder::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/Player/BP_CPlayer.BP_CPlayer_C'");
	//�÷��� ��Ʈ�ѷ� Ŭ������ �Ҵ�ȴ�
	CContentFinder::GetClass<APlayerController>(&PlayerControllerClass, "Blueprint'/Game/Player/BP_CPlayerController.BP_CPlayerController_C'");
}