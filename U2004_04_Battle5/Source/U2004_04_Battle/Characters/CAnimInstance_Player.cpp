#include "CAnimInstance_Player.h"
#include "Global.h"
#include "Characters/CPlayer.h"
#include "Components/CEquipmentComponent.h"

void UCAnimInstance_Player::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	Player = Cast<ACPlayer>(TryGetPawnOwner());//���Ӹ���ϋ� �÷��̾ ��������ȴ� ���Ӹ�尡 �ƴϸ� �����͸�忡�� TryGetPawnOwner�� ���̴�
	Player->GetEquipment()->OnInCombatModeChanged.AddDynamic(this, &UCAnimInstance_Player::OnInCombatModeChanged);//SetCombat���� �� �ѰŴ�
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
	bInCombat = InCombatMode;//���� ��ο� ������
}
