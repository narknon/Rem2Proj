#pragma once
#include "CoreMinimal.h"
#include "EStatementOp.generated.h"

UENUM(BlueprintType)
enum class EStatementOp : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanEqual,
    LessThanEqual,
    Equal,
    NotEqual,
    Increment,
    Decrement,
    Assign,
};

