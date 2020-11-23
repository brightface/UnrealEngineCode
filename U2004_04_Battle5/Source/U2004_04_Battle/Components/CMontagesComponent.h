#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "CMontagesComponent.generated.h"


UENUM(BlueprintType)
enum class EMontageType : uint8
{
	None,
	LightAttack, HeavyAttack,
	Damage,
};

//�� ����ü�� //Fist_Montages_Table�� �����÷��� ����Ŵ�
USTRUCT(BlueprintType)
struct FMontageAction_Asset : public FTableRowBase//�����͸� �ҷ��÷��� FTableRowBase ��ӹ޾ƾ��Ѵ�
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)//������ �����ҷ��� ���������
	     int Action;  //����

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Montage;  //���

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float PlayRatio; //�÷��� �ӵ�
};

USTRUCT(BlueprintType)
struct FMontageAction// ���� FString Montage ��� �� �ҷ��帮�� ����ü���� �����ϰ� ����ҰŴ�
{
	GENERATED_USTRUCT_BODY()

public:
	EMontageType Action;  //����
	class UAnimMontage* Montage;  //���
	float PlayRatio; //�÷��� �ӵ�
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )//BlueprintSpawnableComponent ������Ʈ ������ �����ϴ�
class U2004_04_BATTLE_API UCMontagesComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	UCMontagesComponent();

public:
	TArray<FMontageAction> GetMontagesForType(EMontageType InType);//��Ƽ� �ش��ϴ°͸� �������ְڴ�

protected:
	virtual void BeginPlay() override;

private:
	void AddDataTable(FString Name, FString Path);
	void PrintDataTable();//�����Ͱ� �ҷȴ��� Ȯ���ϴ� �Լ�

private:
	TMap<FString, TArray<FMontageAction>> MontageActionMap;//FString�� ���̺�� TArray ���̺��ȿ�
	//����ī�װ��� �޸��� ���ðǵ� ���߿� �����׼ǹ�ȣ�� �����ִ� �޺��� ����ҰŴ�
	
};