#pragma once
#include "CoreMinimal.h"
#include "EVideoDeviceVendor.generated.h"

UENUM(BlueprintType)
enum class EVideoDeviceVendor : uint8 {
    UNKNOWN,
    NVIDIA,
    AMD,
    INTEL,
};

