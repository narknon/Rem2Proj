#pragma once
#include "CoreMinimal.h"
#include "EPlatform.generated.h"

UENUM(BlueprintType)
enum class EPlatform : uint8 {
    Unknown,
    PC,
    PS5,
    XboxSeriesS,
    XboxSeriesX,
};

