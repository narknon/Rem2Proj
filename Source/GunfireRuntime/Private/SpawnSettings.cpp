#include "SpawnSettings.h"

FSpawnSettings::FSpawnSettings() {
    this->BoidBP = NULL;
    this->NumberOfBoids = 0;
    this->RandomNumberOfBoids = 0;
    this->SpawnStyle = EBoidSpawnStyle::Ground;
    this->SpawnRadius = 0.00f;
    this->SpawnHeightOffset = 0.00f;
    this->RandomizeDirection = false;
}

