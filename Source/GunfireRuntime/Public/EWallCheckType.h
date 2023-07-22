#pragma once
#include "CoreMinimal.h"
#include "EWallCheckType.generated.h"

UENUM(BlueprintType)
enum class EWallCheckType : uint8 {
    Full,
    Horizontal,
    Vertical,
    None,
};

