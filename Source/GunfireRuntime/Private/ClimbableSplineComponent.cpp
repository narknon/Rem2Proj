#include "ClimbableSplineComponent.h"

void UClimbableSplineComponent::SetSurfaceTags(TArray<FName> NewSurfaceTags) {
}

void UClimbableSplineComponent::SetDisabled(bool bIsDisabled) {
}

bool UClimbableSplineComponent::IsMoveableSurface() const {
    return false;
}

bool UClimbableSplineComponent::IsExclusiveSurface() const {
    return false;
}

bool UClimbableSplineComponent::IsDisabled() const {
    return false;
}

void UClimbableSplineComponent::DetachSplinePoint(int32 SplinePoint) {
}

void UClimbableSplineComponent::DetachAllSplinePoints() {
}

bool UClimbableSplineComponent::CheckSurfaceTags(const TArray<FName>& Tags, bool bAllOrNothing) const {
    return false;
}

bool UClimbableSplineComponent::CanCharacterClimb(ACharacterGunfire* Character) const {
    return false;
}

void UClimbableSplineComponent::AttachPointToComponent(int32 SplinePoint, USceneComponent* AttachComponent, const FTransform& RelativeTransform, FName AttachSocket, bool bMoveImmediately, bool bUpdateSpline) {
}

UClimbableSplineComponent::UClimbableSplineComponent() {
    this->bExclusiveSurface = false;
    this->bDisabled = false;
}

