#pragma once
#include "CoreMinimal.h"
#include "EPathState.generated.h"

UENUM(BlueprintType)
enum class EPathState : uint8 {
    DontCare,
    NotValid,
    Valid,
};

