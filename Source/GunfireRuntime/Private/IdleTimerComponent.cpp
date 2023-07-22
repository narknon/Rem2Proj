#include "IdleTimerComponent.h"

void UIdleTimerComponent::Ping() {
}

UIdleTimerComponent::UIdleTimerComponent() {
    this->Timeout = 180.00f;
    this->TimeoutUpdateInterval = 1.00f;
    this->IdleTime = 0.00f;
}

