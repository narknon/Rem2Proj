#include "AudioUserSetting.h"

void UAudioUserSetting::SetSoundClassMultiplier(float InMultiplier) {
}

float UAudioUserSetting::GetSoundClassMultiplier() const {
    return 0.0f;
}

UAudioUserSetting::UAudioUserSetting() {
    this->SoundClass = NULL;
    this->bAllowBoostedVolume = false;
}

