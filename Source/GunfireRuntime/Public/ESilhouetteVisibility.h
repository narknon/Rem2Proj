#pragma once
#include "CoreMinimal.h"
#include "ESilhouetteVisibility.generated.h"

UENUM(BlueprintType)
enum class ESilhouetteVisibility : uint8 {
    WhenNotVisible,
    WhenVisible,
    Always,
};

