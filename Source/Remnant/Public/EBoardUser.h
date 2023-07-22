#pragma once
#include "CoreMinimal.h"
#include "EBoardUser.generated.h"

UENUM(BlueprintType)
enum class EBoardUser : uint8 {
    None,
    Player,
    Opponent,
};

