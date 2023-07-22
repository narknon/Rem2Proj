#pragma once
#include "CoreMinimal.h"
#include "ActorStateID.h"
#include "Condition.h"
#include "Templates/SubclassOf.h"
#include "CanClimbCondition.generated.h"

class UClimbingTransitionSet;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCanClimbCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorStateID ClimbingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UClimbingTransitionSet> TransitionSet;
    
    UCanClimbCondition();
};

