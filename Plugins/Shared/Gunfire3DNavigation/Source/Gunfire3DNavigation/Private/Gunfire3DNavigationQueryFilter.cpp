#include "Gunfire3DNavigationQueryFilter.h"

UGunfire3DNavigationQueryFilter::UGunfire3DNavigationQueryFilter() {
    this->MaxPathSearchNodes = 2048;
    this->PathHeuristicScale = 2.00f;
    this->NodeBaseTraversalCost = 1.00f;
}

