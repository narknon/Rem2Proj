#include "ResourceSpawnManager.h"

void UResourceSpawnManager::OnUninitialize() {
}

void UResourceSpawnManager::OnSpawnListLoaded(int32 TileID) {
}

void UResourceSpawnManager::OnSetTileActive(int32 TileID, bool Active) {
}

void UResourceSpawnManager::OnGenerateResources() {
}

UResourceSpawnManager::UResourceSpawnManager() {
    this->ResourceDef = NULL;
    this->Level = -1;
    this->Generated = false;
}

