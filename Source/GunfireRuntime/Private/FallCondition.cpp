#include "FallCondition.h"

UFallCondition::UFallCondition() {
    this->CheckBy = EFallConditionCheck::IsUnsafeOrFatalFall;
    this->MinimumFallDistance = 0.00f;
}

