#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinState.generated.h"

UENUM(BlueprintType)
enum class EPlayerJoinState : uint8 {
    Disconnected,
    SynchronizingData,
    JoiningAsPlayer,
    JoiningAsSpectator,
    JoinedAsPlayer,
    JoinedAsSpectator,
};

