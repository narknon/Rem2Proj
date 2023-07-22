#include "AnimNotifyState_FaceTarget.h"

UAnimNotifyState_FaceTarget::UAnimNotifyState_FaceTarget() {
    this->Facing = CharacterFacing::MoveDir;
    this->SetFacingOnExit = true;
    this->FacingOnExit = CharacterFacing::Current;
    this->RestoreFacingOnExit = false;
    this->TurnSpeed = 360.00f;
}

