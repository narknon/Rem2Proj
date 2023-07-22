#pragma once
#include "CoreMinimal.h"
#include "EOnlineSessionSearchState.generated.h"

UENUM(BlueprintType)
enum class EOnlineSessionSearchState : uint8 {
    Idle,
    UpdatingList,
    FindingSession,
    FindingFriendSessions,
};

