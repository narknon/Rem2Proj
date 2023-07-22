#pragma once
#include "CoreMinimal.h"
#include "EChallengeAchievementSyncMode.generated.h"

UENUM(BlueprintType)
enum class EChallengeAchievementSyncMode : uint8 {
    ServerDataAuthoratative,
    ClientDataAuthoratative,
    NeitherIsAuthoritative,
};

