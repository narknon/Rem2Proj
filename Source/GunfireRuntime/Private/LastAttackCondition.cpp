#include "LastAttackCondition.h"

ULastAttackCondition::ULastAttackCondition() {
    this->Condition = ELastAttackCondition::AttackHitCharacter;
    this->RequiredCause = NULL;
    this->Critical = EYesNo::DontCare;
    this->Killed = EYesNo::DontCare;
    this->CurrentTarget = EYesNo::DontCare;
    this->RequiredResult = EYesNo::DontCare;
}

