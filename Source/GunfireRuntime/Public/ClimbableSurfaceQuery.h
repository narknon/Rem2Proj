#pragma once
#include "CoreMinimal.h"
#include "ClimbableSurfaceResult.h"
#include "ClimbableSurfaceQuery.generated.h"

class UClimbingStateBase;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FClimbableSurfaceQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClimbingStateBase* State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FClimbableSurfaceResult Result;
    
    FClimbableSurfaceQuery();
};

