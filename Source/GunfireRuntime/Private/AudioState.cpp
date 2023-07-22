#include "AudioState.h"

FAudioState::FAudioState() {
    this->StateID = NULL;
    this->OnEnterSoundCue = NULL;
    this->PrimarySoundCue = NULL;
    this->OnExitSoundCue = NULL;
    this->SoundClass = NULL;
}

