#include "CAnimInstance_Enemy.h"
#include "Global.h"


void UCAnimInstance_Enemy::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	Enemy = Cast<ACEnemy>(TryGetPawnOwner());//���Ӹ���ϋ� �÷��̾ ��������ȴ� ���Ӹ�尡 �ƴϸ� �����͸�忡�� TryGetPawnOwner�� ���̴�
}

void UCAnimInstance_Enemy::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	CheckNull(Enemy);

	Speed = Enemy->GetVelocity().Size2D();
	Direction = CalculateDirection(Enemy->GetVelocity(), Enemy->GetActorRotation());
}