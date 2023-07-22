#include "ClimbAnimData.h"

UClimbAnimData::UClimbAnimData() {
    this->SurfaceFilter = NULL;
    this->AnimationType = EClimbAnimationType::Generic;
    this->CameraOverride = NULL;
    this->TurnAwayDirection = EClimbTurnAwayDirection::None;
    this->CameraBlendTimeOverride = -1.00f;
    this->MovementType = EClimbMovementType::Discrete;
    this->InputMethod = EClimbInputMethod::MoveInput;
    this->MoveInputFilter = EClimbMoveInputFilter::Any;
    this->Facing = EClimbFacing::Surface;
    this->TransitionType = EClimbTransitionType::Any;
    this->ValidationMode = EClimbValidationMode::RootMotion;
    this->BaseWeight = 0.00f;
    this->bUseManualSupportedGroups = false;
    this->bHasInputPrerequisite = false;
    this->bManualInputDirection = false;
    this->bOverridePositionMaxTolerances = false;
    this->bOverridePositionMinTolerances = false;
    this->bOverrideDirectionalTolerance = false;
    this->DirectionalTolerance = 0.00f;
    this->bOverrideMoveArc = false;
    this->MoveArc = 45.00f;
    this->bOverrideMinimumTranslationMovement = false;
    this->MinimumTranslationMovement = 0.00f;
    this->bOverrideMinimumDirectionalMovement = false;
    this->MinimumDirectionalMovement = 0.00f;
    this->bOverrideLeadingDirection = false;
    this->LeadingDirection = EClimbDirectionBias::DontCare;
    this->bModifySurfaceFacing = false;
    this->bManualRelativeDesiredRotationDirection = false;
    this->bOverrideMinimumBlendTime = false;
    this->MinimumBlendTime = 0.05f;
    this->bOverrideMaximumBlendTime = false;
    this->MaximumBlendTime = 0.20f;
    this->bMaintainEffectorLocation = false;
    this->bBlockTraversalDuringRootMotion = true;
    this->LeadTime = 0.00f;
}

