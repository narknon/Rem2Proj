#include "ApplyDamageContextData.h"

FApplyDamageContextData::FApplyDamageContextData() {
    this->DamageOwner = NULL;
    this->Cause = NULL;
    this->Target = NULL;
    this->OwnerStats = NULL;
    this->CauseStats = NULL;
    this->TargetStats = NULL;
    this->DamageType = NULL;
    this->TargetHitLogComp = NULL;
    this->TargetActionComp = NULL;
    this->TargetTraitsComp = NULL;
    this->TargetStateMachineComp = NULL;
}

