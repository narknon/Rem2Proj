#pragma once
#include "CoreMinimal.h"
#include "EMapGenAttributeScope.generated.h"

UENUM(BlueprintType)
enum class EMapGenAttributeScope : uint8 {
    Tile,
    Region,
    World,
};

