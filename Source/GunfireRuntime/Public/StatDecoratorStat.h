#pragma once
#include "CoreMinimal.h"
#include "StatDecoratorStat.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FStatDecoratorStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scalar;
    
    FStatDecoratorStat();
};

