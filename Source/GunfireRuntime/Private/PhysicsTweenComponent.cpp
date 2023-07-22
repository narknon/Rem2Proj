#include "PhysicsTweenComponent.h"

bool UPhysicsTweenComponent::StopTweenAndInvalidateHandle(int32& TweenID) {
    return false;
}

bool UPhysicsTweenComponent::StopTween(int32 TweenID) {
    return false;
}

int32 UPhysicsTweenComponent::StopComponent(UPrimitiveComponent* Primitive, FPhysicsTweenParameters Parameters, float VelocityTolerance) {
    return 0;
}

bool UPhysicsTweenComponent::StopAllTweens() {
    return false;
}

void UPhysicsTweenComponent::SetTweenIntensity(int32 TweenID, float Intensity) {
}

int32 UPhysicsTweenComponent::MoveComponent(UPrimitiveComponent* Primitive, const FTransform& TargetTransform, FPhysicsTweenParameters Parameter, float DistanceTolerance, USceneComponent* TargetComponent, FName SocketName) {
    return 0;
}

bool UPhysicsTweenComponent::IsTweenFinished(int32 TweenID) const {
    return false;
}

void UPhysicsTweenComponent::InvalidateHandle(int32& TweenHandle) {
}

float UPhysicsTweenComponent::GetTweenIntensity(int32 TweenID) const {
    return 0.0f;
}

int32 UPhysicsTweenComponent::DragComponent(UPrimitiveComponent* Primitive, USceneComponent* PullOrigin, USceneComponent* PullSource, FFloatRange Range, FPhysicsTweenParameters Parameters) {
    return 0;
}

int32 UPhysicsTweenComponent::BlendOutPhysics(USkeletalMeshComponent* Mesh, float BlendTime) {
    return 0;
}

int32 UPhysicsTweenComponent::AttachComponents(UPrimitiveComponent* Primitive, USceneComponent* AttachComponent, const FTransform& AttachTransform, UPhysicsConstraintComponent* Constraint, bool bSimulatePhysics, FName SocketName, float AttachTime, EEaseType Ease, float EaseExponent, bool bOverridePivotLocation, FVector PivotOverride) {
    return 0;
}

UPhysicsTweenComponent::UPhysicsTweenComponent() {
}

