#include "HoudiniSplineComponent.h"

void UHoudiniSplineComponent::Update() {
}

void UHoudiniSplineComponent::RemovePointAtIndex(const int32& Index) {
}

void UHoudiniSplineComponent::InsertPointAtIndex(const FTransform& NewPoint, const int32& Index) {
}

void UHoudiniSplineComponent::AppendPoint(const FTransform& NewPoint) {
}

void UHoudiniSplineComponent::AddCurvePoints(const TArray<FTransform>& Points) {
}

UHoudiniSplineComponent::UHoudiniSplineComponent() {
    this->CurvePoints.AddDefaulted(2);
    this->DisplayPoints.AddDefaulted(2);
    this->bClosed = false;
    this->bReversed = false;
    this->CurveOrder = 2;
    this->bIsHoudiniSplineVisible = true;
    this->CurveType = EHoudiniCurveType::Polygon;
    this->CurveMethod = EHoudiniCurveMethod::CVs;
    this->CurveBreakpointParameterization = EHoudiniCurveBreakpointParameterization::Uniform;
    this->bIsOutputCurve = false;
    this->bCookOnCurveChanged = true;
    this->bIsLegacyInputCurve = false;
    this->bHasChanged = false;
    this->bNeedsToTriggerUpdate = false;
    this->bIsInputCurve = false;
    this->bIsEditableOutputCurve = false;
    this->NodeID = -1;
}

