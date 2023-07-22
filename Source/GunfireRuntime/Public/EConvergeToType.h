#pragma once
#include "CoreMinimal.h"
#include "EConvergeToType.generated.h"

UENUM(BlueprintType)
enum class EConvergeToType : uint8 {
    TacticalPoint,
    BlackboardKey,
    LocalPlayer,
};

