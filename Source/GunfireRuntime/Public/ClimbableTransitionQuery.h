#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ClimbableTransitionQuery.generated.h"

class UClimbingStateBase;
class UClimbingTransitionSet;

USTRUCT(BlueprintType)
struct FClimbableTransitionQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UClimbingTransitionSet> TransitionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClimbingStateBase* BestState;
    
    GUNFIRERUNTIME_API FClimbableTransitionQuery();
};

