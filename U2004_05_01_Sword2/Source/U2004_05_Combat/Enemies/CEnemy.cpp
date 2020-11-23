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
	//2d모드로 띄워주기
	//셋드로우 사이즈
	
	//머리 위에 잘 붙는지 보고가자.
	HealthBar->RelativeLocation = FVector(0, 0, 100);

	//
}

void ACEnemy::BeginPlay()
{
	Super::BeginPlay();

	BodyMaterial = UMaterialInstanceDynamic::Create(BodyMaterialInstance, NULL);
	LogoMaterial = UMaterialInstanceDynamic::Create(LogoMaterialInstance, NULL);
	//element 0번에 바디 
	GetMesh()->SetMaterial(0, BodyMaterial);
	GetMesh()->SetMaterial(1, LogoMaterial);
}

float ACEnemy::TakeDamage(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	//슈퍼네- 빠져셔 안되네
	DamageAmount = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	//색을 바꾸는것 - 색을 바디컬러를 리니어컬러 0~1까지 가질것
	BodyMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 0, 0, 1));
	LogoMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 0, 0, 1));
	//이것 K2_SetTimer 블프에 대응하는 함수들 K2 함수들 오브젝트에 해당객체 넣어주면 되고 중간에 취소를 할게 아니면 이거하면 돼
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
	//리셋컬러는 다 1로 바꿔주면 되지
	BodyMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 1, 1, 1));
	LogoMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 1, 1, 1));
}
