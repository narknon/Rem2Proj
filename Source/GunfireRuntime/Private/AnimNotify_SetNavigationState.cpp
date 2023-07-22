#include "AnimNotify_SetNavigationState.h"

UAnimNotify_SetNavigationState::UAnimNotify_SetNavigationState() {
    this->NavType = ENavigationType::Unknown;
    this->bIsStateTransient = false;
}

