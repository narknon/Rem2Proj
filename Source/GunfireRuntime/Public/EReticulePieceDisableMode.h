#pragma once
#include "CoreMinimal.h"
#include "EReticulePieceDisableMode.generated.h"

UENUM(BlueprintType)
enum class EReticulePieceDisableMode : uint8 {
    Always,
    WithConditions,
    Never,
    OnlyWhileDisabled,
};

