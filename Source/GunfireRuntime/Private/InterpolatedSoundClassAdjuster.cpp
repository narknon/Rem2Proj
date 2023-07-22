#include "InterpolatedSoundClassAdjuster.h"

FInterpolatedSoundClassAdjuster::FInterpolatedSoundClassAdjuster() {
    this->SoundClassObject = NULL;
    this->VolumeAdjusterBegin = 0.00f;
    this->VolumeAdjusterEnd = 0.00f;
    this->PitchAdjusterBegin = 0.00f;
    this->PitchAdjusterEnd = 0.00f;
}

