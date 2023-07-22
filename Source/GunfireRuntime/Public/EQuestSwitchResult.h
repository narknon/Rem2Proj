#pragma once
#include "CoreMinimal.h"
#include "EQuestSwitchResult.generated.h"

UENUM(BlueprintType)
enum class EQuestSwitchResult : uint8 {
    QuestNotStarted,
    QuestInProgress,
    QuestCompleteSuccess,
    QuestCompleteFailure,
    All,
};

