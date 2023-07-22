#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ENavAreaFlag.h"
#include "AINavLinkCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAINavLinkCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterByAreaFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavAreaFlag AreaFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAheadDistance;
    
public:
    UAINavLinkCondition();
};

