#pragma once
#include "CoreMinimal.h"
#include "EOnlineCanJoinResult.generated.h"

UENUM(BlueprintType)
enum class EOnlineCanJoinResult : uint8 {
    Success,
    Banned,
    DLC,
    GameMode,
    NoSession,
    AlreadyJoined,
    Failed,
};

