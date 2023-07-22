#include "HasItemByTypeCondition.h"

UHasItemByTypeCondition::UHasItemByTypeCondition() {
    this->Type = NULL;
    this->Quantity = 1;
    this->Equipped = EYesNo::DontCare;
    this->Active = EYesNo::DontCare;
    this->InHand = EYesNo::DontCare;
}

