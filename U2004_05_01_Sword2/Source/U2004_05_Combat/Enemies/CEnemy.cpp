#include "CEnemy.h"
#include "Global.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/WidgetComponent.h"

ACEnemy::ACEnemy()
{
	HealthBar = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBar->SetupAttachment(GetMesh());
	USkeletalMesh* characterMesh;
	CContentFinder::GetAsset<USkeletalMesh>(&characterMesh, "SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
	GetMesh()->SetSkeletalMesh(characterMesh);
	GetMesh()->RelativeLocation = FVector(0, 0, -90);
	GetMesh()->RelativeRotation = FRotator(0, -90, 0);

	CContentFinder::GetAsset<UMaterialInstance>(&BodyMaterialInstance, "MaterialInstanceConstant'/Game/Character/Materials/M_UE4Man_Body_Enemy.M_UE4Man_Body_Enemy'");
	CContentFinder::GetAsset<UMaterialInstance>(&LogoMaterialInstance, "MaterialInstanceConstant'/Game/Character/Materials/M_UE4Man_ChestLogo_Enemy.M_UE4Man_ChestLogo_Enemy'");

	//CContentFinder::GetClass<UCUserWidget_HealthBar>
	//Healthbar->SetWidget(Clas
	//2d���� ����ֱ�
	//�µ�ο� ������
	
	//�Ӹ� ���� �� �ٴ��� ������.
	HealthBar->RelativeLocation = FVector(0, 0, 100);

	//
}

void ACEnemy::BeginPlay()
{
	Super::BeginPlay();

	BodyMaterial = UMaterialInstanceDynamic::Create(BodyMaterialInstance, NULL);
	LogoMaterial = UMaterialInstanceDynamic::Create(LogoMaterialInstance, NULL);
	//element 0���� �ٵ� 
	GetMesh()->SetMaterial(0, BodyMaterial);
	GetMesh()->SetMaterial(1, LogoMaterial);
}

float ACEnemy::TakeDamage(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	//���۳�- ������ �ȵǳ�
	DamageAmount = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	//���� �ٲٴ°� - ���� �ٵ��÷��� ���Ͼ��÷� 0~1���� ������
	BodyMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 0, 0, 1));
	LogoMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 0, 0, 1));
	//�̰� K2_SetTimer ������ �����ϴ� �Լ��� K2 �Լ��� ������Ʈ�� �ش簴ü �־��ָ� �ǰ� �߰��� ��Ҹ� �Ұ� �ƴϸ� �̰��ϸ� ��
	UKismetSystemLibrary::K2_SetTimer(this, "ResetColor", 0.1f, false);

	Health -= DamageAmount;

	if (Health <= 0.0f)
	{
		return 0.0f;
	}

	return 0.0f;
}

void ACEnemy::ResetColor()
{
	//�����÷��� �� 1�� �ٲ��ָ� ����
	BodyMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 1, 1, 1));
	LogoMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 1, 1, 1));
}
