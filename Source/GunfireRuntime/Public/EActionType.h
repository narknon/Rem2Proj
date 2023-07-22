#pragma once
#include "CoreMinimal.h"
#include "EActionType.generated.h"

UENUM(BlueprintType)
enum class EActionType : uint8 {
    Dialog,
    Action,
    Flow,
    Trigger,
};

