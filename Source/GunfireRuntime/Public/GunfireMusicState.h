#pragma once
#include "CoreMinimal.h"
#include "EMusicState.h"
#include "SoundGunfire.h"
#include "GunfireMusicState.generated.h"

USTRUCT(BlueprintType)
struct FGunfireMusicState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMusicState Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundGunfire Music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestartOnEntry;
    
    GUNFIRERUNTIME_API FGunfireMusicState();
};

