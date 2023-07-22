#pragma once
#include "CoreMinimal.h"
#include "BlackboardClassValue.generated.h"

USTRUCT(BlueprintType)
struct FBlackboardClassValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TObjectPtr<UClass> Value;
    
    GUNFIRERUNTIME_API FBlackboardClassValue();
};

