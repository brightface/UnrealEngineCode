#include "CPlayer.h"
#include "Global.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Animation/AnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CMontagesComponent.h"
#include "Components/CStatusComponent.h"

ACPlayer::ACPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	//마우스회전으로 플레이어 이동
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0, 540, 0);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetCapsuleComponent());

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("FollowCameraaa");
	FollowCamera->SetupAttachment(CameraBoom);

	
	UEnum* socketNames = FindObject<UEnum>(ANY_PACKAGE, L"EBodyColliderPart", true);//EBodyColliderPart 자료형객체를 enum 형으로 찾아올려고하는거다
	                                                                    //소켓이름하고 EBodyColliderPart 정의한 이름하고 같다 그걸 같다 쓸려고하는거다

	//충돌체를 만든다
	for (int i = 0; i < (int)EBodyColliderPart::Max; i++)
	{
		FString str = "BodyCollider" + FString::FromInt(i + 1);
		BodyColliders[i] = CreateDefaultSubobject<USphereComponent>(FName(*str));
		BodyColliders[i]->InitSphereRadius(5); //층돌체크기

		//충돌체들은 각소켓으로 보내준다
		FString socketName = socketNames->GetNameStringByIndex(i);//참조할 소켓이름이 된다
		BodyColliders[i]->SetupAttachment(GetMesh(), FName(*socketName));
	}

	Equipment = CreateDefaultSubobject<UCEquipmentComponent>("Equipment");
	Montages = CreateDefaultSubobject<UCMontagesComponent>("Montages");
	State = CreateDefaultSubobject<UCStateComponent>("State");
	Status = CreateDefaultSubobject<UCStatusComponent>("Status");

	CameraBoom->TargetArmLength = 450;
	CameraBoom->SocketOffset = FVector(0, 0, 180);
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->bEnableCameraLag = true;
	CameraBoom->bEnableCameraRotationLag = true;  
	CameraBoom->bDoCollisionTest = false;

	FollowCamera->RelativeRotation = FRotator(-15, 0, 0);

	Status->TableName = "Player_Status_Table";
}


void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	State->OnStateChanged.AddDynamic(this, &ACPlayer::OnStateChanged);

	for (int i = 0; i < (int)EBodyColliderPart::Max; i++)
	{
		BodyColliders[i]->SetCollisionEnabled(ECollisionEnabled::NoCollision);//콜리전없음 충돌이 없음
		BodyColliders[i]->OnComponentBeginOverlap.AddDynamic(this, &ACPlayer::OnBodyColliderBeginOverlap);//충돌되면 호출되는 이벤트

		HittedMap.Add(BodyColliders[i], TArray<AActor*>());
	}
}

void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPlayer::OnStateChanged(EState InPreState, EState InNewState)
{
}


void ACPlayer::ToggleCombat()
{
	Equipment->ToggleCombat();
}

