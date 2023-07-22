#pragma once
#include "CoreMinimal.h"
#include "ELadderTrafficType.generated.h"

UENUM(BlueprintType)
enum class ELadderTrafficType : uint8 {
    Occupancy,
    Interest,
    All,
};

