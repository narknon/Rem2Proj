#pragma once
#include "CoreMinimal.h"
#include "EHeuristicBoundsPanelAlignment.generated.h"

UENUM(BlueprintType)
enum class EHeuristicBoundsPanelAlignment : uint8 {
    TopLeft,
    Top,
    TopRight,
    Right,
    BottomRight,
    Bottom,
    BottomLeft,
    Left,
    Center,
};

