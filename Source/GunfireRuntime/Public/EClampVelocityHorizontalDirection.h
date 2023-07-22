#pragma once
#include "CoreMinimal.h"
#include "EClampVelocityHorizontalDirection.generated.h"

UENUM(BlueprintType)
enum class EClampVelocityHorizontalDirection : uint8 {
    Current,
    Input,
    Facing,
};

