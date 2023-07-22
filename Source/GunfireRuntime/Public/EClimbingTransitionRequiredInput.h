#pragma once
#include "CoreMinimal.h"
#include "EClimbingTransitionRequiredInput.generated.h"

UENUM(BlueprintType)
enum class EClimbingTransitionRequiredInput : uint8 {
    Any,
    None,
    MoveInputOnly,
    PromptOnly,
    MoveInputAndPrompt,
    RequiresMoveInput,
    RequiresPrompt,
};

