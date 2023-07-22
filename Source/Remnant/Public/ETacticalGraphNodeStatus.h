#pragma once
#include "CoreMinimal.h"
#include "ETacticalGraphNodeStatus.generated.h"

UENUM(BlueprintType)
enum class ETacticalGraphNodeStatus : uint8 {
    Generated,
    Dirty,
    Stitch,
};

