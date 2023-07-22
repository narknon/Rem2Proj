#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ELadderDirection.h"
#include "LadderObstructionCondition.generated.h"

UCLASS(Blueprintable)
class REMNANT_API ULadderObstructionCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TestLOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ObstructionMustBeOnLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELadderDirection CheckDirection;
    
public:
    ULadderObstructionCondition();
};

