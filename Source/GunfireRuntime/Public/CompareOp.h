#pragma once
#include "CoreMinimal.h"
#include "CompareOp.generated.h"

UENUM(BlueprintType)
enum class CompareOp : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanEqual,
    LessThanEqual,
    Equal,
};

