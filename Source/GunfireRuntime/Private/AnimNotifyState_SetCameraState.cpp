#include "AnimNotifyState_SetCameraState.h"

UAnimNotifyState_SetCameraState::UAnimNotifyState_SetCameraState() {
    this->Camera = NULL;
    this->BlendInTime = -1.00f;
    this->BlendOutTime = -1.00f;
    this->OptionalExitCamera = NULL;
    this->OldState = NULL;
}

