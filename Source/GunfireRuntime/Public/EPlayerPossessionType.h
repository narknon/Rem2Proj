#pragma once
#include "CoreMinimal.h"
#include "EPlayerPossessionType.generated.h"

UENUM(BlueprintType)
enum class EPlayerPossessionType : uint8 {
    NoPlayerPossession,
    Local,
    Instigator,
    Player1,
    Player2,
    Player3,
    Player4,
};

