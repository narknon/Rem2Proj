#include "Faction.h"
#include "Templates/SubclassOf.h"

EAffiliation UFaction::GetAffiliationForActors(const AActor* Actor1, const AActor* Actor2) const {
    return EAffiliation::SuperFriendly;
}

EAffiliation UFaction::GetAffiliation(TSubclassOf<UFaction> Faction1, TSubclassOf<UFaction> Faction2) const {
    return EAffiliation::SuperFriendly;
}

UFaction::UFaction() {
    this->InheritAffiliations = NULL;
    this->AffiliationTowardsSameFaction = EAffiliation::Friendly;
    this->ApplyFriendlyFireDamageScalar = true;
}

