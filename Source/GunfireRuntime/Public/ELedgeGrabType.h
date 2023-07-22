#pragma once
#include "CoreMinimal.h"
#include "ELedgeGrabType.generated.h"

UENUM(BlueprintType)
enum class ELedgeGrabType : uint8 {
    Solid,
    Inset,
    Hanging,
    Cling,
};

