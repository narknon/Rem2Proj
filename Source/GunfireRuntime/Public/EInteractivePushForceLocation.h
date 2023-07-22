#pragma once
#include "CoreMinimal.h"
#include "EInteractivePushForceLocation.generated.h"

UENUM(BlueprintType)
enum class EInteractivePushForceLocation : uint8 {
    None,
    Anchor,
    AnchorAlignedToInput,
    NonAnchor,
};

