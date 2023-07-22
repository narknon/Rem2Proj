#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "Conditions.h"
#include "EActorContext.h"
#include "ActorContextCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UActorContextCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorContext Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions Conditions;
    
    UActorContextCondition();
};

