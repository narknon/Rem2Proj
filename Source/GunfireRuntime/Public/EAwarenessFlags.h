#pragma once
#include "CoreMinimal.h"
#include "EAwarenessFlags.generated.h"

UENUM(BlueprintType)
enum class EAwarenessFlags : uint8 {
    Undefined,
    SmallCritter,
    LargeCritter,
    Monster,
    Player,
    UserType1,
    UserType2,
    UserType3,
    UserType4,
};

