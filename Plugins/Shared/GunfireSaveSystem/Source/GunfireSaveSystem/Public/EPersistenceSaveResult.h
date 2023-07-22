#pragma once
#include "CoreMinimal.h"
#include "EPersistenceSaveResult.generated.h"

UENUM(BlueprintType)
enum class EPersistenceSaveResult : uint8 {
    Success,
    Disabled,
    Busy,
    Unknown,
};

