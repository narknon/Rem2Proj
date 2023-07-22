#include "DialogCameraShotInfo.h"

FDialogCameraShotInfo::FDialogCameraShotInfo() {
    this->ViewTarget = NULL;
    this->ShotEntry = NULL;
    this->IgnoreViewTargetRotation = false;
    this->IgnoreViewTargetTransform = false;
    this->TargetLocalPlayer = false;
}

