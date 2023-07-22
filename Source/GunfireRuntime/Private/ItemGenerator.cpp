#include "ItemGenerator.h"

void UItemGenerator::GenerateItems(FItemGenRequest Request, TArray<FItemGenResult>& Results) {
}

UItemGenerator::UItemGenerator() {
    this->Chance = 10;
    this->LevelMin = 0;
    this->LevelMax = 100;
}

