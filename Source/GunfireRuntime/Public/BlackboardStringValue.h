#pragma once
#include "CoreMinimal.h"
#include "BlackboardStringValue.generated.h"

USTRUCT(BlueprintType)
struct FBlackboardStringValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    GUNFIRERUNTIME_API FBlackboardStringValue();
};

