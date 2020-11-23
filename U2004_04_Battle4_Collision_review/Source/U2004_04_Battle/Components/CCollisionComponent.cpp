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
		//ó���� �������� �浹�Ǿ��°�.
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
			//�浹�� ������ ������Ʈ�� ���´�.
			FName name = hit.GetComponent()->GetCollisionProfileName();
			if (IgnoreProfileName.Contains(name))
				continue;
			//ignore�� ����س�����. �н� 
			if(HittedActors.Contains(hit.GetActor()))
				continue;
			//Ȥ�ó� �߰��Ǿ��ִ°͵� �н�
			//����

			HittedActors.Add(hit.GetActor());
			//�浹���ְ� �״����� �浹�Ⱦֵ��� ���Ľ�ų�ž�.
			if (OnCollisionApplyActorDamage.IsBound())
				OnCollisionApplyActorDamage.Broadcast(hit);
			//��Ʈ�� �����̾�.
		}
	}
}