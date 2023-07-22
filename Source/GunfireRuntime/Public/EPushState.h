#pragma once
#include "CoreMinimal.h"
#include "EPushState.generated.h"

UENUM(BlueprintType)
enum class EPushState : uint8 {
    Idle,
    Starting,
    Pushing,
    Stopping,
};

