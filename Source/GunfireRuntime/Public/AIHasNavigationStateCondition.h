#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ENavigationType.h"
#include "AIHasNavigationStateCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIHasNavigationStateCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavigationType NavigationType;
    
public:
    UAIHasNavigationStateCondition();
};

