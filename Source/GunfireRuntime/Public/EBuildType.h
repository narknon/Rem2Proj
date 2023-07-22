#pragma once
#include "CoreMinimal.h"
#include "EBuildType.generated.h"

UENUM(BlueprintType)
enum class EBuildType : uint8 {
    Debug,
    Development,
    Test,
    Shipping,
};

