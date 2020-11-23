#include "CAnimInstance_Player.h"
#include "Global.h"
#include "Characters/CPlayer.h"
#include "Components/CEquipmentComponent.h"

void UCAnimInstance_Player::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	Player = Cast<ACPlayer>(TryGetPawnOwner());//게임모드일떄 플레이어를 가져오면된다 게임모드가 아니면 에디터모드에서 TryGetPawnOwner는 널이다
	Player->GetEquipment()->OnInCombatModeChanged.AddDynamic(this, &UCAnimInstance_Player::OnInCombatModeChanged);//SetCombat에서 콜 한거다
}

void UCAnimInstance_Player::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	CheckNull(Player);

	Speed = Player->GetVelocity().Size2D();
	Direction = CalculateDirection(Player->GetVelocity(), Player->GetActorRotation());
}

void UCAnimInstance_Player::OnInCombatModeChanged(bool InCombatMode)
{
	bInCombat = InCombatMode;//전투 모두에 들어갔는지
}
