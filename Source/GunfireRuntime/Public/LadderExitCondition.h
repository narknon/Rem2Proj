#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "LadderExitCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULadderExitCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideNumExitRungs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRungsFromTop;
    
    ULadderExitCondition();
};

