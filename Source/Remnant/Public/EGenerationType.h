#pragma once
#include "CoreMinimal.h"
#include "EGenerationType.generated.h"

UENUM(BlueprintType)
enum class EGenerationType : uint8 {
    TargetPlayerOnly,
    SharedItems,
    SharedAll,
    IndividualRollsPerPlayer,
};

