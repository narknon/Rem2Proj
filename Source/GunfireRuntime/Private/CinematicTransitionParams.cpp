#include "CinematicTransitionParams.h"

FCinematicTransitionParams::FCinematicTransitionParams() {
    this->DoCustomTransition = false;
    this->NeedsMovementToStartTransition = false;
    this->ExitBlendTime = 0.00f;
    this->AspectRatioBlendTime = 0.00f;
}

