#pragma once
#include "CoreMinimal.h"
#include "EMoveInputMethod.generated.h"

UENUM(BlueprintType)
enum class EMoveInputMethod : uint8 {
    CameraRelativeYaw,
    CameraRelativeYawAndPitch,
};

