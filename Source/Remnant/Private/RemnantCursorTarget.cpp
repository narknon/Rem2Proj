#include "RemnantCursorTarget.h"

void URemnantCursorTarget::ForceRefreshCachedVisibility() {
}

void URemnantCursorTarget::CatchWidgetAnimStateChange(EAnimationState AnimState) {
}

void URemnantCursorTarget::CatchRootVisibilityUpdate(ESlateVisibility NewVisibility, ESlateVisibility PrevVisibility) {
}

URemnantCursorTarget::URemnantCursorTarget() {
    this->GravitySpeedMod = 0.00f;
    this->OverrideGravityDistanceTolerance = -1.00f;
    this->bFrictionOverrideActive = false;
    this->OverrideFrictionMod = 0.00f;
}

