#pragma once
#include "CoreMinimal.h"
#include "ClimbingStateBase.h"
#include "EClimbStateType.h"
#include "ClimbingState.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UClimbingState : public UClimbingStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClimbStateType Type;
    
    UClimbingState();
};

