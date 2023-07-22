#pragma once
#include "CoreMinimal.h"
#include "BlackboardBoolValue.generated.h"

USTRUCT(BlueprintType)
struct FBlackboardBoolValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    GUNFIRERUNTIME_API FBlackboardBoolValue();
};

