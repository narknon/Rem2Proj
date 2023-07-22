#pragma once
#include "CoreMinimal.h"
#include "CompareOp.h"
#include "BlackboardNumValue.generated.h"

USTRUCT(BlueprintType)
struct FBlackboardNumValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CompareOp Compare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    GUNFIRERUNTIME_API FBlackboardNumValue();
};

