#pragma once
#include "CoreMinimal.h"
#include "EAmbientPriorityPolicy.generated.h"

UENUM(BlueprintType)
enum class EAmbientPriorityPolicy : uint8 {
    FullyNested,
    ManualLevelDepth,
};

