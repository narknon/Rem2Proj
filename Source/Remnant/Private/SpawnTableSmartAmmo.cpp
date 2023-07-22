#include "SpawnTableSmartAmmo.h"

USpawnTableSmartAmmo::USpawnTableSmartAmmo() {
    this->WeightedChanceForNoAmmo = 50;
    this->WeighteChanceWhenEmpty = 75;
    this->WeighteChanceQuarter = 50;
    this->WeighteChanceHalf = 25;
    this->WeighteChanceThreeQuarters = 10;
    this->WeighteChanceLessThanFull = 5;
    this->AmmoProximityRadius = 1500.00f;
}

