#include "CEnemy.h"
#include "Global.h"
#include "Components/CEquipmentComponent.h"
#include "Components/CMontagesComponent.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"
#include "Perception/AISense_Damage.h"
#include "Components/WidgetComponent.h"
#include "UserInterfaces/CUserWidget_HealthBar.h"


ACEnemy::ACEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned; //AI�� ���� ��ų�Ŵ�

	HealthBar = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBar->SetupAttachment(GetMesh());//�޽� ������ ���ٰŴ�
	
	GetMesh()->RelativeLocation = FVector(0, 0, -90);
	GetMesh()->RelativeRotation = FRotator(0, -90, 0);

	//HP Bar ������ش�
	TSubclassOf<UUserWidget> healthBar;
	CContentFinder::GetClass<UUserWidget>(&healthBar, "WidgetBlueprint'/Game/UserInterfaces/BP_CUserWidgetHealthBar.BP_CUserWidgetHealthBar_C'");

	HealthBar->SetWidgetClass(healthBar);
	HealthBar->RelativeLocation = FVector(0, 0, 200); //hp�� ��ġ
	HealthBar->SetDrawSize(FVector2D(120, 10)); //hp�� ũ��
	HealthBar->SetWidgetSpace(EWidgetSpace::Screen);

	Equipment = CreateDefaultSubobject<UCEquipmentComponent>("Equipment");
	Montages = CreateDefaultSubobject<UCMontagesComponent>("Montages");
	State = CreateDefaultSubobject<UCStateComponent>("State");
	Status = CreateDefaultSubobject<UCStatusComponent>("Status");
	


	Status->TableName = "Dummy_Status_Table";
}

void ACEnemy::BeginPlay()
{
	Super::BeginPlay();

	Status->UpdateHealthBar();

	//UCUserWidget_HealthBar* healthBar =Cast<UCUserWidget_HealthBar>(HealthBar->GetUserWidgetObject());
	//healthBar->UpdateHealthPoint(Status->GetHealth(), Status->GetMaxHealth());


}

void ACEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ACEnemy::TakeDamage(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)//������ �޴� �Լ�
{
	float damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	FMeleeDamageEvent* damageEvent = (FMeleeDamageEvent *)&DamageEvent;//

	FVector eventLocation = EventInstigator->GetPawn()->GetActorLocation();//�̺�Ʈ�� �� ��ġ�� �÷��̾���ġ
	UAISense_Damage::ReportDamageEvent(GetWorld(), this, EventInstigator, damage, eventLocation, GetActorLocation());//�������� ������ �����Ҽ��ִ� 
	//�������� �������ִ� AI��//�������� �������Ͱ� this, EventInstigator �������� �ִ¾��� ,���ط� damage,����������� �̺�Ʈ�� �ذų�,�ǵڴ� HitActor�ε� ���� ��ġ�̴�

	damage = TakeDamage_Child(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	Status->ApplyDamage(damage);//������ �� ���� �����ش�

	return damage;
}

float ACEnemy::TakeDamage_Child(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	return DamageAmount;
}
