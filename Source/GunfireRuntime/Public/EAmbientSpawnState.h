#pragma once
#include "CoreMinimal.h"
#include "EAmbientSpawnState.generated.h"

UENUM(BlueprintType)
enum class EAmbientSpawnState : uint8 {
    Unloaded,
    Loading,
    Loaded,
    Spawning,
    Spawned,
};

