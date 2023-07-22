#pragma once
#include "CoreMinimal.h"
#include "ELODVolumeFilterClass.generated.h"

UENUM(BlueprintType)
enum class ELODVolumeFilterClass : uint8 {
    StaticMesh,
    Decal,
    Blueprints,
};

