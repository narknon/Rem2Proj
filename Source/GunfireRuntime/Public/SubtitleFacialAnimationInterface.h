#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SubtitleFacialAnimationInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class USubtitleFacialAnimationInterface : public UInterface {
    GENERATED_BODY()
};

class ISubtitleFacialAnimationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AActor*> GetFacialAnimationTargets();
    
};

