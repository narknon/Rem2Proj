#include "GroundCheckParams.h"

UGroundCheckParams::UGroundCheckParams() {
    this->GroundCheckType = EGroundCheckType::OnGround;
    this->CastDistance = 10.00f;
    this->TraceCapsuleRadiusScale = 1.00f;
    this->MinGroundDistance = 0.00f;
}

