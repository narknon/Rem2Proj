#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "KeyCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UKeyCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
public:
    UKeyCondition();
};

