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

//이 구조체는 //Fist_Montages_Table를 가져올려고 만든거다
USTRUCT(BlueprintType)
struct FMontageAction_Asset : public FTableRowBase//데이터를 불러올려면 FTableRowBase 상속받아야한다
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)//블프에 접근할려고 설정해줬다
	     int Action;  //동작

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Montage;  //경로

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float PlayRatio; //플레이 속도
};

USTRUCT(BlueprintType)
struct FMontageAction// 위에 FString Montage 경로 로 불러드리고 구조체에다 저장하고 사용할거다
{
	GENERATED_USTRUCT_BODY()

public:
	EMontageType Action;  //동작
	class UAnimMontage* Montage;  //경로
	float PlayRatio; //플레이 속도
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )//BlueprintSpawnableComponent 컴포넌트 스판이 가능하다
class U2004_04_BATTLE_API UCMontagesComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	UCMontagesComponent();

public:
	TArray<FMontageAction> GetMontagesForType(EMontageType InType);//모아서 해당하는것만 리턴해주겠다

protected:
	virtual void BeginPlay() override;

private:
	void AddDataTable(FString Name, FString Path);
	void PrintDataTable();//데이터가 불렸는지 확인하는 함수

private:
	TMap<FString, TArray<FMontageAction>> MontageActionMap;//FString은 테이블명 TArray 테이블명안에
	//같은카테고리가 쭈르륵 나올건데 나중에 같은액션번호를 가진애는 콤보를 취급할거다
	
};