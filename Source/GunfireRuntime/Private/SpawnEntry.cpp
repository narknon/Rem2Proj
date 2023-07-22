#include "SpawnEntry.h"

FSpawnEntry::FSpawnEntry() {
    this->Type = ESpawnType::All;
    this->SpawnFaction = NULL;
    this->CachedActorBP = NULL;
    this->Level = 0;
    this->Quantity = 0;
    this->SpawnFlags = 0;
    this->Entry = NULL;
}

