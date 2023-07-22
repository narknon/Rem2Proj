#include "SequencerShotEntry.h"

USequencerShotEntry::USequencerShotEntry() {
    this->Sequence = NULL;
    this->TargetOverride = ESequenceOriginLocationOverride::NoOverride;
    this->CanLoop = false;
    this->PlaybackSpeedOverride = 0.00f;
    this->PlaybackStartTimeEndRange = 0.00f;
}

