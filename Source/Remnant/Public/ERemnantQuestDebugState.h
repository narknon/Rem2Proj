#pragma once
#include "CoreMinimal.h"
#include "ERemnantQuestDebugState.generated.h"

UENUM(BlueprintType)
enum class ERemnantQuestDebugState : uint8 {
    None,
    Prototype,
    WorkInProgress,
    Final,
};

