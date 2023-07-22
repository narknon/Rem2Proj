#pragma once
#include "CoreMinimal.h"
#include "EDialogLocation.generated.h"

UENUM(BlueprintType)
enum class EDialogLocation : uint8 {
    None,
    Center,
    CameraCenter,
    HMDAnchor,
};

