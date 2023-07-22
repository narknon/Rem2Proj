#pragma once
#include "CoreMinimal.h"
#include "EClimbStateType.generated.h"

UENUM(BlueprintType)
enum class EClimbStateType : uint8 {
    Traversal,
    Reorient,
    Idle,
};

