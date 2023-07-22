#include "ClimbableSurfaceFilter.h"

UClimbableSurfaceFilter::UClimbableSurfaceFilter() {
    this->bValidatePitch = true;
    this->SurfacePitchAngle = 90.00f;
    this->SurfacePitchArc = 45.00f;
    this->bValidateYaw = true;
    this->SurfaceYawAngle = 0.00f;
    this->bMirrorYawValidate = false;
    this->SurfaceYawArc = 45.00f;
    this->Gate = ELogicalOperator::And;
    this->MountingCamera = NULL;
    this->MountingCameraBlendTime = -1.00f;
    this->ClimbingCamera = NULL;
    this->ClimbingCameraBlendTime = -1.00f;
    this->DismountCamera = NULL;
    this->DismountCameraBlendTime = -1.00f;
}

