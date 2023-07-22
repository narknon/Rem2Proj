#pragma once
#include "CoreMinimal.h"
#include "EAITacticalPointType.generated.h"

UENUM(BlueprintType)
enum class EAITacticalPointType : uint8 {
    Invalid,
    LowCover,
    CornerCoverLeft,
    CornerCoverRight,
    Dynamic,
    Custom,
};

