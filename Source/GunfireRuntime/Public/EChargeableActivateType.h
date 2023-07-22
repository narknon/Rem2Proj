#pragma once
#include "CoreMinimal.h"
#include "EChargeableActivateType.generated.h"

UENUM(BlueprintType)
enum class EChargeableActivateType : uint8 {
    Press,
    Hold,
};

