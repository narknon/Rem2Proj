#pragma once
#include "CoreMinimal.h"
#include "EWorldResetServerState.generated.h"

UENUM(BlueprintType)
enum class EWorldResetServerState : uint8 {
    Idle,
    Pending,
    Respawning,
};

