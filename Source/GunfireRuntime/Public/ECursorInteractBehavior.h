#pragma once
#include "CoreMinimal.h"
#include "ECursorInteractBehavior.generated.h"

UENUM(BlueprintType)
enum class ECursorInteractBehavior : uint8 {
    Press,
    Release,
    UpAndDown,
};

