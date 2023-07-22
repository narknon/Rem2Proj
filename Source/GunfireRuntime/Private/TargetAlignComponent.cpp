#include "TargetAlignComponent.h"

FRotator UTargetAlignComponent::GetAdjustNodeRotation() const {
    return FRotator{};
}

UTargetAlignComponent::UTargetAlignComponent() {
    this->CapsuleConvergeDistance = 0.00f;
    this->PitchLowerAngle = 45.00f;
    this->PitchUpperAngle = 60.00f;
    this->PitchAdjustSpeed = 180.00f;
    this->YawArc = 0.00f;
    this->YawAdjustSpeed = 180.00f;
    this->LastTarget = NULL;
    this->LastCapsule = NULL;
}

