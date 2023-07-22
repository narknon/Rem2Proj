#pragma once
#include "CoreMinimal.h"
#include "EOnlineMatchmakerState.generated.h"

UENUM(BlueprintType)
enum class EOnlineMatchmakerState : uint8 {
    Idle,
    FindingSession,
};

