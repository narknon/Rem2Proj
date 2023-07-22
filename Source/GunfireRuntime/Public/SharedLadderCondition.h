#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "SharedLadderCondition.generated.h"

class AActor;
class ULadderCacheComponent;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API USharedLadderCondition : public UCondition {
    GENERATED_BODY()
public:
    USharedLadderCondition();
protected:
    UFUNCTION(BlueprintCallable)
    ULadderCacheComponent* GetLadderCache(AActor* Actor) const;
    
};

