#include "AIFollowTargetStateDecorator.h"

UAIFollowTargetStateDecorator::UAIFollowTargetStateDecorator() {
    this->MinRadius = 100.00f;
    this->MaxRadius = 200.00f;
    this->MinHeight = 60.00f;
    this->MaxHeight = 80.00f;
    this->FollowAngle = 60.00f;
    this->AdditionalFollowerAngleOffset = 40.00f;
    this->FollowAngleInterpSpeed = 0.50f;
    this->StopDistanceThreshold = 50.00f;
    this->MatchSpeed = true;
    this->MinSpeed = 50.00f;
    this->MaxSpeed = 500.00f;
    this->MatchDistance = 300.00f;
    this->NearTargetDistance = 75.00f;
    this->SpeedEaseOutScalar = 0.50f;
    this->AcceptanceRadius = 20.00f;
    this->MovingAcceptanceRadius = -1.00f;
    this->bAllowDirectMoves = true;
}

