#pragma once
#include "CoreMinimal.h"
#include "EFallConditionCheck.generated.h"

UENUM(BlueprintType)
enum class EFallConditionCheck : uint8 {
    IsNotFalling,
    IsSafeFall,
    IsUnsafeFall,
    IsFatalFall,
    IsUnsafeOrFatalFall,
    IsFalling,
};

