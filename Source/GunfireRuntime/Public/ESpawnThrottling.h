#pragma once
#include "CoreMinimal.h"
#include "ESpawnThrottling.generated.h"

UENUM(BlueprintType)
enum class ESpawnThrottling : uint8 {
    NoThrottling,
    ThrottleWeightOnPlayers,
    ThrottleWeightFromAllSpawns,
    ThrottleWeightFromEncounter,
    ThrottleWeightFromOwnerEncounters,
};

