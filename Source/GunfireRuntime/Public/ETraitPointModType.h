#pragma once
#include "CoreMinimal.h"
#include "ETraitPointModType.generated.h"

UENUM(BlueprintType)
enum class ETraitPointModType : uint8 {
    Stat,
    Equipment,
    None,
};

