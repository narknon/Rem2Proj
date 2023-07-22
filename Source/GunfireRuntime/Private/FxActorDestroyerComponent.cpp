#include "FxActorDestroyerComponent.h"

void UFxActorDestroyerComponent::SoftDestroyOwner() {
}

UFxActorDestroyerComponent* UFxActorDestroyerComponent::SoftDestroyActor(AActor* Actor, const TArray<FName>& InIgnoredComponents, float InForceDestroyTimer) {
    return NULL;
}

bool UFxActorDestroyerComponent::IsSoftDestroying() const {
    return false;
}

UFxActorDestroyerComponent::UFxActorDestroyerComponent() {
    this->ForceDestroyTimer = 10.00f;
}

