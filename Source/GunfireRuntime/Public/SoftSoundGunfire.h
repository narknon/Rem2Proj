#pragma once
#include "CoreMinimal.h"
#include "SoftSoundGunfire.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FSoftSoundGunfire {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> RefToSoundObject;
    
public:
    FSoftSoundGunfire();
};

