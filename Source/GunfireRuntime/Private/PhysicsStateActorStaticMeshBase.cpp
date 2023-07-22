#include "PhysicsStateActorStaticMeshBase.h"
#include "Components/StaticMeshComponent.h"

UStaticMeshComponent* APhysicsStateActorStaticMeshBase::GetStaticMeshComponent() const {
    return NULL;
}

APhysicsStateActorStaticMeshBase::APhysicsStateActorStaticMeshBase() {
    this->WeaponPhantomMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponPhantomMesh"));
    this->KinematicCollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KinematicCollisionMesh"));
}

