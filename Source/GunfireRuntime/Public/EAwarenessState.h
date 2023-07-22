#pragma once
#include "CoreMinimal.h"
#include "EAwarenessState.generated.h"

UENUM(BlueprintType)
enum class EAwarenessState : uint8 {
    None,
    Alert,
    Aware,
};

