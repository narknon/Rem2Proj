#include "PhysicsStateActorBoxBase.h"
#include "Components/BoxComponent.h"

UBoxComponent* APhysicsStateActorBoxBase::GetBoxComponent() const {
    return NULL;
}

APhysicsStateActorBoxBase::APhysicsStateActorBoxBase() {
    this->WeaponPhantomBox = CreateDefaultSubobject<UBoxComponent>(TEXT("WeaponPhantomBox"));
    this->KinematicCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("KinematicCollisionBox"));
}

