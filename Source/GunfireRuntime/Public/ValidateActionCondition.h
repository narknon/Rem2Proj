#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "Templates/SubclassOf.h"
#include "ValidateActionCondition.generated.h"

class UActionBase;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UValidateActionCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActionBase> ActionBP;
    
public:
    UValidateActionCondition();
};

