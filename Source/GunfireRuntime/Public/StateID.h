#pragma once
#include "CoreMinimal.h"
#include "StateID.generated.h"

USTRUCT(BlueprintType)
struct FStateID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 StateRuntimeID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 StateChangeID;
    
    GUNFIRERUNTIME_API FStateID();
};

