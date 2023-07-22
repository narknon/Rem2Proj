#pragma once
#include "CoreMinimal.h"
#include "ELadderOccupancySearch.generated.h"

UENUM(BlueprintType)
enum class ELadderOccupancySearch : uint8 {
    RUNG_ABOVE,
    RUNG_BELOW,
    ENTRY_FROM_TOP,
    ENTRY_FROM_BOTTOM,
};

