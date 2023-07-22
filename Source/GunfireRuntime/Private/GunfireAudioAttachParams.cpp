#include "GunfireAudioAttachParams.h"

FGunfireAudioAttachParams::FGunfireAudioAttachParams() {
    this->LocationType = EAttachLocation::KeepRelativeOffset;
    this->StopWhenOwnerDestroyed = 0;
}

