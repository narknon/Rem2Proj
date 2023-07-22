#pragma once
#include "CoreMinimal.h"
#include "ELadderDirection.generated.h"

UENUM(BlueprintType)
enum class ELadderDirection : uint8 {
    EVERYWHERE,
    ABOVE_ONLY,
    BELOW_ONLY,
};

