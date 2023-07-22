#pragma once
#include "CoreMinimal.h"
#include "ELineFittingMethod.generated.h"

UENUM(BlueprintType)
enum class ELineFittingMethod : uint8 {
    AverageDirection,
    LeastSquares,
    OrthogonalRegression,
};

