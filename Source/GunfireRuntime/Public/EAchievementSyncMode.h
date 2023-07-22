#pragma once
#include "CoreMinimal.h"
#include "EAchievementSyncMode.generated.h"

UENUM(BlueprintType)
enum class EAchievementSyncMode : uint8 {
    NoAchievementUnlock,
    AchievementUnlock,
};

