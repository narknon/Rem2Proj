#pragma once
#include "CoreMinimal.h"
#include "Conditions.h"
#include "ConditionalVariableDef.generated.h"

USTRUCT(BlueprintType)
struct FConditionalVariableDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions Conditions;
    
    GUNFIRERUNTIME_API FConditionalVariableDef();
};

