#pragma once
#include "CoreMinimal.h"
#include "EGunObstructionTypes.generated.h"

UENUM(BlueprintType)
enum class EGunObstructionTypes : uint8 {
    Default,
    Extent,
    Crouching,
    CrouchExtent,
};

