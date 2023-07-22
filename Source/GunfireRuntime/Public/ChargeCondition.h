#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EVelocityType.h"
#include "ChargeCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UChargeCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVelocityType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTimeDilation;
    
public:
    UChargeCondition();
};

