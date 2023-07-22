#pragma once
#include "CoreMinimal.h"
#include "ECheatExecutionType.generated.h"

UENUM(BlueprintType)
enum class ECheatExecutionType : uint8 {
    CHEAT_CONSOLE,
    CHEAT_MANAGER,
    CHEAT_BLUEPRINT,
    CHEAT_MAX UMETA(Hidden),
};

