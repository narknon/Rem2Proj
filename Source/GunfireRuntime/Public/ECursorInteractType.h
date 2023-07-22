#pragma once
#include "CoreMinimal.h"
#include "ECursorInteractType.generated.h"

UENUM(BlueprintType)
enum class ECursorInteractType : uint8 {
    Focus,
    Release,
};

