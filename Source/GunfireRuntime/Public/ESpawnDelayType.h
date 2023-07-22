#pragma once
#include "CoreMinimal.h"
#include "ESpawnDelayType.generated.h"

UENUM(BlueprintType)
enum class ESpawnDelayType : uint8 {
    DelayedSpawn,
    DelayedTriggers,
    DelayedSpawnAndTriggers,
    Disabled,
};

