#pragma once
#include "CoreMinimal.h"
#include "ETraitValidationType.generated.h"

UENUM(BlueprintType)
enum class ETraitValidationType : uint8 {
    NoValidation,
    ValidateOnRemove,
};

