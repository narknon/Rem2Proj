#pragma once
#include "CoreMinimal.h"
#include "BlackboardObjectValue.generated.h"

USTRUCT(BlueprintType)
struct FBlackboardObjectValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckForNull;
    
    GUNFIRERUNTIME_API FBlackboardObjectValue();
};

