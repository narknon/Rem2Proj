#include "OnGroundCondition.h"
#include "GroundCheckParams_Default.h"

UOnGroundCondition::UOnGroundCondition() {
    this->GroundCheckType = EGroundCheckType::OnGround;
    this->CastDistance = 10.00f;
    this->MinHitDistance = 0.00f;
    this->TraceCapsuleRadiusScale = 1.00f;
    this->GroundCheckParams = UGroundCheckParams_Default::StaticClass();
}

