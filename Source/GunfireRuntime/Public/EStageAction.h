#pragma once
#include "CoreMinimal.h"
#include "EStageAction.generated.h"

UENUM(BlueprintType)
enum class EStageAction : uint8 {
    Push,
    Set,
    Pop,
};

