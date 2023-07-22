#pragma once
#include "CoreMinimal.h"
#include "ELODVolumeVisibility.generated.h"

UENUM(BlueprintType)
enum class ELODVolumeVisibility : uint8 {
    All,
    None,
    Near,
    Distant,
};

