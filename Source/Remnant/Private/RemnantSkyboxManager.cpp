#include "RemnantSkyboxManager.h"

void URemnantSkyboxManager::RegisterSkyboxModifierVolume(AActor* SkyboxModVolume) {
}

void URemnantSkyboxManager::RefreshModifierVolumes() {
}

void URemnantSkyboxManager::OnPlayerExitVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void URemnantSkyboxManager::OnPlayerEnterVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

bool URemnantSkyboxManager::IsPlayerInAnyModifierVolumes(AActor* Player, AActor* ExcludedVolume) {
    return false;
}

void URemnantSkyboxManager::InitSkyboxManager(AActor* SkyboxActor) {
}

URemnantSkyboxManager* URemnantSkyboxManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

URemnantSkyboxManager::URemnantSkyboxManager() {
    this->SkyboxRefActor = NULL;
}

