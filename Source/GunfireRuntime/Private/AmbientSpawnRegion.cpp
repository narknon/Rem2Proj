#include "AmbientSpawnRegion.h"

AAmbientSpawnRegion::AAmbientSpawnRegion() {
    this->SpawnLayer = TEXT("Enemies");
    this->Range = 1000.00f;
    this->AmbientSpawnManager = NULL;
}

