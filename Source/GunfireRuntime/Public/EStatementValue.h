#pragma once
#include "CoreMinimal.h"
#include "EStatementValue.generated.h"

UENUM(BlueprintType)
enum class EStatementValue : uint8 {
    Constant,
    Variable,
    Condition,
};

