#pragma once
#include "CoreMinimal.h"
#include "EResourceDistribution.generated.h"

UENUM(BlueprintType)
enum class EResourceDistribution : uint8 {
    Quantity,
    Per10Tiles,
    Per100SpawnPoints,
};

