#include "PingRequestSubContext.h"

UPingRequestSubContext::UPingRequestSubContext() {
    this->RequestType = EPingSubRequestType::PrimaryAmmo;
    this->RequestDuration = 0.00f;
    this->RequestHudIcon = NULL;
}

