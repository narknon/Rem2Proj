#pragma once
#include "CoreMinimal.h"
#include "ERemnantMaterialInputType.generated.h"

UENUM(BlueprintType)
enum class ERemnantMaterialInputType : uint8 {
    CappedPower,
    WrappedPower,
    NormalPower,
    TotalPower,
    Charges,
    Constant,
};

