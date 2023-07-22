#include "SpawnTableActor.h"

USpawnTableActor::USpawnTableActor() {
    this->QuantityMin = 1;
    this->QuantityMax = 1;
    this->QuantityScaling = false;
    this->SpawnAccessibleOnly = true;
}

