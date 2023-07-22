#pragma once
#include "CoreMinimal.h"
#include "CinematicInstance_Base.h"
#include "OnSequenceInstanceEventTreeTriggerDelegate.h"
#include "SequenceInstance.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USequenceInstance : public UCinematicInstance_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequenceInstanceEventTreeTrigger OnEventTreeSequenceTrigger;
    
    USequenceInstance();
    UFUNCTION(BlueprintCallable)
    void OnEventTreeTrackTriggerNotified(FName TriggerName);
    
    UFUNCTION(BlueprintCallable)
    float GetElapsedDetails(float& OutStartTime, float& OutDuration, float& OutPercentage);
    
};

