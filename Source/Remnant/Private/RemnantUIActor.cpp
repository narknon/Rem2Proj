#include "RemnantUIActor.h"

void ARemnantUIActor::SetCursorStateOnInstance(ECursorOverrideState CursorActiveState) {
}

void ARemnantUIActor::DeviceChangedCallback(int32 ControllerId, EInputDevice CurrentInputDevice, EInputDevice NewInputDevice) {
}

ARemnantUIActor::ARemnantUIActor() {
    this->TravelLock = EDialogTravelLock::None;
    this->bAllowedDuringTravel = false;
    this->bEnableControllerCursor = false;
}

