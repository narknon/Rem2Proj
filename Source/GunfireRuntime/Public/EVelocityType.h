#pragma once
#include "CoreMinimal.h"
#include "EVelocityType.generated.h"

UENUM(BlueprintType)
enum class EVelocityType : uint8 {
    Full,
    Horizontal,
    Vertical,
};

