#include "RopeActorBase.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "PhysicsTweenComponent.h"
#include "RopeComponent.h"

void ARopeActorBase::OnAttachedSourceToComponent_Implementation(USceneComponent* Component, const FTransform& Transform, FName SocketName, bool bSimulatePhysics, float AttachTime, UPrimitiveComponent* AttachPrimitive) {
}

void ARopeActorBase::OnAttachedEndpointToComponent_Implementation(USceneComponent* Component, const FTransform& Transform, FName SocketName, bool bSimulatePhysics, float AttachTime, UPrimitiveComponent* AttachPrimitive) {
}

float ARopeActorBase::IsRopeUnstable() const {
    return 0.0f;
}

bool ARopeActorBase::IsAttachingSource() const {
    return false;
}

bool ARopeActorBase::IsAttachingEndpoint() const {
    return false;
}

int32 ARopeActorBase::GetSourceTweenID() const {
    return 0;
}

int32 ARopeActorBase::GetEndpointTweenID() const {
    return 0;
}

USceneComponent* ARopeActorBase::GetCurrentSourceAttachment(FName& OutSocketName) const {
    return NULL;
}

USceneComponent* ARopeActorBase::GetCurrentEndpointAttachment(FName& OutSocketName) const {
    return NULL;
}

float ARopeActorBase::CalculateInstability() const {
    return 0.0f;
}

bool ARopeActorBase::AttachSourceToComponent(USceneComponent* Component, const FTransform& Transform, FName SocketName, bool bSimulatePhysics, float AttachTime) {
    return false;
}

bool ARopeActorBase::AttachEndpointToComponent(USceneComponent* Component, const FTransform& Transform, FName SocketName, bool bSimulatePhysics, float AttachTime) {
    return false;
}

ARopeActorBase::ARopeActorBase() {
    this->EndpointConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("EndpointConstraint"));
    this->EndpointRopeAttachment = NULL;
    this->SourceConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("SourceConstraint"));
    this->SourceRopeAttachment = NULL;
    this->RopeComponent = CreateDefaultSubobject<URopeComponent>(TEXT("RopeComponent"));
    this->PhysicsTween = CreateDefaultSubobject<UPhysicsTweenComponent>(TEXT("PhysicsTween"));
}

