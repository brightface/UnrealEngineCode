#include "CCombo_Sword.h"
#include "Global.h"
#include "Components/CapsuleComponent.h"

ACCombo_Sword::ACCombo_Sword()
{
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh");
	RootComponent = Mesh;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>("Capsule");
	Capsule->SetupAttachment(Mesh);


	USkeletalMesh* mesh;
	CContentFinder::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Weapons/Sword/SK_Straight_Sword.SK_Straight_Sword'");
	Mesh->SetSkeletalMesh(mesh);

	Capsule->RelativeLocation = FVector(-13.4f, -131.3f, 0);
	Capsule->RelativeRotation = FRotator(0, 0, 90);
	Capsule->SetCapsuleHalfHeight(220.0f);
	Capsule->SetCapsuleRadius(10.0f);
}

void ACCombo_Sword::BeginPlay()
{
	CombatType = ECombatType::Sword;
	//컴뱃타입 지정해줘야돼. 비교하잖아.
	Super::BeginPlay(); //자식이 먼저 실행되니까 나중에 부모꺼 되라고 밑으로 내려준다.

	Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Capsule->OnComponentBeginOverlap.AddDynamic(this, &ACCombo_Sword::OnBeginOverlap);
}

void ACCombo_Sword::OnBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	SendDamage(OtherActor);
}

void ACCombo_Sword::OnCollision()
{
	Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void ACCombo_Sword::OffCollision()
{
	Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}