#pragma once
#include "CoreMinimal.h"
#include "EEaseType.generated.h"

UENUM(BlueprintType)
enum class EEaseType : uint8 {
    EaseIn,
    EaseOut,
    EaseInOut,
};

