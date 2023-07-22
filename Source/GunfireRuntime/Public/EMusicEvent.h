#pragma once
#include "CoreMinimal.h"
#include "EMusicEvent.generated.h"

UENUM(BlueprintType)
enum class EMusicEvent : uint8 {
    None,
    BeginLevelLoad,
    FinishLevelLoad,
};

