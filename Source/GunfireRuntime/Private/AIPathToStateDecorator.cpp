#include "AIPathToStateDecorator.h"

UAIPathToStateDecorator::UAIPathToStateDecorator() {
    this->AcceptanceRadius = 100.00f;
    this->AcceptanceRadiusMax = -1.00f;
    this->MinDestinationHeightOffset = 60.00f;
    this->MaxDestinationHeightOffset = 80.00f;
    this->StopOnOverlap = true;
    this->IncludeGoalRadius = true;
    this->OrientToTargetRadius = -1.00f;
    this->PathRestartDistance = -1.00f;
    this->AdjustByTargetAgentHalfHeight = false;
    this->ProjectDestinationToNavMesh = false;
}

