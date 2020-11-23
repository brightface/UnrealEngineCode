#include "CAnimInstance_Player.h"
#include "Global.h"
#include "Player/CPlayer.h"

void UCAnimInstance_Player::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	Player = Cast<ACPlayer>(TryGetPawnOwner());
	CheckNull(Player);
	//Native BeginPlayer 에서 걸어주고, 플레이어 걸어주고.
	 

	//스테이트 처리 다 되어있으니까 노티파이로 넘어간다.
	Player->GetStateComponent()->OnCombatTypeChanged.AddDynamic(this, &UCAnimInstance_Player::OnCombatTypeChanged);
	Player->GetStateComponent()->OnStateTypeChanged.AddDynamic(this, &UCAnimInstance_Player::OnStateTypeChanged);
}

void UCAnimInstance_Player::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	CheckNull(Player);

	Speed = Player->GetVelocity().Size2D();
	Direction = CalculateDirection(Player->GetVelocity(), Player->GetActorRotation());
	bInAir = Player->GetCharacterMovement()->IsFalling();
}

void UCAnimInstance_Player::OnCombatTypeChanged(ECombatType InPrevType, ECombatType InNewType)
{
	CombatType = Player->GetStateComponent()->GetCombatType();
}

void UCAnimInstance_Player::OnStateTypeChanged(EStateType InPrevType, EStateType InNewType)
{
	StateType = Player->GetStateComponent()->GetStateType();
}