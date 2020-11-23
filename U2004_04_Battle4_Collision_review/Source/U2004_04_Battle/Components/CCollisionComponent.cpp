#include "CCollisionComponent.h"
#include "Global.h"

UCCollisionComponent::UCCollisionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	ObjectTypes.Add(EObjectTypeQuery::ObjectTypeQuery3);
	TraceDebugType = EDrawDebugTrace::None;
}


void UCCollisionComponent::Activation(ECollisionPart InPart)
{
	bActivate = true;

	HittedActors.Empty();
	HittedActors.Add(GetOwner());

	if (OnCollisionActivated.IsBound())
		OnCollisionActivated.Broadcast(InPart);
}

void UCCollisionComponent::Deactivation()
{
	bActivate = false;
	bCanPerfomeTrace = false;

	if (OnCollisionDeactivated.IsBound())
		OnCollisionDeactivated.Broadcast();
}

void UCCollisionComponent::SetCollisionMesh(UPrimitiveComponent * InMesh, const TArray<FName>& InSocketNames)
{
	Mesh = InMesh;
	Sockets = InSocketNames;

	UpdateLastSocketPositions();
}

void UCCollisionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bCanPerfomeTrace == true)
		ExecuteTrace();

	UpdateLastSocketPositions();
	bCanPerfomeTrace = true;
}

void UCCollisionComponent::UpdateLastSocketPositions()
{
	CheckFalse(Mesh != NULL);

	for (const FName& socket : Sockets)
		LastSocketPositions.Add(socket, Mesh->GetSocketLocation(socket));
}

void UCCollisionComponent::ExecuteTrace()
{
	CheckFalse(Mesh != NULL);

	for (FName socket : Sockets)
	{
		//처음에 누구부터 충돌되었는가.
		FVector start = *LastSocketPositions.Find(socket);
		FVector end = Mesh->GetSocketLocation(socket);

		TArray<FHitResult> hits;
		UKismetSystemLibrary::SphereTraceMultiForObjects
		(
			GetWorld(), start, end, TraceRadius, ObjectTypes, false, 
			HittedActors, TraceDebugType, hits, true
		);

		for (const FHitResult& hit : hits)
		{
			//충돌된 현재의 컴포넌트가 나온다.
			FName name = hit.GetComponent()->GetCollisionProfileName();
			if (IgnoreProfileName.Contains(name))
				continue;
			//ignore로 등록해놓은것. 패스 
			if(HittedActors.Contains(hit.GetActor()))
				continue;
			//혹시나 추가되어있는것도 패스
			//배제

			HittedActors.Add(hit.GetActor());
			//충돌와있고 그다음에 충돌된애들을 전파시킬거야.
			if (OnCollisionApplyActorDamage.IsBound())
				OnCollisionApplyActorDamage.Broadcast(hit);
			//히트쪽 입장이야.
		}
	}
}