#pragma once
#include "CoreMinimal.h"
#include "ELedgeGrabType.h"
#include "TraversalCondition.h"
#include "LedgeGrabCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULedgeGrabCondition : public UTraversalCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELedgeGrabType LedgeGrabType;
    
public:
    ULedgeGrabCondition();
};

