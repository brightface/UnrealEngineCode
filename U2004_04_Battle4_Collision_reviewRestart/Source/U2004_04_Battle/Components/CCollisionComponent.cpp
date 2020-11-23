#include "CCollisionComponent.h"
#include "Global.h"

UCCollisionComponent::UCCollisionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	ObjectTypes.Add(EObjectTypeQuery::ObjectTypeQuery3);

}


void UCCollisionComponent::Activation()
{
	bActivate = true;

	HittedActors.Empty();
	HittedActors.Add(GetOwner());

	if (OnCollisionActivated.IsBound())
		OnCollisionActivated.Broadcast();
}

void UCCollisionComponent::Deactivation()
{
	bActivate = false;


	if (OnCollisionDeactivated.IsBound())
		OnCollisionDeactivated.Broadcast();
}
