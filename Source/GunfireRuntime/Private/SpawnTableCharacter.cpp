#include "SpawnTableCharacter.h"

USpawnTableCharacter::USpawnTableCharacter() {
    this->QuantityMin = 1;
    this->QuantityMax = 1;
    this->QuantityScaling = false;
    this->SpawnOnNavmesh = true;
    this->SpawnAccessibleOnly = true;
    this->SpawnVisibility = ESpawnVisibility::OutOfSight;
    this->SpawnDistanceMin = 1500.00f;
    this->SpawnDistanceMax = 6400.00f;
    this->ForceSpawnDistance = false;
    this->SpawnRateMin = 0.25f;
    this->SpawnRateMax = 2.00f;
    this->SpawnFrom = ESpawnFrom::Random;
    this->SpawnArc = 40.00f;
    this->SpawnFaction = NULL;
    this->SpawnThrottling = ESpawnThrottling::ThrottleWeightOnPlayers;
    this->SpawnWeightMultiplier = 1.00f;
    this->UseSpawnPointSpawnParams = false;
    this->SpawnPointSpawnVisibility = ESpawnVisibility::OutOfSight;
    this->SpawnPointSpawnDistanceMin = 1500.00f;
    this->SpawnPointSpawnDistanceMax = 6400.00f;
}

