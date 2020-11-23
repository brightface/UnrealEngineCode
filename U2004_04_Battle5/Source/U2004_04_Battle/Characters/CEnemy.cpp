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

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned; //AI에 빙의 시킬거다

	HealthBar = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBar->SetupAttachment(GetMesh());//메쉬 위에다 해줄거다
	
	GetMesh()->RelativeLocation = FVector(0, 0, -90);
	GetMesh()->RelativeRotation = FRotator(0, -90, 0);

	//HP Bar 만들어준다
	TSubclassOf<UUserWidget> healthBar;
	CContentFinder::GetClass<UUserWidget>(&healthBar, "WidgetBlueprint'/Game/UserInterfaces/BP_CUserWidgetHealthBar.BP_CUserWidgetHealthBar_C'");

	HealthBar->SetWidgetClass(healthBar);
	HealthBar->RelativeLocation = FVector(0, 0, 200); //hp바 위치
	HealthBar->SetDrawSize(FVector2D(120, 10)); //hp바 크기
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

float ACEnemy::TakeDamage(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)//데미지 받는 함수
{
	float damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	FMeleeDamageEvent* damageEvent = (FMeleeDamageEvent *)&DamageEvent;//

	FVector eventLocation = EventInstigator->GetPawn()->GetActorLocation();//이벤트를 준 위치는 플레이어위치
	UAISense_Damage::ReportDamageEvent(GetWorld(), this, EventInstigator, damage, eventLocation, GetActorLocation());//데미지를 받으면 감지할수있다 
	//데미지를 전파해주는 AI다//데미지를 받은액터가 this, EventInstigator 데미지를 주는액터 ,피해량 damage,어느지점에서 이벤트를 준거냐,맨뒤는 HitActor인데 맞은 위치이다

	damage = TakeDamage_Child(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	Status->ApplyDamage(damage);//데미지 를 감겸 시켜준다

	return damage;
}

float ACEnemy::TakeDamage_Child(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	return DamageAmount;
}
