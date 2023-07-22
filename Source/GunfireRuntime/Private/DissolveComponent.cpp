#include "DissolveComponent.h"

void UDissolveComponent::DissolveOut(float Time) {
}

void UDissolveComponent::DissolveIn(float Time) {
}

void UDissolveComponent::Dissolve(float Time, float DissolveFXLingerAfterDeathTime) {
}

UDissolveComponent::UDissolveComponent() {
    this->DissolveFX = NULL;
    this->DissolveFXThreshold = 1.00f;
    this->DistinctDissolveInFX = false;
    this->DissolveInFX = NULL;
    this->DissolveInFXThreshold = 1.00f;
    this->DestroyOnComplete = true;
    this->bAutoHideMeshes = true;
    this->bAutoShowMeshesOnDissolveIn = true;
    this->bFilterBySlotName = false;
}

