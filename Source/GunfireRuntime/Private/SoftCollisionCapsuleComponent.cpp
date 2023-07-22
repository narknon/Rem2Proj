#include "SoftCollisionCapsuleComponent.h"

bool USoftCollisionCapsuleComponent::ShouldIgnoreActor(AActor* Actor) const {
    return false;
}

void USoftCollisionCapsuleComponent::SetShouldIgnoreActor(AActor* Actor, bool bShouldIgnore) {
}

void USoftCollisionCapsuleComponent::SetEnabled(bool bIsEnabled) {
}

bool USoftCollisionCapsuleComponent::IsEnabled() const {
    return false;
}

USoftCollisionCapsuleComponent::USoftCollisionCapsuleComponent() {
    this->SoftCharacterCollisionWeight = 9999.00f;
}