void ACPlayer::MeleeAttack(EMeleeAttackType InType)
{
	CheckFalse(Equipment->CanMeleeAttack(State));//근접 공격이 가능한지 체크한다 공격상태가 아니면 하면
	State->SetState(EState::Attacking);//공격모드에 들어갔다라고 알려준다

	MeleeAttackType = InType;

	EMontageType type = CStaticFunctions::ConvertMeleeAttackToMontageType(MeleeAttackType);//액션을 가져온다 Light가 담겨있다
	TArray<FMontageAction> actions = Montages->GetMontagesForType(type);//타입을 가지고 몽타주를 가져와서 actions에 넣어준다

	uint32 lastAttackIndex = actions.Num() - 1;//-1은 배열을 가져와서 0부터 가야돼서 -1 해준거다 lastAttackIndex는 콤보 개수를 가지고있는거다
	uint32 montageIndex = MeleeAttackCounter > lastAttackIndex ? lastAttackIndex : MeleeAttackCounter;//몽타주 개수

	MeleeAttackCounter++;//증가 시켜준다

	if (MeleeAttackCounter > lastAttackIndex)//lastAttackIndex보다 크면 다시 0으로 해준다 0번부터 플레이를 계속 반복적으로 해줘야되서 그렇다 0번부터 lastAttack까지 처리해준다
		ResetMeleeAttackCounter();

	if (actions[montageIndex].Montage != NULL)
	{
		UAnimMontage* montage = actions[montageIndex].Montage;
		float playRatio = actions[montageIndex].PlayRatio;

		UAnimInstance* instance = GetMesh()->GetAnimInstance();//GetOwner까지가 캐스팅돼서 리턴되는상황 거기서 GetMesh는
                              //캐릭터에 스켈레탈메쉬가 호출된다 거기에서 Instance를 가져온다
		float duration = instance->Montage_Play(actions[montageIndex].Montage, playRatio, EMontagePlayReturnType::Duration);//Duration 전체길이의 속도를 비례하는게 리턴
		                                  //   플레이시킬 몽타주     플레이시간            
		UKismetSystemLibrary::K2_SetTimer(this, "ResetMeleeAttackCounter", duration * 0.8f, false);// duration *0.8f 는 다음 콤보동작 시간 간격이다
		//자기시간동안에 더이상 클로즈가 안됐어 그니깐 Idle로 돌아갔어 그러면 자기 끝나는 이전 시간까지 다음동작으로 넘어가지 않았다면 0으로 만들어주면되는거다
		return;
	}
}

void ACPlayer::OnBodyCollider(EBodyColliderPart InPart)
{
	BodyColliders[(int)InPart]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);//콜라이더 켜준다 
}

void ACPlayer::OffBodyCollider(EBodyColliderPart InPart)
{
	BodyColliders[(int)InPart]->SetCollisionEnabled(ECollisionEnabled::NoCollision);//노티파이가 끝나니깐 꺼준다

	TArray<AActor*>*actors= HittedMap.Find(BodyColliders[(int)InPart]);//끝나고 나니깐 TMap에 저장된 충돌들 전부다 비운다

	actors->Empty();
}


void ACPlayer::ResetMeleeAttackCounter()
{
	MeleeAttackCounter = 0;
}

void ACPlayer::OnBodyColliderBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{//                                                             충돌시작한놈              충돌한놈             충돌한놈의 컴포넌트                                                                충돌된 결과
	CheckTrue(OtherActor == this);
	CheckTrue(OtherActor == NULL);
	
	USphereComponent* hitter = Cast<USphereComponent>(OverlappedComponent);//OverlappedComponent가지고 TMap 안에서 찾으면된다
	TArray<AActor *>* actors = HittedMap.Find(hitter);//hitter로 찾는다
	
	CheckTrue(actors->Find(OtherActor) > -1);//이미 actors에 하나라도 찾으면 하면안된다 -1보다 크면 있다는거다 굳이 할필요가없다

	float power = Status->GetValue(EStatusType::Power);//데미지를 가져온다
	bool critical = (bool)Status->GetValue(EStatusType::Critical);//크리티컬을 적용시켜준다

	if (critical == true)//크리티컬이 트루 뜨면 크리티컬 공격을해준다
		power += Status->GetValue(EStatusType::CriticalPower);

	//데미지의 방향만들려고
	FVector location = GetActorLocation();//데미지의 위치
	FVector location2 = OtherActor->GetActorLocation();//공격받은놈 위치

	//데미지이벤트들을 만들어준다 
	FMeleeDamageEvent damage;
	damage.HittedDirection = UKismetMathLibrary::GetDirectionUnitVector(location, location2);//공격받은 방향 
	damage.bCanBeParried = MeleeAttackType == EMeleeAttackType::Light;//라이트 일때만 반격할거다
	damage.bCanBeBlocked = true;
	damage.bCanRecieveImpact = true;//

	OtherActor->TakeDamage(power, damage, GetController(), this);//GetController공격자,this는 Damage 를 발생시킨 /칼로 하면 칼이 this위치에 들어갈거다

	actors->Add(OtherActor);
}
