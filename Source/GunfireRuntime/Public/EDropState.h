#pragma once
#include "CoreMinimal.h"
#include "EDropState.generated.h"

UENUM(BlueprintType)
enum class EDropState : uint8 {
    Idle,
    Dropping,
    Bounce,
    SecondBounce,
};

