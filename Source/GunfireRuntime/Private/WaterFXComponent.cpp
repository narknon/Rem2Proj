#include "WaterFXComponent.h"
#include "Templates/SubclassOf.h"

bool UWaterFXComponent::IsInWater() const {
    return false;
}

TSubclassOf<UPhysicsBoundsType> UWaterFXComponent::GetWaterType() const {
    return NULL;
}

float UWaterFXComponent::GetWaterLevel() const {
    return 0.0f;
}

float UWaterFXComponent::GetWaterDepth() const {
    return 0.0f;
}

float UWaterFXComponent::GetSubmergeDepth() const {
    return 0.0f;
}

UWaterFXComponent::UWaterFXComponent() {
    this->Channel = ECC_WorldStatic;
    this->ImpactFXThreshold = 0.50f;
    this->LastWaterType = NULL;
    this->WakeVFX = NULL;
}

