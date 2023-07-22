#pragma once
#include "CoreMinimal.h"
#include "AudioComponentGunfire.h"
#include "EMusicState.h"
#include "MusicSetInstanceData.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FMusicSetInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMusicState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioComponentGunfire> AudioComponents;
    
    FMusicSetInstanceData();
};

