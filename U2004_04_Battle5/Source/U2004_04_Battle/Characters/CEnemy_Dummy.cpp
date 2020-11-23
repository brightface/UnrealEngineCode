#include "CEnemy_Dummy.h"
#include "Global.h"
#include "Components/CStatusComponent.h"

ACEnemy_Dummy::ACEnemy_Dummy()
{
	
	CContentFinder::GetClass<AController>(&AIControllerClass, "Blueprint'/Game/Enemy/BP_CAIController_Dummy.BP_CAIController_Dummy_C'");
	//AIControllerClass ¾êÇÑÅ× ºùÀÇ¸¦ ½ÃÅ²´Ù
	USkeletalMesh* mesh;
	CContentFinder::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
	GetMesh()->SetSkeletalMesh(mesh);

	Status->TableName = "Dummy_Status_Table";

	TSubclassOf<UAnimInstance> animInstance;
	CContentFinder::GetClass<UAnimInstance>(&animInstance, "AnimBlueprint'/Game/Enemy/ABP_Enemy.ABP_Enemy_C'");

	GetMesh()->SetAnimInstanceClass(animInstance);
}


