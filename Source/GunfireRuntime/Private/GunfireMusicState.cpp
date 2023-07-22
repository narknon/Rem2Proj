#include "GunfireMusicState.h"

FGunfireMusicState::FGunfireMusicState() {
    this->Type = EMusicState::None;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->RestartOnEntry = false;
}

