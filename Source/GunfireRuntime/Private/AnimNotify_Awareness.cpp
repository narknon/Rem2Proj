#include "AnimNotify_Awareness.h"

UAnimNotify_Awareness::UAnimNotify_Awareness() {
    this->Source = EAwarenessSource::Us;
    this->SignalType = EAwarenessSignal::Sound;
    this->Radius = 500.00f;
}

