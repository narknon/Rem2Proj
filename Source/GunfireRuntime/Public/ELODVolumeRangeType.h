#pragma once
#include "CoreMinimal.h"
#include "ELODVolumeRangeType.generated.h"

UENUM(BlueprintType)
enum class ELODVolumeRangeType : uint8 {
    Invalid,
    NearRange,
    MidRange,
    OutOfRange,
};

