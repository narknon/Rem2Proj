#pragma once
#include "CoreMinimal.h"
#include "EDecalReceiverType.generated.h"

UENUM(BlueprintType)
enum class EDecalReceiverType : uint8 {
    Inherit,
    Enabled,
    Disabled,
};

