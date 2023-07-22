#include "LODVolumeManager.h"

void ULODVolumeManager::UpdateVolumesVisibility() {
}

void ULODVolumeManager::UnregisterVolume(ALODVolume* DestroyedVolume) {
}

void ULODVolumeManager::RegisterVolume(ALODVolume* SpawnedVolume) {
}

void ULODVolumeManager::OnFinishCooldown() {
}

float ULODVolumeManager::GetPlayerRangeToVolume(ALODVolume* Volume) {
    return 0.0f;
}

ULODVolumeManager* ULODVolumeManager::GetInstance(UObject* WorldContextObject) {
    return NULL;
}

ULODVolumeManager::ULODVolumeManager() {
    this->MaxUpdateInterval = 1.00f;
    this->OnCooldown = false;
}

