#include "PushIKAppendage.h"

FPushIKAppendage::FPushIKAppendage() {
    this->IKMethod = EPushIKMethod::SnapToPoint;
    this->DefaultAlpha = 0.00f;
    this->MaximumExtent = 0.00f;
    this->TraceDistance = 0.00f;
    this->TraceStartingOffset = 0.00f;
    this->bAllowSurfaceOffset = false;
    this->SurfaceRadius = 0.00f;
    this->SurfaceTranslationScale = 0.00f;
    this->RotationMaxHeight = 0.00f;
}

