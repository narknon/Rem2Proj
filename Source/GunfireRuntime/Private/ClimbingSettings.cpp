#include "ClimbingSettings.h"

UClimbingSettings::UClimbingSettings() {
    this->bGenerateClimbablePoints = false;
    this->bOnlyGenerateInClimbModifiers = false;
    this->MinimumFallDistance = 100.00f;
    this->MinimumCharacterRadius = 50.00f;
    this->SweepHeightOffset = 40.00f;
    this->SweepForwardOffset = 60.00f;
    this->MinimumDistanceFromClimbableSurface = 50.00f;
    this->StationaryPlatformRadius = 10.00f;
    this->bGenerateContiguousLedges = true;
    this->LedgeMatchingDistanceThreshold = 160.00f;
    this->LedgeMatchingCosineThresh = 0.77f;
    this->LedgeMatchingSweepRadius = 20.00f;
    this->LedgeMatchingSweepOffset = 50.00f;
    this->DissolveDistanceThreshold = 4.00f;
    this->LedgeExpandIterationDistance = 50.00f;
    this->LedgeExpandMaxDistanceToAdjacentLedges = 50.00f;
    this->LedgeExpandBufferDistance = 75.00f;
    this->LedgeMergeDistance = 105.00f;
    this->SinglePointExpandLength = 40.00f;
}

