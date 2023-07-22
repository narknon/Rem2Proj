#include "ReplicatedHitUtil.h"

FReplicatedTrace UReplicatedHitUtil::MakeReplicatedTraceFromHit(const FHitResult& Hit) {
    return FReplicatedTrace{};
}

FReplicatedLocation UReplicatedHitUtil::MakeReplicatedLocationFromHit(const FHitResult& Hit) {
    return FReplicatedLocation{};
}

FReplicatedLocation UReplicatedHitUtil::MakeReplicatedLocation(UPrimitiveComponent* Component, FName BoneName, const FVector& WorldLocation) {
    return FReplicatedLocation{};
}

FReplicatedHit UReplicatedHitUtil::MakeReplicatedHitFromHit(const FHitResult& Hit) {
    return FReplicatedHit{};
}

bool UReplicatedHitUtil::GetHitFromReplicatedTrace(const FReplicatedTrace& ReplicatedTrace, const FVector& From, FHitResult& Hit) {
    return false;
}

bool UReplicatedHitUtil::GetHitFromReplicatedHit(const FReplicatedHit& ReplicatedHit, FHitResult& Hit) {
    return false;
}

void UReplicatedHitUtil::BreakReplicatedLocation(const FReplicatedLocation& Location, UPrimitiveComponent*& Component, FName& BoneName, FVector& WorldLocation) {
}

UReplicatedHitUtil::UReplicatedHitUtil() {
}

