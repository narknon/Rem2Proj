#pragma once
#include "CoreMinimal.h"
#include "EActorCustomizationMaterialParameterType.generated.h"

UENUM(BlueprintType)
enum class EActorCustomizationMaterialParameterType : uint8 {
    Scalar,
    Color,
    Texture,
    Tween,
};

