#pragma once
#include "CoreMinimal.h"
#include "EAdhesionActivateMode.generated.h"

UENUM(BlueprintType)
enum class EAdhesionActivateMode : uint8 {
    Always,
    CameraInput,
    CameraOrMoveInput,
};

