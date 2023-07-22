#pragma once
#include "CoreMinimal.h"
#include "EWindupState.generated.h"

UENUM(BlueprintType)
enum class EWindupState : uint8 {
    None,
    Windup,
    Overdraw,
};

