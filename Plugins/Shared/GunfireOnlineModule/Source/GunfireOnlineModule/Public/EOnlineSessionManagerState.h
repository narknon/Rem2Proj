#pragma once
#include "CoreMinimal.h"
#include "EOnlineSessionManagerState.generated.h"

UENUM(BlueprintType)
enum class EOnlineSessionManagerState : uint8 {
    Idle,
    CreatingSession,
    ChangingSession,
    ChangingSessionComplete,
    JoiningSession,
    JoiningPresenceSession,
    ReCreatingSession,
    DestroyingSession,
    StartingSession,
};

