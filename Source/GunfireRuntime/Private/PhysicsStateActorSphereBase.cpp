#include "PhysicsStateActorSphereBase.h"
#include "Components/SphereComponent.h"

USphereComponent* APhysicsStateActorSphereBase::GetSphereComponent() const {
    return NULL;
}

APhysicsStateActorSphereBase::APhysicsStateActorSphereBase() {
    this->WeaponPhantomSphere = CreateDefaultSubobject<USphereComponent>(TEXT("WeaponPhantomSphere"));
    this->KinematicCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("KinematicCollisionSphere"));
}

