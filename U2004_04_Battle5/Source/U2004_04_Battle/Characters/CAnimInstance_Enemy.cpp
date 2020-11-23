#include "CAnimInstance_Enemy.h"
#include "Global.h"


void UCAnimInstance_Enemy::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	Enemy = Cast<ACEnemy>(TryGetPawnOwner());//게임모드일떄 플레이어를 가져오면된다 게임모드가 아니면 에디터모드에서 TryGetPawnOwner는 널이다
}

void UCAnimInstance_Enemy::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	CheckNull(Enemy);

	Speed = Enemy->GetVelocity().Size2D();
	Direction = CalculateDirection(Enemy->GetVelocity(), Enemy->GetActorRotation());
}