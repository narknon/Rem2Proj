#pragma once
#include "CoreMinimal.h"
#include "SaveGameAchievementProgress.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameAchievementProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName AchievementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    GUNFIRESAVESYSTEM_API FSaveGameAchievementProgress();
};

