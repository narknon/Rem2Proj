#include "PrefabActor.h"
#include "PrefabComponent.h"

void APrefabActor::SavePrefab() {
}

void APrefabActor::RandomizeSeed(const FRandomStream& InRandom, bool bRecursive) {
}

void APrefabActor::LoadPrefab() {
}

bool APrefabActor::IsPrefabOutdated() {
    return false;
}

UPrefabricatorAsset* APrefabActor::GetPrefabAsset() {
    return NULL;
}

APrefabActor::APrefabActor() {
    this->PrefabComponent = CreateDefaultSubobject<UPrefabComponent>(TEXT("PrefabComponent"));
    this->Seed = 0;
}

