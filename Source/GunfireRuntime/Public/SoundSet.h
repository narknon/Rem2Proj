#pragma once
#include "CoreMinimal.h"
#include "InheritableNameTagAsset.h"
#include "SoundSet.generated.h"

class UObject;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USoundSet : public UInheritableNameTagAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PreloadSounds;
    
public:
    USoundSet();
};

