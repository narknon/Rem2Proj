#pragma once
#include "CoreMinimal.h"
#include "EVisState.generated.h"

UENUM(BlueprintType)
enum class EVisState : uint8 {
    Unknown,
    DontCare,
    Visible,
    NotVisible,
    LostSight,
};

