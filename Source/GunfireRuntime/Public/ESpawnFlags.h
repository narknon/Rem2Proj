#pragma once
#include "CoreMinimal.h"
#include "ESpawnFlags.generated.h"

UENUM(BlueprintType)
enum class ESpawnFlags : uint8 {
    None,
    NavMesh,
    NavAccessible,
    OutOfSight = 0x4,
    InView = 0x8,
    InFieldOfView = 0x10,
};

