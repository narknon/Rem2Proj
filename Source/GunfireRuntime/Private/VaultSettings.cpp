#include "VaultSettings.h"

UVaultSettings::UVaultSettings() {
    this->QueryType = EVaultQueryType::Walking;
    this->VaultDirection = EVaultDirectionType::Actor;
    this->LedgeDirectionArc = 0.00f;
    this->LedgeDirectionAdditionalSamples = 0;
    this->VaultOverDistance = 145.00f;
    this->VaultUpDistance = 145.00f;
    this->VaultPivotHeight = 100.00f;
    this->VaultPivotOffset = 30.00f;
    this->VaultPivotIterations = 1;
    this->VaultCastDownDistance = 30.00f;
    this->VaultMinHeight = 90.00f;
    this->VaultMaxHeight = 120.00f;
    this->VaultOpeningSize = 90.00f;
    this->VaultCheckDistance = 100.00f;
    this->VaultMaxSideStep = 45.00f;
    this->StartingOffsetExtraCapsuleRadiusScale = 0.25f;
    this->AIStartingOffsetExtraCapsuleRadiusScale = 0.25f;
    this->MinLedgeDistance = 0.00f;
    this->bOnlyIfValidEndingLocation = false;
    this->EndingLocationMaxHeightDeviation = 25.00f;
    this->BackwardsTraceScale = 0.20f;
    this->bOnlyIfNotWalkable = false;
    this->WalkableCheckIterations = 3;
    this->MinCliffHeight = 0.00f;
    this->VaultCollisionChannel = ECC_WorldStatic;
    this->ActorRadiusScale = 1.00f;
    this->bTestForCeiling = false;
    this->CeilingCheckRadiusScale = 0.50f;
    this->VaultOverNavArea = NULL;
    this->VaultUpNavArea = NULL;
    this->bRequiresClimbingData = false;
}

