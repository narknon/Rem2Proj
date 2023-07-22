#pragma once
#include "CoreMinimal.h"
#include "SoundGunfire.h"
#include "GunfireMusicStinger.generated.h"

USTRUCT(BlueprintType)
struct FGunfireMusicStinger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundGunfire Sound;
    
    GUNFIRERUNTIME_API FGunfireMusicStinger();
};

