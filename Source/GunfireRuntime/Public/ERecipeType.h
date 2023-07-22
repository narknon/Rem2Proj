#pragma once
#include "CoreMinimal.h"
#include "ERecipeType.generated.h"

UENUM(BlueprintType)
enum class ERecipeType : uint8 {
    Craft,
    Decompose,
    Upgrade,
    Infusion,
};

