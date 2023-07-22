#pragma once
#include "CoreMinimal.h"
#include "SoundGunfire.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FSoundGunfire {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SoundObject;
    
public:
    FSoundGunfire();
};

