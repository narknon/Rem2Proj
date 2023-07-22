#pragma once
#include "CoreMinimal.h"
#include "Conditions.h"
#include "EventTreeNodeCondition.generated.h"

USTRUCT(BlueprintType)
struct FEventTreeNodeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions Conditions;
    
    GUNFIRERUNTIME_API FEventTreeNodeCondition();
};

