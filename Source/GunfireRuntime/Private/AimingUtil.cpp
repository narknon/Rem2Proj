#include "AimingUtil.h"

bool UAimingUtil::ShouldShowProjectileVisualization(AActor* Aimable) {
    return false;
}

float UAimingUtil::GetRange(AActor* Aimable) {
    return 0.0f;
}

AActor* UAimingUtil::GetCurrentAimable(AActor* Owner, bool bInHandOnly) {
    return NULL;
}

FAimingParameters UAimingUtil::GetAimingParameters(AActor* Aimable) {
    return FAimingParameters{};
}

UAimingComponent* UAimingUtil::GetAimingComponent(AActor* Aimable) {
    return NULL;
}

bool UAimingUtil::CanStopAiming(AActor* Aimable) {
    return false;
}

bool UAimingUtil::CanAim(AActor* Aimable) {
    return false;
}

UAimingUtil::UAimingUtil() {
}

