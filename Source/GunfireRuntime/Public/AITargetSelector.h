#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RelevantActor.h"
#include "AITargetSelector.generated.h"

class AAIControllerGunfire;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAITargetSelector : public UObject {
    GENERATED_BODY()
public:
    UAITargetSelector();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Score(const AAIControllerGunfire* AIController, const FRelevantActor& Target);
    
};

