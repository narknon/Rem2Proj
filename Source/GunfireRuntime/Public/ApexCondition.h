#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ApexCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UApexCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumXYVelocity;
    
public:
    UApexCondition();
};

