#pragma once
#include "CoreMinimal.h"
#include "EClimbInputMethod.generated.h"

UENUM(BlueprintType)
enum class EClimbInputMethod : uint8 {
    None,
    MoveInput,
    Prompt,
    MoveInputAndPrompt,
};

