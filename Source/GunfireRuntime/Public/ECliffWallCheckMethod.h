#pragma once
#include "CoreMinimal.h"
#include "ECliffWallCheckMethod.generated.h"

UENUM(BlueprintType)
enum class ECliffWallCheckMethod : uint8 {
    Front,
    LeftRight,
};

