#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "SoftTargetRangeOverrideStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USoftTargetRangeOverrideStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftTargetRange;
    
public:
    USoftTargetRangeOverrideStateDecorator();
};

