#pragma once
#include "CoreMinimal.h"
#include "SaveGameAchievementProgress.h"
#include "SaveGamePersistence.h"
#include "SaveGameUserSetting.h"
#include "SaveGameProfile.generated.h"

UCLASS(Blueprintable)
class GUNFIRESAVESYSTEM_API USaveGameProfile : public USaveGamePersistence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSaveGameUserSetting> UserSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSaveGameAchievementProgress> AchievementProgress;
    
    USaveGameProfile();
};

