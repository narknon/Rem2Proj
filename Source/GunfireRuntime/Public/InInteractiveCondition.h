#pragma once
#include "CoreMinimal.h"
#include "ActorStateID.h"
#include "Condition.h"
#include "InInteractiveCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInInteractiveCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorStateID InteractiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidateInteractive;
    
public:
    UInInteractiveCondition();
};

