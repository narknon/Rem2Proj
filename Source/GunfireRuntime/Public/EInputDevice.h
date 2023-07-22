#pragma once
#include "CoreMinimal.h"
#include "EInputDevice.generated.h"

UENUM(BlueprintType)
enum class EInputDevice : uint8 {
    None,
    KeyboardAndMouse,
    Gamepad,
    Touch,
};

