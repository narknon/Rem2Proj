#include "PlacementHelperComponent.h"

void UPlacementHelperComponent::OnPostEditMove(bool bFinished) {
}

UPlacementHelperComponent::UPlacementHelperComponent() {
    this->AlignTolerance = 10.00f;
    this->AlignRadius = 0.00f;
    this->DesiredHeight = 0.00f;
    this->bUpdateOnLevelLoad = false;
}

