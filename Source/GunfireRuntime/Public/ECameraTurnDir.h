#pragma once
#include "CoreMinimal.h"
#include "ECameraTurnDir.generated.h"

UENUM(BlueprintType)
enum class ECameraTurnDir : uint8 {
    None,
    Left,
    Right,
};

