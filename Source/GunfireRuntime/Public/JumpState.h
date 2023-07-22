#pragma once
#include "CoreMinimal.h"
#include "EJumpStateType.h"
#include "Templates/SubclassOf.h"
#include "TraversalState.h"
#include "JumpState.generated.h"

class UCliffConditionParams;
class ULandingPredictionConditionParams;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UJumpState : public UTraversalState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpStateType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCliffConditionParams> CliffParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LedgeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULandingPredictionConditionParams> LandingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableGravityUntilJumpImpulse;
    
    UJumpState();
};

