#pragma once
#include "CoreMinimal.h"
#include "ELookTargetType.generated.h"

UENUM(BlueprintType)
enum class ELookTargetType : uint8 {
    Simple,
    OnlyIfTargeted,
    OnlyWithLOS,
};

