#pragma once
#include "CoreMinimal.h"
#include "ClimbableLedgePoint.h"
#include "ClimbableLedge.generated.h"

USTRUCT(BlueprintType)
struct FClimbableLedge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClimbableLedgePoint> Points;
    
    GUNFIRERUNTIME_API FClimbableLedge();
};

