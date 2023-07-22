#pragma once
#include "CoreMinimal.h"
#include "PlayStateContext.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPlayStateContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Reason;
    
    GUNFIRERUNTIME_API FPlayStateContext();
};

