#pragma once
#include "CoreMinimal.h"
#include "ESettingsPlatforms.generated.h"

UENUM()
enum class ESettingsPlatforms : int8 {
    PC = 0x1,
    XboxSeriesX,
    XboxSeriesS = 0x4,
    PS5 = 0x8,
};

