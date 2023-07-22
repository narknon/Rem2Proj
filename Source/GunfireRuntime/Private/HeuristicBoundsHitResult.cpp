#include "HeuristicBoundsHitResult.h"

FHeuristicBoundsHitResult::FHeuristicBoundsHitResult() {
    this->Result = EHeuristicBoundsTraceResult::Fail_OutOfRange;
    this->Component = NULL;
    this->DistanceToTarget = 0.00f;
    this->ClosenessToCenter = 0.00f;
    this->AngleFromCenter = 0.00f;
    this->bHasLOS = false;
}

