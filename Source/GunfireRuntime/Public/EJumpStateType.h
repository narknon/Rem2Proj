#pragma once
#include "CoreMinimal.h"
#include "EJumpStateType.generated.h"

UENUM(BlueprintType)
enum class EJumpStateType : uint8 {
    Approach,
    Impulse,
};

