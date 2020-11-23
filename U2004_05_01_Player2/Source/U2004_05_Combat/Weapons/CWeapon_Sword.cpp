#include "CWeapon_Sword.h"
#include "Global.h"
#include "Components/CapsuleComponent.h"

ACWeapon_Sword::ACWeapon_Sword()
{
	//Į �θ��ڽ� ���� ���ֱ�
	Sword = CreateDefaultSubobject<USkeletalMeshComponent>("Sword");
	Sword->SetupAttachment(Scene);
	/*
	//ĸ���� ��Ʈ�� �ϰ� . ��Ʈ ������Ʈ�� ���ݾ�.
	��Ʈ�� ���ݾ�.

	//��Ʈ�� �⺻ ��������Ʈ. ScneneCOmponent* scene;
	//����������Ʈ�� �ȵǴ°� ����? ���ʹ� ��Ʈ�� ��Ʈ�� ���ٴ´�.
	*/
	Capsule->SetupAttachment(Sword);

	//Į ��������
	USkeletalMesh* mesh;
	CContentFinder::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Weapons/Sword/SK_Straight_Sword.SK_Straight_Sword'");
	Sword->SetSkeletalMesh(mesh);
	

	Capsule->RelativeLocation = FVector(-13.4f, -131.3f, 0.0f);
	Capsule->RelativeRotation = FRotator(0, 0, 90);
	Capsule->SetCapsuleHalfHeight(220);
	Capsule->SetCapsuleRadius(10);
}
