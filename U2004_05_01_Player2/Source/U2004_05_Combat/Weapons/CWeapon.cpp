#include "CWeapon.h"
#include "Global.h"
#include "Components/CapsuleComponent.h"

ACWeapon::ACWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>("Scene");
	RootComponent = Scene;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>("Capsule");
}

void ACWeapon::BeginPlay()
{
	Super::BeginPlay();
	//Ȱ������ �ֵѷ��� �����°� �ƴ϶� �߻�ɰ��̴�. �׷��� ������Ʈ��
	Capsule->OnComponentBeginOverlap.AddDynamic(this, &ACWeapon::OnCapsuleBeginOverlap);
	Capsule->OnComponentEndOverlap.AddDynamic(this, &ACWeapon::OnCapsuleEndOverlap);
}

void ACWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//Cweapon ��ӹ޾Ƽ� 
void ACWeapon::OnCapsuleBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	CapsuleBeginOverlap(OtherActor, OtherComp);
}

void ACWeapon::OnCapsuleEndOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	CapsuleEndOverlap(OtherActor, OtherComp);
}