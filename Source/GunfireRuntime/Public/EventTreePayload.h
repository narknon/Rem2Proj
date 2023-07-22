#pragma once
#include "CoreMinimal.h"
#include "EventTreePayload.generated.h"

USTRUCT(BlueprintType)
struct FEventTreePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    GUNFIRERUNTIME_API FEventTreePayload();
};

