#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EYesNo.h"
#include "InViewCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInViewCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYesNo CheckAllPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorBoundsScale;
    
public:
    UInViewCondition();
};

