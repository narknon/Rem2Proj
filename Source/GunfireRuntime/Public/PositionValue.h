#pragma once
#include "CoreMinimal.h"
#include "EPositionSource.h"
#include "PositionValue.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FPositionValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPositionSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
    FPositionValue();
};

