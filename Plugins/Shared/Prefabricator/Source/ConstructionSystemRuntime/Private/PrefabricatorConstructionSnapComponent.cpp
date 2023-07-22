#include "PrefabricatorConstructionSnapComponent.h"

UPrefabricatorConstructionSnapComponent::UPrefabricatorConstructionSnapComponent() {
    this->SnapType = EPrefabricatorConstructionSnapType::Floor;
    this->bAlignToGroundSlope = false;
    this->bUseMaxGroundSlopeConstraint = false;
    this->MaxGroundPlacementSlope = 60.00f;
}

