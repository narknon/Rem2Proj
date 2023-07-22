#include "FlashlightLOSTaggingComponent.h"

bool UFlashlightLOSTaggingComponent::LightEndOverlap(AActor* Actor) {
    return false;
}

void UFlashlightLOSTaggingComponent::LightBeginOverlap(AActor* Actor) {
}

void UFlashlightLOSTaggingComponent::EnableOverlapCheck(UPrimitiveComponent* Primitive) {
}

void UFlashlightLOSTaggingComponent::DisableOverlapCheck() {
}

UFlashlightLOSTaggingComponent::UFlashlightLOSTaggingComponent() {
    this->OverlapComponent = NULL;
}

