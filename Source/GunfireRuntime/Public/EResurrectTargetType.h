#pragma once
#include "CoreMinimal.h"
#include "EResurrectTargetType.generated.h"

UENUM(BlueprintType)
enum class EResurrectTargetType : uint8 {
    Dead,
    Wounded,
    Both,
};

