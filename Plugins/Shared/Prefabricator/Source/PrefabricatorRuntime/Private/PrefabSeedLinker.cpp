#include "PrefabSeedLinker.h"
#include "PrefabSeedLinkerComponent.h"

APrefabSeedLinker::APrefabSeedLinker() {
    this->SeedLinkerComponent = CreateDefaultSubobject<UPrefabSeedLinkerComponent>(TEXT("SeedLinker"));
}

