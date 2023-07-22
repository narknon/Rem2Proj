#include "MoveInputStateDecorator.h"

UMoveInputStateDecorator::UMoveInputStateDecorator() {
    this->bRestoreOnExit = true;
    this->bEnableMoveInput = true;
    this->bOverrideMoveInputMethod = false;
    this->MoveInputMethod = EMoveInputMethod::CameraRelativeYawAndPitch;
}

