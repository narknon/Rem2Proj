#include "RelevantActor.h"

FRelevantActor::FRelevantActor() {
    this->Affiliation = EAffiliation::SuperFriendly;
    this->AwarenessState = EAwarenessState::None;
    this->AwarenessStateTimer = 0.00f;
    this->Distance = 0.00f;
    this->VisState = EVisState::Unknown;
    this->bHasPreviouslyBeenVisible = false;
    this->bHasSphereLOS = false;
    this->bHasLOS = false;
    this->bHasLOF = false;
    this->bHasDirectPath = false;
    this->bPersistent = false;
    this->bAlwaysRelevant = false;
    this->Threat = 0.00f;
    this->SightAwareness = 0.00f;
    this->BonusLostSightRange = 0.00f;
}

