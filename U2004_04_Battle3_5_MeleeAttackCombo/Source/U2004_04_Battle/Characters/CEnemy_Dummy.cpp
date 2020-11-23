#include "CEnemy_Dummy.h"
#include "Global.h"

ACEnemy_Dummy::ACEnemy_Dummy()
{
	CContentFinder::GetClass<AController>(&AIControllerClass, "Blueprint'/Game/Enemy/BP_CAIController_Dummy.BP_CAIController_Dummy_C'");

	
	USkeletalMesh* mesh;
	CContentFinder::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
	GetMesh()->SetSkeletalMesh(mesh);
}

