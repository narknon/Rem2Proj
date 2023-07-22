#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "Templates/SubclassOf.h"
#include "AITargetSelectorStateDecorator.generated.h"

class UAITargetSelector;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAITargetSelectorStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAITargetSelector> TargetSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockTarget;
    
public:
    UAITargetSelectorStateDecorator();
};

