#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "HasDialogOptionsCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UHasDialogOptionsCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DialogTag;
    
public:
    UHasDialogOptionsCondition();
};

