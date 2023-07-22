#pragma once
#include "CoreMinimal.h"
#include "ESettingsPlatforms.generated.h"

UENUM(BlueprintType)
enum class ESettingsPlatforms : uint8 {
    PC = 0x1,
    XboxSeriesX,
    XboxSeriesS = 0x4,
    PS5 = 0x8,
};

