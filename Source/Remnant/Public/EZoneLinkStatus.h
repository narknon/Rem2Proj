#pragma once
#include "CoreMinimal.h"
#include "EZoneLinkStatus.generated.h"

UENUM(BlueprintType)
enum class EZoneLinkStatus : uint8 {
    None,
    Unloaded,
    Loaded,
};

