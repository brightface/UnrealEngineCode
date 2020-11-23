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

	//���콺ȸ������ �÷��̾� �̵�
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0, 540, 0);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetCapsuleComponent());

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("FollowCameraaa");
	FollowCamera->SetupAttachment(CameraBoom);

	
	UEnum* socketNames = FindObject<UEnum>(ANY_PACKAGE, L"EBodyColliderPart", true);//EBodyColliderPart �ڷ�����ü�� enum ������ ã�ƿ÷����ϴ°Ŵ�
	                                                                    //�����̸��ϰ� EBodyColliderPart ������ �̸��ϰ� ���� �װ� ���� �������ϴ°Ŵ�

	//�浹ü�� �����
	for (int i = 0; i < (int)EBodyColliderPart::Max; i++)
	{
		FString str = "BodyCollider" + FString::FromInt(i + 1);
		BodyColliders[i] = CreateDefaultSubobject<USphereComponent>(FName(*str));
		BodyColliders[i]->InitSphereRadius(5); //����üũ��

		//�浹ü���� ���������� �����ش�
		FString socketName = socketNames->GetNameStringByIndex(i);//������ �����̸��� �ȴ�
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
		BodyColliders[i]->SetCollisionEnabled(ECollisionEnabled::NoCollision);//�ݸ������� �浹�� ����
		BodyColliders[i]->OnComponentBeginOverlap.AddDynamic(this, &ACPlayer::OnBodyColliderBeginOverlap);//�浹�Ǹ� ȣ��Ǵ� �̺�Ʈ

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
	CheckFalse(Equipment->CanMeleeAttack(State));//���� ������ �������� üũ�Ѵ� ���ݻ��°� �ƴϸ� �ϸ�
	State->SetState(EState::Attacking);//���ݸ�忡 ���ٶ�� �˷��ش�

	MeleeAttackType = InType;

	EMontageType type = CStaticFunctions::ConvertMeleeAttackToMontageType(MeleeAttackType);//�׼��� �����´� Light�� ����ִ�
	TArray<FMontageAction> actions = Montages->GetMontagesForType(type);//Ÿ���� ������ ��Ÿ�ָ� �����ͼ� actions�� �־��ش�

	uint32 lastAttackIndex = actions.Num() - 1;//-1�� �迭�� �����ͼ� 0���� ���ߵż� -1 ���ذŴ� lastAttackIndex�� �޺� ������ �������ִ°Ŵ�
	uint32 montageIndex = MeleeAttackCounter > lastAttackIndex ? lastAttackIndex : MeleeAttackCounter;//��Ÿ�� ����

	MeleeAttackCounter++;//���� �����ش�

	if (MeleeAttackCounter > lastAttackIndex)//lastAttackIndex���� ũ�� �ٽ� 0���� ���ش� 0������ �÷��̸� ��� �ݺ������� ����ߵǼ� �׷��� 0������ lastAttack���� ó�����ش�
		ResetMeleeAttackCounter();

	if (actions[montageIndex].Montage != NULL)
	{
		UAnimMontage* montage = actions[montageIndex].Montage;
		float playRatio = actions[montageIndex].PlayRatio;

		UAnimInstance* instance = GetMesh()->GetAnimInstance();//GetOwner������ ĳ���õż� ���ϵǴ»�Ȳ �ű⼭ GetMesh��
                              //ĳ���Ϳ� ���̷�Ż�޽��� ȣ��ȴ� �ű⿡�� Instance�� �����´�
		float duration = instance->Montage_Play(actions[montageIndex].Montage, playRatio, EMontagePlayReturnType::Duration);//Duration ��ü������ �ӵ��� ����ϴ°� ����
		                                  //   �÷��̽�ų ��Ÿ��     �÷��̽ð�            
		UKismetSystemLibrary::K2_SetTimer(this, "ResetMeleeAttackCounter", duration * 0.8f, false);// duration *0.8f �� ���� �޺����� �ð� �����̴�
		//�ڱ�ð����ȿ� ���̻� Ŭ��� �ȵƾ� �״ϱ� Idle�� ���ư��� �׷��� �ڱ� ������ ���� �ð����� ������������ �Ѿ�� �ʾҴٸ� 0���� ������ָ�Ǵ°Ŵ�
		return;
	}
}

void ACPlayer::OnBodyCollider(EBodyColliderPart InPart)
{
	BodyColliders[(int)InPart]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);//�ݶ��̴� ���ش� 
}

void ACPlayer::OffBodyCollider(EBodyColliderPart InPart)
{
	BodyColliders[(int)InPart]->SetCollisionEnabled(ECollisionEnabled::NoCollision);//��Ƽ���̰� �����ϱ� ���ش�

	TArray<AActor*>*actors= HittedMap.Find(BodyColliders[(int)InPart]);//������ ���ϱ� TMap�� ����� �浹�� ���δ� ����

	actors->Empty();
}


void ACPlayer::ResetMeleeAttackCounter()
{
	MeleeAttackCounter = 0;
}

void ACPlayer::OnBodyColliderBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{//                                                             �浹�����ѳ�              �浹�ѳ�             �浹�ѳ��� ������Ʈ                                                                �浹�� ���
	CheckTrue(OtherActor == this);
	CheckTrue(OtherActor == NULL);
	
	USphereComponent* hitter = Cast<USphereComponent>(OverlappedComponent);//OverlappedComponent������ TMap �ȿ��� ã����ȴ�
	TArray<AActor *>* actors = HittedMap.Find(hitter);//hitter�� ã�´�
	
	CheckTrue(actors->Find(OtherActor) > -1);//�̹� actors�� �ϳ��� ã���� �ϸ�ȵȴ� -1���� ũ�� �ִٴ°Ŵ� ���� ���ʿ䰡����

	float power = Status->GetValue(EStatusType::Power);//�������� �����´�
	bool critical = (bool)Status->GetValue(EStatusType::Critical);//ũ��Ƽ���� ��������ش�

	if (critical == true)//ũ��Ƽ���� Ʈ�� �߸� ũ��Ƽ�� ���������ش�
		power += Status->GetValue(EStatusType::CriticalPower);

	//�������� ���⸸�����
	FVector location = GetActorLocation();//�������� ��ġ
	FVector location2 = OtherActor->GetActorLocation();//���ݹ����� ��ġ

	//�������̺�Ʈ���� ������ش� 
	FMeleeDamageEvent damage;
	damage.HittedDirection = UKismetMathLibrary::GetDirectionUnitVector(location, location2);//���ݹ��� ���� 
	damage.bCanBeParried = MeleeAttackType == EMeleeAttackType::Light;//����Ʈ �϶��� �ݰ��ҰŴ�
	damage.bCanBeBlocked = true;
	damage.bCanRecieveImpact = true;//

	OtherActor->TakeDamage(power, damage, GetController(), this);//GetController������,this�� Damage �� �߻���Ų /Į�� �ϸ� Į�� this��ġ�� ���Ŵ�

	actors->Add(OtherActor);
}
