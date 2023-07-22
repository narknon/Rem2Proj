#pragma once
#include "CoreMinimal.h"
#include "ECooldownScope.generated.h"

UENUM(BlueprintType)
enum class ECooldownScope : uint8 {
    Local,
    Target,
};

