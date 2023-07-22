#pragma once
#include "CoreMinimal.h"
#include "SaveGameUserSetting.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameUserSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString Value;
    
    GUNFIRESAVESYSTEM_API FSaveGameUserSetting();
};

