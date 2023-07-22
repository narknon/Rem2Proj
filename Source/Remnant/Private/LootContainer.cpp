#include "LootContainer.h"

void ALootContainer::OnSpawnListLoaded() {
}

void ALootContainer::Generate(USpawnTable* SpawnTable, const TArray<FName>& SpawnTags) {
}

void ALootContainer::ClearItems() {
}

ALootContainer::ALootContainer() {
    this->IsGenerating = false;
}

