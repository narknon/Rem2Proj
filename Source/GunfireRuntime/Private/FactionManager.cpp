#include "FactionManager.h"
#include "Templates/SubclassOf.h"

void UFactionManager::PropagateFactionOverride(UFactionComponent* Source, TSubclassOf<UFaction> Faction, EAffiliation Affiliation) {
}

UFactionManager* UFactionManager::GetFactionManager(UObject* WorldContextObject) {
    return NULL;
}

UFactionManager::UFactionManager() {
    this->FactionOverridePropogationRadius = 5000.00f;
}

