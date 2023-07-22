#pragma once
#include "CoreMinimal.h"
#include "ETagLocation.generated.h"

UENUM(BlueprintType)
enum class ETagLocation : uint8 {
    Character,
    Anim,
    TacticalPoint,
};

