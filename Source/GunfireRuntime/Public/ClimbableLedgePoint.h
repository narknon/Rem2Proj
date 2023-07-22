#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClimbableLedgePoint.generated.h"

USTRUCT(BlueprintType)
struct FClimbableLedgePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    GUNFIRERUNTIME_API FClimbableLedgePoint();
};

