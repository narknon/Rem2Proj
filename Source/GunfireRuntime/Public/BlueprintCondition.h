#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "BlueprintCondition.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UBlueprintCondition : public UCondition {
    GENERATED_BODY()
public:
    UBlueprintCondition();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TestCondition(AActor* Actor) const;
    
};

