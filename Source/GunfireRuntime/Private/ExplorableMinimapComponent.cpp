#include "ExplorableMinimapComponent.h"

void UExplorableMinimapComponent::SetIsSecret(bool InIsSecret) {
}

AActor* UExplorableMinimapComponent::GetSpawnedActor() {
    return NULL;
}

UExplorableMinimapComponent::UExplorableMinimapComponent() {
    this->ActorClass = NULL;
    this->bFaceCamera = true;
    this->bIsSecret = false;
    this->RevealRange = 0.00f;
    this->RevealRangeZ = 100.00f;
    this->MaterialParamCollection = NULL;
    this->MaterialParamCollectionInst = NULL;
}

