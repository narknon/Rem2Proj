#include "AINavLinkCondition.h"

UAINavLinkCondition::UAINavLinkCondition() {
    this->bFilterByAreaFlag = true;
    this->AreaFlag = ENavAreaFlag::Default;
    this->LookAheadDistance = 50.00f;
}

