#pragma once
#include "CoreMinimal.h"
#include "ETimeDilationMode.generated.h"

UENUM(BlueprintType)
enum class ETimeDilationMode : uint8 {
    Enabled,
    AnimationOnly,
    Disabled,
};

