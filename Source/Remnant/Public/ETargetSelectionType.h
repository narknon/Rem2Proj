#pragma once
#include "CoreMinimal.h"
#include "ETargetSelectionType.generated.h"

UENUM(BlueprintType)
enum class ETargetSelectionType : uint8 {
    Random,
    HighestThreat,
    LowestThreat,
};

