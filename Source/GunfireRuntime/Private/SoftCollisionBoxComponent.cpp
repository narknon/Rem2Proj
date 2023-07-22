#include "SoftCollisionBoxComponent.h"

bool USoftCollisionBoxComponent::ShouldIgnoreActor(AActor* Actor) const {
    return false;
}

void USoftCollisionBoxComponent::SetShouldIgnoreActor(AActor* Actor, bool bShouldIgnore) {
}

void USoftCollisionBoxComponent::SetEnabled(bool bIsEnabled) {
}

USoftCollisionBoxComponent::USoftCollisionBoxComponent() {
    this->SoftCharacterCollisionWeight = 9999.00f;
}

