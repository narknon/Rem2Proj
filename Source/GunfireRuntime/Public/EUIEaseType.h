#pragma once
#include "CoreMinimal.h"
#include "EUIEaseType.generated.h"

UENUM(BlueprintType)
enum class EUIEaseType : uint8 {
    EaseIn,
    EaseOut,
    EaseInOut,
    SmoothCD,
};

