#include "CEnemy.h"
#include "Global.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "UserInterfaces/CUserWidget_HealthBar.h"
#include "Components/WidgetComponent.h"
#include "Player/CPlayer.h"
#include "Weapons/CCombo_Sword.h"

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

	CContentFinder::GetClass<UCUserWidget_HealthBar>(&HealthBarClass, "WidgetBlueprint'/Game/UserInterfaces/WB_CHealthBar.WB_CHealthBar_C'");
	//위치조정
	HealthBar->RelativeLocation = FVector(0, 0, 190);
	HealthBar->SetWidgetClass(HealthBarClass);
	HealthBar->SetWidgetSpace(EWidgetSpace::Screen);
	//사이즈
	HealthBar->SetDrawSize(FVector2D(120, 15));
}

void ACEnemy::BeginPlay()
{
	Super::BeginPlay();

	BodyMaterial = UMaterialInstanceDynamic::Create(BodyMaterialInstance, NULL);
	LogoMaterial = UMaterialInstanceDynamic::Create(LogoMaterialInstance, NULL);

	GetMesh()->SetMaterial(0, BodyMaterial);
	GetMesh()->SetMaterial(1, LogoMaterial);

	UpdateHealthBar();
}

float ACEnemy::TakeDamage(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	DamageAmount = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	BodyMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 0, 0, 1));
	LogoMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 0, 0, 1));

	UKismetSystemLibrary::K2_SetTimer(this, "ResetColor", 0.1f, false);

	Health -= DamageAmount;
	UpdateHealthBar();

	ACPlayer* player = Cast<ACPlayer>(EventInstigator->GetPawn());
	if (player != NULL) player->LastAttackEffect(this);

	APawn* attacker = EventInstigator->GetPawn();
	FRotator rotator = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), attacker->GetActorLocation());
	SetActorRotation(rotator);


	if (Health <= 0.0f)
	{
		return 0.0f;
	}

	if (Cast<ACCombo_Sword>(DamageCauser) != NULL)
	{
		FVector delta = GetActorForwardVector().GetSafeNormal2D() * GetCharacterMovement()->Mass * -0.2f;
		AddActorWorldOffset(delta);
	}
	else
	{

	}

	return 0.0f;
}

void ACEnemy::ResetColor()
{
	BodyMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 1, 1, 1));
	LogoMaterial->SetVectorParameterValue("BodyColor", FLinearColor(1, 1, 1, 1));
}

void ACEnemy::UpdateHealthBar()
{
	Cast<UCUserWidget_HealthBar>(HealthBar->GetUserWidgetObject())->UpdateHealthPoint(Health, MaxHealth);
}