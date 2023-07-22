#include "ActorQueryFilter.h"

FActorQueryFilter::FActorQueryFilter() {
    this->Affiliation = EAffiliation::SuperFriendly;
    this->RefActor = NULL;
    this->IgnoreRefActor = false;
    this->SortResultsByDistance = false;
    this->SolveIn2D = false;
    this->TestLineOfSight = false;
    this->TestCollision = false;
    this->TestHealth = false;
    this->HealthCompare = CompareOp::GreaterThan;
    this->HealthValue = 0.00f;
}

