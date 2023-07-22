#include "SpawnTableEntry.h"

int32 USpawnTableEntry::ScaleSpawnQuantity(UObject* WorldContextObject, int32 Quantity) {
    return 0;
}

USpawnTableEntry::USpawnTableEntry() {
    this->Chance = 10;
    this->ChanceDecayBelowMinLevel = 1000;
    this->ChanceDecayAboveMaxLevel = 1000;
    this->ChanceIncreaseOnFail = 0;
    this->LevelMin = 0;
    this->LevelMax = 100;
    this->RatingMin = 0;
    this->RatingMax = 10;
}

