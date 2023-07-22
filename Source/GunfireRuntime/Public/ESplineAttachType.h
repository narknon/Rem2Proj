#pragma once
#include "CoreMinimal.h"
#include "ESplineAttachType.generated.h"

UENUM(BlueprintType)
namespace ESplineAttachType {
    enum Type {
        LocationOnly,
        RotationOnly,
        LocationAndRotation,
    };
}

