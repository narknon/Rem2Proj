#include "TargetingComponent.h"

void UTargetingComponent::OnNewTargetSet_Implementation(FHeuristicBoundsHitResult& NewTargetHitResult) {
}

bool UTargetingComponent::GetTarget(FHeuristicBoundsHitResult& OutTargetHitResult, bool bForceRecalc) {
    return false;
}

bool UTargetingComponent::GetSnapTarget(FHeuristicBoundsHitResult& OutSnapTargetHitResult, bool bForceRecalc) {
    return false;
}

UTargetingComponent::UTargetingComponent() {
    this->bCacheTargetOnTick = true;
    this->TargetUseTrace = true;
    this->TargetTraceRange = 5000.00f;
    this->AimAdjustAngle = 1.50f;
    this->AimAdjustBufferScalar = 1.20f;
    this->AimAdjustTowardsCenterOfMassPct = 0.25f;
    this->SnapAngle = 5.00f;
    this->CachedTargetManager = NULL;
}

