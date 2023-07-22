#include "AIPointOfInterestComponent.h"

UAIPointOfInterestComponent::UAIPointOfInterestComponent() {
    this->MinUpdateDelay = 0.50f;
    this->MaxUpdateDelay = 1.00f;
    this->DestinationPOI = NULL;
    this->QueuedPOI = NULL;
    this->bSnapToInitialDestination = true;
}

