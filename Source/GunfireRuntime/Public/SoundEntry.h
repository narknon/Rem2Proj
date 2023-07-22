#pragma once
#include "CoreMinimal.h"
#include "SoftSoundGunfire.h"
#include "SoundEntryBase.h"
#include "SoundEntry.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USoundEntry : public USoundEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftSoundGunfire> Sounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreloadSounds;
    
    USoundEntry();
};

