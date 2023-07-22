#pragma once
#include "CoreMinimal.h"
#include "ButtonState.generated.h"

UENUM(BlueprintType)
enum class ButtonState : uint8 {
    Pressed,
    Released,
    Down,
    Up,
};

