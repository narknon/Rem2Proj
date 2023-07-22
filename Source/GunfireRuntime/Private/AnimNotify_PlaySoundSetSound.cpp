#include "AnimNotify_PlaySoundSetSound.h"

UAnimNotify_PlaySoundSetSound::UAnimNotify_PlaySoundSetSound() {
    this->bStateTransient = false;
    this->bFilterDuringCinematics = true;
    this->EquipmentType = NULL;
    this->bIncludeEquippedMods = true;
    this->bUseMainMesh = false;
    this->EquipmentSocketIndex = -1;
}

