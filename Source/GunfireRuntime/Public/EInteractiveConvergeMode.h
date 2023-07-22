#pragma once
#include "CoreMinimal.h"
#include "EInteractiveConvergeMode.generated.h"

UENUM(BlueprintType)
enum class EInteractiveConvergeMode : uint8 {
    NoConverge,
    AttachOnly,
    FaceAnchor,
    Converge,
    ConvergeKeepUpright,
};

