#pragma once
#include "CoreMinimal.h"
#include "EItemUseType.generated.h"

UENUM(BlueprintType)
enum class EItemUseType : uint8 {
    SinglePress,
    DoublePress,
    Hold,
    Release,
};

