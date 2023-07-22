#include "PhysicsStateActor.h"
#include "ReplicatedMovementComponent.h"
#include "WaterOverlapComponent.h"
#include "WeaponPhantomComponent.h"

void APhysicsStateActor::UpdateOrientationReset(float TotalTime, float ElapsedTime, float SlamForceScale) {
}

void APhysicsStateActor::SetGlobalMassScale(float NewScale) {
}

void APhysicsStateActor::ResetPhysicsStateActorOrientation(float VerticalForce, float ResetTime, float SlamForceScale) {
}

void APhysicsStateActor::OnWaterStateChanged() {
}




bool APhysicsStateActor::IsFalling() const {
    return false;
}

bool APhysicsStateActor::IsBeingPushed() const {
    return false;
}

UStateMachineComponent* APhysicsStateActor::GetStateMachine() const {
    return NULL;
}

FVector APhysicsStateActor::GetRelativeExtents() const {
    return FVector{};
}

AActor* APhysicsStateActor::GetPushingActor() const {
    return NULL;
}

UPrimitiveComponent* APhysicsStateActor::GetPhysicsComponent() const {
    return NULL;
}

float APhysicsStateActor::GetGlobalMassScale() const {
    return 0.0f;
}

void APhysicsStateActor::ApplyShoveForce(float PushingForce, float LiftingForce, bool bScaleForceToMass) {
}

APhysicsStateActor::APhysicsStateActor() {
    this->GlobalMassScale = 1.00f;
    this->bAutoSizeKinematicCollision = false;
    this->bAutoSizeWeaponPhantom = false;
    this->bIgnoreDamageToInteractiveOther = true;
    this->bIgnoreDamageToAttachedActors = true;
    this->PushingForceScale = 1.00f;
    this->PushingTorqueScale = 1.00f;
    this->bApplyPushingCenterOfMassOffset = false;
    this->PhysicsBoundSets.AddDefaulted(1);
    this->PushingActor = NULL;
    this->PhysicsComponent = NULL;
    this->WeaponPhantomManager = CreateDefaultSubobject<UWeaponPhantomComponent>(TEXT("WeaponPhantomManager"));
    this->ReplicatedMovementComponent = CreateDefaultSubobject<UReplicatedMovementComponent>(TEXT("ReplicatedMovement"));
    this->WaterOverlapComponent = CreateDefaultSubobject<UWaterOverlapComponent>(TEXT("WaterOverlap"));
    this->CurrentDamageType = NULL;
    this->WeaponPhantomPrimitive = NULL;
    this->CachedStateMachine = NULL;
}

