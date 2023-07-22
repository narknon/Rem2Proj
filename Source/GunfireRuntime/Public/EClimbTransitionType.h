#pragma once
#include "CoreMinimal.h"
#include "EClimbTransitionType.generated.h"

UENUM(BlueprintType)
enum class EClimbTransitionType : uint8 {
    Any,
    Contiguous,
    NonContiguous,
    NonContiguousWithInputPrompt,
};

