#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ItemSocketCondition.generated.h"

class AItem;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UItemSocketCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> Item;
    
    UItemSocketCondition();
};

