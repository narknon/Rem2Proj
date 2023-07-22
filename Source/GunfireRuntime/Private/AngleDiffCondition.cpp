#include "AngleDiffCondition.h"

UAngleDiffCondition::UAngleDiffCondition() {
    this->AngleComponent = EAngleComponent::Yaw;
    this->Angle1Ref = EAngleRef::Heading;
    this->Angle1RefOffset = 0.00f;
    this->Angle2Ref = EAngleRef::MoveDir;
    this->Angle2RefOffset = 0.00f;
    this->Arc = 180.00f;
}

