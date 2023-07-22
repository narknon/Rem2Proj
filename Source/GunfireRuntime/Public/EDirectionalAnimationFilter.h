#pragma once
#include "CoreMinimal.h"
#include "EDirectionalAnimationFilter.generated.h"

UENUM(BlueprintType)
enum class EDirectionalAnimationFilter : uint8 {
    None,
    DefaultToLeft,
    DefaultToRight,
};

