#pragma once
#include "CoreMinimal.h"
#include "EQueryShapeType.generated.h"

UENUM(BlueprintType)
enum class EQueryShapeType : uint8 {
    Sphere,
    Box,
};

