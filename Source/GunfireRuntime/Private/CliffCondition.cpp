#include "CliffCondition.h"
#include "CliffConditionParams_Default.h"

UCliffCondition::UCliffCondition() {
    this->Params = UCliffConditionParams_Default::StaticClass();
}

