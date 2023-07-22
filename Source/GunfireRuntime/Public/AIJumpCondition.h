#pragma once
#include "CoreMinimal.h"
#include "ActorStateID.h"
#include "Condition.h"
#include "AIJumpCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIJumpCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorStateID JumpState;
    
public:
    UAIJumpCondition();
};

