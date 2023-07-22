#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryDecoratorAction.generated.h"

UENUM(BlueprintType)
enum class EEnvQueryDecoratorAction : uint8 {
    PathToTacticalPoint,
    TacticalPointOnly,
    None,
};

