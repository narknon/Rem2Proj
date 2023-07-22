#pragma once
#include "CoreMinimal.h"
#include "CinematicTransitionParams.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FCinematicTransitionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoCustomTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedsMovementToStartTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AspectRatioBlendTime;
    
    FCinematicTransitionParams();
};

