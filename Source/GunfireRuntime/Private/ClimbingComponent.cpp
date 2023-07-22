#include "ClimbingComponent.h"
#include "Net/UnrealNetwork.h"

void UClimbingComponent::ServerSetTargetLocation_Implementation(const FReplicatedLocation& NewLocation) {
}
bool UClimbingComponent::ServerSetTargetLocation_Validate(const FReplicatedLocation& NewLocation) {
    return true;
}

void UClimbingComponent::RemoveClimbingListener(const FOnClimbSurfaceDelegate& Event) {
}

void UClimbingComponent::OnInteractInputOverride(const FName& ButtonName, ButtonEvent Event) {
}

bool UClimbingComponent::IsSidePlanted(EClimbDirectionBias Side) const {
    return false;
}

bool UClimbingComponent::IsReorienting() const {
    return false;
}

bool UClimbingComponent::IsIdle() const {
    return false;
}

bool UClimbingComponent::IsDismounting() const {
    return false;
}

bool UClimbingComponent::IsClimbing() const {
    return false;
}

bool UClimbingComponent::IsAnySidePlanted() const {
    return false;
}

FClimbableSurfaceResult UClimbingComponent::GetPreviousSurface() const {
    return FClimbableSurfaceResult{};
}

FClimbableSurfaceResult UClimbingComponent::GetCurrentSurface() const {
    return FClimbableSurfaceResult{};
}

bool UClimbingComponent::GetCurrentInput(float& OutInputMagnitude, FVector& OutWorldInputDirection) const {
    return false;
}

FQuat UClimbingComponent::GetCurrentAttachOrientation(bool bEndingOrientationIfTraversing, bool bUseShortedPath) const {
    return FQuat{};
}

void UClimbingComponent::GetAppendage(FName CurveName, FIkEffector& Result) const {
}

bool UClimbingComponent::GetAimOffsetInputs(float& Alpha, FVector2D& SurfaceDirection) const {
    return false;
}

FTransform UClimbingComponent::GetActorAttachTransform(const FClimbableSurfaceResult& ClimbableSurface, bool bApplySurfaceRotation) const {
    return FTransform{};
}

void UClimbingComponent::AddClimbingListener(const FOnClimbSurfaceDelegate& Event) {
}

void UClimbingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UClimbingComponent, PendingSurface);
    DOREPLIFETIME(UClimbingComponent, TargetLocation);
}

UClimbingComponent::UClimbingComponent() {
    this->GrabHeight = 120.00f;
    this->GrabWidth = 25.00f;
    this->GrabSplineOffset = 50.00f;
    this->SurfaceNormalIterationDistance = 15.00f;
    this->MinimumTranslationMovement = 60.00f;
    this->MinimumDirectionalMovement = 10.00f;
    this->TraceRadius = 30.00f;
    this->TraceHalfHeight = 55.00f;
    this->ContiguousSurfaceDistanceThreshold = 40.00f;
    this->ContiguousSurfaceIterationDistance = 50.00f;
    this->OccupancyCapsleRadius = 20.00f;
    this->OccupancyCapsleHalfHeight = 50.00f;
    this->OccupancyPathRadius = 20.00f;
    this->SplineWeightDistanceScalar = 0.25f;
    this->MinimumSplineWeight = 0.10f;
    this->RandomWeight = 1.00f;
    this->MaxAnimationUsagePenalty = 15.00f;
    this->AnimationWeightMaxIncreaseWhenUnused = 10.00f;
    this->TranslationWeightScale = 1.00f;
    this->RotationWeightScale = 1.00f;
    this->LeadDirectionWeight = 0.20f;
    this->VerticalClimbCosineThresh = 0.10f;
    this->NeighboringPointGrabWidthScalar = 2.00f;
    this->LimbMatchingMandatoryAppendageBonus = 4.00f;
    this->LimbMatchingOptionalAppendageBonus = 1.00f;
    this->AnimationTypeBonusWeight = 10.00f;
    this->InputPrerequisiteCosineThresh = 0.87f;
    this->DefaultMinimumBlendTime = -1.00f;
    this->InteractInputDuration = 0.30f;
    this->InteractionIcon = NULL;
    this->DefaultMountingCamera = NULL;
    this->MountingCameraBlendTime = -1.00f;
    this->DefaultClimbingCamera = NULL;
    this->ClimbingCameraBlendTime = -1.00f;
    this->DefaultDismountCamera = NULL;
    this->DismountCameraBlendTime = -1.00f;
    this->bEnableAimOffset = false;
    this->AimOffsetBlendInSpeed = 2.00f;
    this->AimOffsetBlendOutSpeed = 2.00f;
    this->MinAppendageDistanceForRecalculate = 50.00f;
}

