#pragma once
#include "CoreMinimal.h"
#include "WeakAudioComponentGunfire.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FWeakAudioComponentGunfire {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> RefToAudioComponent;
    
public:
    FWeakAudioComponentGunfire();
};

