#pragma once
#include "CoreMinimal.h"
#include "EQuantityValidationType.generated.h"

UENUM(BlueprintType)
enum class EQuantityValidationType : uint8 {
    ValidateAnyChange,
    ValidateIncrease,
    ValidateDecrease,
    NoValidation,
};

