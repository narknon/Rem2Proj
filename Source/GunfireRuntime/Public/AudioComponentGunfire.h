#pragma once
#include "CoreMinimal.h"
#include "AudioComponentGunfire.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAudioComponentGunfire {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AudioComponent;
    
public:
    FAudioComponentGunfire();
};

