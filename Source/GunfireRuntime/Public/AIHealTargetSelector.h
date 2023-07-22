#pragma once
#include "CoreMinimal.h"
#include "AITargetSelector.h"
#include "AIHealTargetSelector.generated.h"

UCLASS(Blueprintable)
class UAIHealTargetSelector : public UAITargetSelector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPctThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequireTag;
    
public:
    UAIHealTargetSelector();
};

