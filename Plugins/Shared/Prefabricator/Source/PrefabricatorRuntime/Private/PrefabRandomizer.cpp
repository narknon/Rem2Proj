#include "PrefabRandomizer.h"

void APrefabRandomizer::Randomize(int32 InSeed) {
}

APrefabRandomizer::APrefabRandomizer() {
    this->bRandomizeOnBeginPlay = false;
    this->SeedOffset = 0;
    this->MaxBuildTimePerFrame = 0.02f;
    this->bFastSyncBuild = false;
}

