#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "Templates/SubclassOf.h"
#include "EquippedItemChangedCondition.generated.h"

class UItemType;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEquippedItemChangedCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> ItemType;
    
public:
    UEquippedItemChangedCondition();
};

