#pragma once
#include "CoreMinimal.h"
#include "ClimbGroupTransition.generated.h"

USTRUCT(BlueprintType)
struct FClimbGroupTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName To;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTimeOverride;
    
    GUNFIRERUNTIME_API FClimbGroupTransition();
};

