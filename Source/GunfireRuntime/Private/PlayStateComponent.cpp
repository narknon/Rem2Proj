#include "PlayStateComponent.h"

bool UPlayStateComponent::IsLocallyControlled() const {
    return false;
}

bool UPlayStateComponent::IsHidingScreen() const {
    return false;
}

APlayerControllerGunfire* UPlayStateComponent::GetOwningPlayerController() const {
    return NULL;
}

float UPlayStateComponent::GetElapsedTransitionTime() const {
    return 0.0f;
}

UPlayStateEffect* UPlayStateComponent::GetActiveEffect(UClass* Class) const {
    return NULL;
}

UPlayStateComponent::UPlayStateComponent() {
    this->StateSet = NULL;
    this->CurrentState = NULL;
}

