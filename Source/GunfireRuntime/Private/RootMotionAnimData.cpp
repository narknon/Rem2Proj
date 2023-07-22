#include "RootMotionAnimData.h"

URootMotionAnimData::URootMotionAnimData() {
    this->bHasComputedData = false;
    this->bHasSignificantTranslation = false;
    this->bHasSignificantRotation = false;
    this->bHasSignificantRootMotion = false;
    this->TranslationDistance = 0.00f;
    this->RotationDegrees = 0.00f;
    this->RootMotionStartTime = 0.00f;
    this->RootMotionStopTime = 0.00f;
}

