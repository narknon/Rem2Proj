#pragma once
#include "CoreMinimal.h"
#include "EDetailPriority.generated.h"

UENUM(BlueprintType)
enum class EDetailPriority : uint8 {
    Low,
    Normal,
    High,
    Manditory,
};

