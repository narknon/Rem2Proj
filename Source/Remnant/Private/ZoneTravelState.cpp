#include "ZoneTravelState.h"

FZoneTravelState::FZoneTravelState() {
    this->CurrentTravelLock = EZoneTravelLock::None;
    this->bIsZoneTravelPending = false;
    this->TravelCountdown = 0.00f;
    this->ExclusiveTravelMenuPlayer = NULL;
    this->bInitializingZones = false;
    this->NumZones = 0;
}

