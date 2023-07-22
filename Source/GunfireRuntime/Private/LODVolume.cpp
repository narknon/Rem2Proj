#include "LODVolume.h"
#include "Components/BoxComponent.h"

void ALODVolume::SetLODVisibility(ELODVolumeVisibility LODType) {
}

ALODVolume::ALODVolume() {
    this->Update = false;
    this->UpdateManuallyOnly = false;
    this->VolumePriority = -1.00f;
    this->DebugShowLOD = ELODVolumeVisibility::All;
    this->FilterBP = NULL;
    this->ModifyVisibilitySameFrame = false;
    this->LODShouldApplyDistanceOveride = false;
    this->ApplyOcclusionOverride = false;
    this->ModifyVisibiltyByDistance = false;
    this->ShouldBeActivelyManaged = true;
    this->VisibiltyDistance = 24000.00f;
    this->HiddenDistance = 37500.00f;
    this->ActorTransitionPerFrame = 100;
    this->DistanceMultiplier = 1.00f;
    this->Volume = CreateDefaultSubobject<UBoxComponent>(TEXT("Volume"));
    this->bReadyForModifications = false;
    this->bActorAddedtoWorld = false;
    this->bIsActive = false;
    this->OwningTileID = 0;
    this->CurrentVisibility = ELODVolumeVisibility::All;
    this->bPendingVisibility = false;
    this->CurrentPendingVisibleIndex = 0;
    this->CurrentPendingHiddenIndex = 0;
    this->bEmptyPendingVisible = false;
    this->bEmptyPendingHidden = false;
}

