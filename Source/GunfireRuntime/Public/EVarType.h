#pragma once
#include "CoreMinimal.h"
#include "EVarType.generated.h"

UENUM(BlueprintType)
enum class EVarType : uint8 {
    None,
    Bool,
    Int,
    Float,
    Name,
};

