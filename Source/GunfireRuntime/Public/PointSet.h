#pragma once
#include "CoreMinimal.h"
#include "PointSet.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FPointSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    FPointSet();
};

