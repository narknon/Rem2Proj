#pragma once
#include "CoreMinimal.h"
#include "EGroundCheckType.generated.h"

UENUM(BlueprintType)
enum class EGroundCheckType : uint8 {
    OnGround,
    NearGround,
};

