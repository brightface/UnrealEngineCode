#include "CWeapon_Sword.h"
#include "Global.h"
#include "Components/CapsuleComponent.h"

ACWeapon_Sword::ACWeapon_Sword()
{
	//칼 부모자식 관계 해주기
	Sword = CreateDefaultSubobject<USkeletalMeshComponent>("Sword");
	Sword->SetupAttachment(Scene);
	/*
	//캡슐을 루트로 하고 . 루트 컴포넌트가 없잖아.
	루트가 없잖아.

	//루트는 기본 신컴포넌트. ScneneCOmponent* scene;
	//액터컴포넌트는 안되는거 알지? 액터는 루트가 루트에 못붙는다.
	*/
	Capsule->SetupAttachment(Sword);

	//칼 가져오기
	USkeletalMesh* mesh;
	CContentFinder::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Weapons/Sword/SK_Straight_Sword.SK_Straight_Sword'");
	Sword->SetSkeletalMesh(mesh);
	

	Capsule->RelativeLocation = FVector(-13.4f, -131.3f, 0.0f);
	Capsule->RelativeRotation = FRotator(0, 0, 90);
	Capsule->SetCapsuleHalfHeight(220);
	Capsule->SetCapsuleRadius(10);
}
