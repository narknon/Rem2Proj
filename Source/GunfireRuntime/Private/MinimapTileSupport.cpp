#include "MinimapTileSupport.h"
#include "PersistenceComponent.h"

AMinimapTileSupport::AMinimapTileSupport() {
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("Persistence"));
    this->RevealMinimap = false;
}

