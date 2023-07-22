#pragma once
#include "CoreMinimal.h"
#include "ESwimCameraState.generated.h"

UENUM(BlueprintType)
enum class ESwimCameraState : uint8 {
    Emerged,
    Emerging,
    Submerged,
    Submerging,
};

