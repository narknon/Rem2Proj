#pragma once
#include "CoreMinimal.h"
#include "ActorStateTransition.h"
#include "Conditions.h"
#include "InteractiveConditions.h"
#include "InteractiveStateTransition.generated.h"

class UActorState;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInteractiveStateTransition : public UActorStateTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestinationStateOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions ConditionsOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractiveConditions OtherConditions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActorState* CachedStateOther;
    
public:
    UInteractiveStateTransition();
};

