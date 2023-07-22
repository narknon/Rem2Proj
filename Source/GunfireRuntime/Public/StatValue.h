#pragma once
#include "CoreMinimal.h"
#include "StatValue.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FStatValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FStatValue();
};

