#include "PortalCameraState.h"

UPortalCameraState::UPortalCameraState() {
    this->BlendInTime = 0.40f;
    this->BlendOutTime = 1.00f;
    this->bOverrideUprightBlendOutTime = false;
    this->UprightBlendOutTime = 1.00f;
    this->BlendOutMinimumPitch = -10.00f;
    this->EaseExp = 2.00f;
    this->PortalSurfaceEpsilon = 5.00f;
    this->PortalExtraHeightOffset = 0.00f;
    this->BlendInMinDistance = 100.00f;
    this->MinDistanceStartAlpha = 0.00f;
    this->MinDistanceStopAlpha = 0.90f;
    this->ExitWorldBlendingTime = 0.00f;
    this->EntryPortal = NULL;
    this->ExitPortal = NULL;
}

