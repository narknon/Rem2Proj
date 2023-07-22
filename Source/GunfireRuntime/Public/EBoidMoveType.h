#pragma once
#include "CoreMinimal.h"
#include "EBoidMoveType.generated.h"

UENUM(BlueprintType)
enum class EBoidMoveType : uint8 {
    Ground,
    Water,
    Air,
};

