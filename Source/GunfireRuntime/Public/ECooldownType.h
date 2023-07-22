#pragma once
#include "CoreMinimal.h"
#include "ECooldownType.generated.h"

UENUM(BlueprintType)
enum class ECooldownType : uint8 {
    Named,
    AllNames,
    Global,
};

