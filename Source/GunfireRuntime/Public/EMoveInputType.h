#pragma once
#include "CoreMinimal.h"
#include "EMoveInputType.generated.h"

UENUM(BlueprintType)
enum class EMoveInputType : uint8 {
    Full,
    Horizontal,
    Vertical,
    Upwards,
    Downwards,
};

