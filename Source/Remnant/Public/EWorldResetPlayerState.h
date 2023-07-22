#pragma once
#include "CoreMinimal.h"
#include "EWorldResetPlayerState.generated.h"

UENUM(BlueprintType)
enum class EWorldResetPlayerState : uint8 {
    Idle,
    FadeOutWorldDead,
    FadeOutWorldRespawned,
    FadeOutWorldAlive,
    FadeInWorld,
    WaitingForClient,
    ReadyForReset,
};

