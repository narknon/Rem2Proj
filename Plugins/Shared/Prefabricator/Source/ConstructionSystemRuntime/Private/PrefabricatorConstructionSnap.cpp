#include "PrefabricatorConstructionSnap.h"
#include "PrefabricatorConstructionSnapComponent.h"

APrefabricatorConstructionSnap::APrefabricatorConstructionSnap() {
    this->ConstructionSnapComponent = CreateDefaultSubobject<UPrefabricatorConstructionSnapComponent>(TEXT("SnapComponent"));
}

