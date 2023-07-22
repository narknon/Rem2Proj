#pragma once
#include "CoreMinimal.h"
#include "ELogicalOperator.generated.h"

UENUM(BlueprintType)
enum class ELogicalOperator : uint8 {
    And,
    Or,
    Xor,
};

