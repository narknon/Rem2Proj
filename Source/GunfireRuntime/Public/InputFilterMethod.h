#pragma once
#include "CoreMinimal.h"
#include "InputFilterMethod.generated.h"

UENUM(BlueprintType)
enum class InputFilterMethod : uint8 {
    Both,
    ControllerOnly,
    KeyboardOnly,
};

