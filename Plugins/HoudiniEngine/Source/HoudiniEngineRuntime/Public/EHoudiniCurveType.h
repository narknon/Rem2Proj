#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniCurveType : uint8 {
    Invalid = 0xFF,
    Polygon = 0,
    Nurbs,
    Bezier,
    Points,
};

