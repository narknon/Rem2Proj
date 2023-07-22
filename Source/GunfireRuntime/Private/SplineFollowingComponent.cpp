#include "SplineFollowingComponent.h"

void USplineFollowingComponent::SetSpline(USplineComponent* Spline, TEnumAsByte<ESplineAttachmentRule::Type> Location, float CustomTime) {
}

void USplineFollowingComponent::SetRotationOffsetFromRotator(const FRotator& NewRotation) {
}

FTransform USplineFollowingComponent::GetTransformAtTime(float Time) const {
    return FTransform{};
}

USplineComponent* USplineFollowingComponent::GetSpline() const {
    return NULL;
}

float USplineFollowingComponent::GetCurrentSplineTime() const {
    return 0.0f;
}

USplineFollowingComponent::USplineFollowingComponent() {
    this->MovementSpeed = 1000.00f;
    this->MovementDirection = ESplineMovementDirection::Forward;
    this->AttachType = ESplineAttachType::LocationAndRotation;
    this->bPingPong = false;
    this->bIsPaused = false;
    this->ReplicationSmoothTime = 0.20f;
}

