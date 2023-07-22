#include "RopeAttachPoint.h"

FRopeAttachPoint::FRopeAttachPoint() {
    this->Actor = NULL;
    this->Component = NULL;
    this->bAutoOrientInitialBone = false;
    this->Length = 0.00f;
    this->LengthSpeed = 0.00f;
    this->DynamicLengthThreshold = 0.00f;
    this->Slack = 0.00f;
    this->LinearDampingOverride = 0.00f;
    this->AngularDampingOverride = 0.00f;
    this->StartingSegment = 0;
    this->StartingBone = 0;
    this->EndingSegment = 0;
    this->EndingBone = 0;
    this->PercentageToNextBone = 0.00f;
    this->FinalConstraint = NULL;
}

