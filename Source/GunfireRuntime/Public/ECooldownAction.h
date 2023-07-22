#pragma once
#include "CoreMinimal.h"
#include "ECooldownAction.generated.h"

UENUM(BlueprintType)
enum class ECooldownAction : uint8 {
    SetCooldown,
    ResetCooldown,
    ResetCooldownOnExit,
};

