#include "SpawnTableItem.h"

USpawnTableItem::USpawnTableItem() {
    this->QuantityMin = 1;
    this->QuantityMax = 1;
    this->QuantityScalarPerLevel = 0.00f;
    this->ItemLevel = -1;
    this->SetGeneratedItemLevel = false;
    this->GeneratedItemLevelOffsetMin = 0;
    this->GeneratedItemLevelOffsetMax = 0;
}

