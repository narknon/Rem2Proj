#include "SurfaceOrientComponent.h"

void USurfaceOrientComponent::SetEnableIK(bool bEnable, bool bReset) {
}

USurfaceOrientComponent::USurfaceOrientComponent() {
    this->bSurfaceOrientEnabled = true;
    this->ComponentToOrient = TEXT("CharacterMesh0");
    this->LeanLimit = 90.00f;
    this->LeanScale = 1.00f;
    this->LeanScaleRef = 0.00f;
    this->RotationMode = ESurfaceOrientRotationMode::PitchAndRoll;
    this->TraceDirection = ESurfaceOrientTraceDirection::ActorZ;
    this->bLockTranslationOffsetToTraceAxis = true;
    this->MaximumHeightScalar = 1.00f;
    this->bIkEnabled = false;
    this->IkMinVelocityRef = 0.00f;
    this->IkMaxVelocityRef = 0.00f;
    this->IkGroundOffset = 0.00f;
    this->IkEnableOffset = 0.00f;
    this->bCalculateOrientation = false;
    this->IkRollLimit = 180.00f;
    this->bAllowFloating = false;
    this->FloatEnableDepth = 0.00f;
    this->FloatSurfaceOffset = 0.00f;
    this->TraceStartOffsetOverride = 0.00f;
    this->TraceEndOffsetOverride = 0.00f;
    this->FrameFrequencyOffset = 1;
    this->OrientRoot = NULL;
}

