#include "CameraShotNodeEntryData.h"

FCameraShotNodeEntryData::FCameraShotNodeEntryData() {
    this->TargetOverride = ESequenceOriginLocationOverride::DialogOwner;
    this->IgnoreViewTargetRotation = false;
    this->IgnoreViewTargetTransform = false;
}

