#include "HasItemCondition.h"

UHasItemCondition::UHasItemCondition() {
    this->IncludedSubClassess = false;
    this->IncludeMyChildClassess = false;
    this->Quantity = 1;
    this->Equipped = EYesNo::DontCare;
    this->Active = EYesNo::DontCare;
    this->InHand = EYesNo::DontCare;
}

