#pragma once
#include "CoreMinimal.h"
#include "ELogicalOperator.h"
#include "InteractiveConditions.generated.h"

class UCondition;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FInteractiveConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELogicalOperator LogicalOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCondition*> Conditions;
    
    FInteractiveConditions();
};

