#include "HeuristicBoundsComponent.h"

void UHeuristicBoundsComponent::SetOuterExtent(const FVector& NewExtent) {
}

FTransform UHeuristicBoundsComponent::GetWorldTransformForPanelAtSetDistance(const FVector& ViewLocation, const FVector2D& PanelSize, EHeuristicBoundsPanelAlignment Alignment, float ProjectionDistance) const {
    return FTransform{};
}

FTransform UHeuristicBoundsComponent::GetWorldTransformForPanel(const FVector& ViewLocation, const FVector2D& PanelSize, EHeuristicBoundsPanelAlignment Alignment) const {
    return FTransform{};
}

TArray<FVector> UHeuristicBoundsComponent::GetBoundsBracketOnPlane(const FVector& ViewLocation, float PlaneDistance) const {
    return TArray<FVector>();
}

UHeuristicBoundsComponent::UHeuristicBoundsComponent() {
    this->BoundsShape = EHeuristicBoundsShape::Disc;
    this->bScaleWithDistance = true;
    this->OuterRadius = 50.00f;
    this->InnerRadius = 0.00f;
    this->InnerExtentScale = 0.00f;
    this->BracketScale = 1.00f;
    this->bSlidingBoundsLocation = false;
    this->SlidingMaxima = 0.00f;
    this->SlidingMinima = 0.00f;
}

