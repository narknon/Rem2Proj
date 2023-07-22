#include "BoidSettings.h"

FBoidSettings::FBoidSettings() {
    this->PerceptionRadius = 0.00f;
    this->MovementSpeed = 0.00f;
    this->TurnSpeed = 0.00f;
    this->RotationTurnSpeed = 0.00f;
    this->WanderRadius = 0.00f;
    this->WanderHalfHeight = 0.00f;
    this->AlignmentForce = 0.00f;
    this->CohesionForce = 0.00f;
    this->SeparationForce = 0.00f;
    this->SeparationInnerRadius = 0.00f;
    this->SeparationOuterRadius = 0.00f;
    this->GoalSeekingForce = 0.00f;
    this->GoalSeekingForceZ = 0.00f;
    this->GoalTurnSpeed = 0.00f;
    this->GoalZOffset = 0.00f;
    this->AvoidanceForce = 0.00f;
    this->AvoidTraceChannel = ECC_WorldStatic;
    this->AvoidanceDistance = 0.00f;
    this->AvoidanceConeAngle = 0.00f;
    this->AvoidanceIterations = 0;
    this->AvoidanceTurnSpeedMin = 0.00f;
    this->AvoidanceTurnSpeedMax = 0.00f;
    this->AvoidanceRadius = 0.00f;
    this->bConstrainToPlane = false;
    this->PlaneConstraintAxis = EPlaneConstraintAxisSetting::Custom;
}

