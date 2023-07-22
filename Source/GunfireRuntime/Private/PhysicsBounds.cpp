#include "PhysicsBounds.h"
#include "Components/StaticMeshComponent.h"

void APhysicsBounds::OnEndAffectCharacter_Implementation(ACharacter* Character, AActor* NewBounds) {
}

void APhysicsBounds::OnBeginAffectCharacter_Implementation(ACharacter* Character, AActor* OldBounds) {
}

float APhysicsBounds::GetForceToApplyScale_Implementation(ACharacter* Character) {
    return 0.0f;
}

APhysicsBounds::APhysicsBounds() {
    this->Type = NULL;
    this->MeshBounds = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBounds"));
    this->TerminalVelocity = 4000.00f;
    this->GravityScale = 1.00f;
    this->JumpImpulseScale = 1.00f;
    this->Priority = 0;
    this->FluidFriction = 0.30f;
    this->bWaterVolume = false;
    this->bPhysicsOnContact = false;
    this->XForceType = EPhysicsBoundsForceType::Push;
    this->XPushForce = 0.00f;
    this->XPushMaxVelocity = 0.00f;
    this->XPushForceCurve = NULL;
    this->XPullForce = 0.00f;
    this->XPullFriction = 0.00f;
    this->bLimitXMinVelocity = false;
    this->XMinVelocity = 0.00f;
    this->bLimitXMaxVelocity = false;
    this->XMaxVelocity = 0.00f;
    this->YForceType = EPhysicsBoundsForceType::Push;
    this->YPushForce = 0.00f;
    this->YPushMaxVelocity = 0.00f;
    this->YPushForceCurve = NULL;
    this->YPullForce = 0.00f;
    this->YPullFriction = 0.00f;
    this->bLimitYMinVelocity = false;
    this->YMinVelocity = 0.00f;
    this->bLimitYMaxVelocity = false;
    this->YMaxVelocity = 0.00f;
    this->ZForceType = EPhysicsBoundsForceType::Push;
    this->ZPushForce = 0.00f;
    this->ZPushMaxVelocity = 0.00f;
    this->ZPushForceCurve = NULL;
    this->ZPullForce = 0.00f;
    this->ZPullFriction = 0.00f;
    this->bLimitZMinVelocity = false;
    this->ZMinVelocity = 0.00f;
    this->bLimitZMaxVelocity = false;
    this->ZMaxVelocity = 0.00f;
}

