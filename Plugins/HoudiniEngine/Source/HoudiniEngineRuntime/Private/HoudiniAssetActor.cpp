#include "HoudiniAssetActor.h"
#include "HDAComponent.h"

AHoudiniAssetActor::AHoudiniAssetActor() {
    this->HoudiniAssetComponent = CreateDefaultSubobject<UHDAComponent>(TEXT("HoudiniAssetComponent"));
}

