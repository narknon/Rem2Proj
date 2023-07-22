#include "AmbientSpawnManager.h"

void UAmbientSpawnManager::OnUninitialize() {
}

void UAmbientSpawnManager::OnSetTileActive(int32 TileID, bool Active) {
}

void UAmbientSpawnManager::OnGenerateAmbientSpawns() {
}

void UAmbientSpawnManager::OnDead(uint8 Reason, ACharacterGunfire* Character, AActor* Cause) {
}

void UAmbientSpawnManager::OnActorDestroyed(AActor* Actor) {
}

void UAmbientSpawnManager::OnActorDead(const FDamageInfo& DamageInfo) {
}

int32 UAmbientSpawnManager::GetNumActiveActorsOfType(TSoftClassPtr<AActor> ActorBP) {
    return 0;
}

FTileAmbientDebugInfo UAmbientSpawnManager::GetDebugInfo(int32 TileID) {
    return FTileAmbientDebugInfo{};
}

int32 UAmbientSpawnManager::GetActiveCharacterCount() {
    return 0;
}

UAmbientSpawnManager::UAmbientSpawnManager() {
    this->Preload = false;
    this->Generated = false;
}

