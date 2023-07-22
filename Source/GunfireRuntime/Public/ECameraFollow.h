#pragma once
#include "CoreMinimal.h"
#include "ECameraFollow.generated.h"

UENUM(BlueprintType)
enum class ECameraFollow : uint8 {
    Stationary,
    FollowXYZ,
    FollowZ,
};

