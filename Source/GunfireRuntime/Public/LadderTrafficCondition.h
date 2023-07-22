#pragma once
#include "CoreMinimal.h"
#include "CompareOp.h"
#include "Condition.h"
#include "ELadderTrafficType.h"
#include "Templates/SubclassOf.h"
#include "LadderTrafficCondition.generated.h"

class ULadderParams;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULadderTrafficCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELadderTrafficType TrafficType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CompareOp Compare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULadderParams> LadderParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    ULadderTrafficCondition();
};

