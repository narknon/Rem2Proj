#pragma once
#include "CoreMinimal.h"
#include "EAnimationState.generated.h"

UENUM(BlueprintType)
enum class EAnimationState : uint8 {
    Started,
    Stopped,
};

