#include "SpawnTableEncounterParams.h"

USpawnTableEncounterParams::USpawnTableEncounterParams() {
    this->WaitForAllSpawnsDead = false;
    this->ChooseNewSpawnDirection = true;
    this->SpawnWeightMultiplier = 1.00f;
    this->SpawnDelayMin = 0.00f;
    this->SpawnDelayMax = 0.00f;
}

