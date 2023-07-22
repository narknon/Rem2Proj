#pragma once
#include "CoreMinimal.h"
#include "ERevokeType.generated.h"

UENUM(BlueprintType)
enum class ERevokeType : uint8 {
    Default,
    Remove,
    Disable,
};

