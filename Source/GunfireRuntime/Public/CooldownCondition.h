#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CooldownCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCooldownCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Cooldown;
    
public:
    UCooldownCondition();
};

