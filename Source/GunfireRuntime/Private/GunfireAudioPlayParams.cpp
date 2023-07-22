#include "GunfireAudioPlayParams.h"

FGunfireAudioPlayParams::FGunfireAudioPlayParams() {
    this->VolumeMultiplier = 0.00f;
    this->PitchMultiplier = 0.00f;
    this->StartTime = 0.00f;
    this->bRandomizeStartTime = false;
    this->VolumeFadeDuration = 0.00f;
    this->bApplyReverb = false;
    this->bApplyOcclusion = false;
    this->bAutoDestroy = false;
}

